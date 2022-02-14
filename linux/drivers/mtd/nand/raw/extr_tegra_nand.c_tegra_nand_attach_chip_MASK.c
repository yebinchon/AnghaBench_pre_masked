
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_nand_controller {scalar_t__ regs; int dev; } ;
struct tegra_nand_chip {int config; int config_ecc; int bch_config; } ;
struct TYPE_6__ {int size; int steps; int algo; int strength; int bytes; int write_oob; int read_oob; int write_page_raw; int read_page_raw; int write_page; int read_page; int mode; } ;
struct TYPE_4__ {int step_size; int strength; } ;
struct TYPE_5__ {TYPE_1__ eccreq; } ;
struct nand_chip {int bbt_options; int options; TYPE_3__ ecc; TYPE_2__ base; int controller; } ;
struct mtd_info {int writesize; scalar_t__ oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int,int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

 int VAR_29 ;

 int VAR_30 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,char*,int) ;
 int FUNC_4 (struct mtd_info*,int *) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_6 (struct nand_chip*,scalar_t__) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 struct tegra_nand_chip* FUNC_7 (struct nand_chip*) ;
 struct tegra_nand_controller* FUNC_8 (int ) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_39)
{
 struct tegra_nand_controller *VAR_40 = FUNC_8(VAR_39->controller);
 struct tegra_nand_chip *VAR_41 = FUNC_7(VAR_39);
 struct mtd_info *VAR_42 = FUNC_5(VAR_39);
 int VAR_43;
 int VAR_44;

 if (VAR_39->bbt_options & VAR_27)
  VAR_39->bbt_options |= VAR_26;

 VAR_39->ecc.mode = VAR_29;
 VAR_39->ecc.size = 512;
 VAR_39->ecc.steps = VAR_42->writesize / VAR_39->ecc.size;
 if (VAR_39->base.eccreq.step_size != 512) {
  FUNC_2(VAR_40->dev, "Unsupported step size %d\n",
   VAR_39->base.eccreq.step_size);
  return -VAR_24;
 }

 VAR_39->ecc.read_page = VAR_34;
 VAR_39->ecc.write_page = VAR_37;
 VAR_39->ecc.read_page_raw = VAR_35;
 VAR_39->ecc.write_page_raw = VAR_38;
 VAR_39->ecc.read_oob = VAR_33;
 VAR_39->ecc.write_oob = VAR_36;

 if (VAR_39->options & VAR_28)
  VAR_41->config |= VAR_9;

 if (VAR_39->ecc.algo == VAR_30) {
  if (VAR_42->writesize < 2048)
   VAR_39->ecc.algo = 128;
  else
   VAR_39->ecc.algo = 129;
 }

 if (VAR_39->ecc.algo == 129 && VAR_42->writesize < 2048) {
  FUNC_2(VAR_40->dev, "BCH supports 2K or 4K page size only\n");
  return -VAR_24;
 }

 if (!VAR_39->ecc.strength) {
  VAR_44 = FUNC_6(VAR_39, VAR_42->oobsize);
  if (VAR_44 < 0) {
   FUNC_2(VAR_40->dev,
    "No valid strength found, minimum %d\n",
    VAR_39->base.eccreq.strength);
   return VAR_44;
  }

  VAR_39->ecc.strength = VAR_44;
 }

 VAR_41->config_ecc = VAR_13 | VAR_19 |
      VAR_20;

 switch (VAR_39->ecc.algo) {
 case 128:
  VAR_43 = VAR_7 * VAR_39->ecc.strength;
  FUNC_4(VAR_42, &VAR_32);
  VAR_41->config_ecc |= VAR_12 | VAR_10 |
        VAR_11;
  switch (VAR_39->ecc.strength) {
  case 4:
   VAR_41->config_ecc |= VAR_21;
   break;
  case 6:
   VAR_41->config_ecc |= VAR_22;
   break;
  case 8:
   VAR_41->config_ecc |= VAR_23;
   break;
  default:
   FUNC_2(VAR_40->dev, "ECC strength %d not supported\n",
    VAR_39->ecc.strength);
   return -VAR_24;
  }
  break;
 case 129:
  VAR_43 = VAR_6 * VAR_39->ecc.strength;
  FUNC_4(VAR_42, &VAR_31);
  VAR_41->bch_config = VAR_0;
  switch (VAR_39->ecc.strength) {
  case 4:
   VAR_41->bch_config |= VAR_3;
   break;
  case 8:
   VAR_41->bch_config |= VAR_4;
   break;
  case 14:
   VAR_41->bch_config |= VAR_1;
   break;
  case 16:
   VAR_41->bch_config |= VAR_2;
   break;
  default:
   FUNC_2(VAR_40->dev, "ECC strength %d not supported\n",
    VAR_39->ecc.strength);
   return -VAR_24;
  }
  break;
 default:
  FUNC_2(VAR_40->dev, "ECC algorithm not supported\n");
  return -VAR_24;
 }

 FUNC_3(VAR_40->dev, "Using %s with strength %d per 512 byte step\n",
   VAR_39->ecc.algo == 129 ? "BCH" : "RS",
   VAR_39->ecc.strength);

 VAR_39->ecc.bytes = FUNC_1(VAR_43, VAR_5);

 switch (VAR_42->writesize) {
 case 256:
  VAR_41->config |= VAR_16;
  break;
 case 512:
  VAR_41->config |= VAR_18;
  break;
 case 1024:
  VAR_41->config |= VAR_14;
  break;
 case 2048:
  VAR_41->config |= VAR_15;
  break;
 case 4096:
  VAR_41->config |= VAR_17;
  break;
 default:
  FUNC_2(VAR_40->dev, "Unsupported writesize %d\n",
   VAR_42->writesize);
  return -VAR_25;
 }


 VAR_41->config_ecc |= VAR_41->config;


 VAR_41->config |= FUNC_0(VAR_42->oobsize - 1);
 FUNC_9(VAR_41->config, VAR_40->regs + VAR_8);

 return 0;
}
