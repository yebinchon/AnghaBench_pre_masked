
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mode; int bytes; int size; int strength; int write_page_raw; int read_page_raw; int write_page; int read_page; int algo; } ;
struct TYPE_5__ {int strength; } ;
struct TYPE_6__ {TYPE_1__ eccreq; } ;
struct nand_chip {int options; TYPE_3__ ecc; TYPE_2__ base; } ;
struct mtd_info {int writesize; scalar_t__ oobsize; } ;
struct TYPE_8__ {int forced; int enabled; struct micron_nand* rawbuf; } ;
struct micron_nand {TYPE_4__ ecc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct micron_nand*) ;
 struct micron_nand* FUNC_1 (scalar_t__,int ) ;
 struct micron_nand* FUNC_2 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct nand_chip*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct mtd_info*,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct nand_chip*,struct micron_nand*) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_17)
{
 struct mtd_info *VAR_18 = FUNC_7(VAR_17);
 struct micron_nand *VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_19 = FUNC_2(sizeof(*VAR_19), VAR_2);
 if (!VAR_19)
  return -VAR_1;

 FUNC_6(VAR_17, VAR_19);

 VAR_21 = FUNC_3(VAR_17);
 if (VAR_21)
  goto err_free_manuf_data;

 if (VAR_18->writesize == 2048)
  VAR_17->options |= VAR_5 | VAR_6;

 VAR_20 = FUNC_4(VAR_17);

 if (VAR_20 == VAR_3 &&
     VAR_17->ecc.mode != VAR_8) {
  FUNC_8("On-die ECC forcefully enabled, not supported\n");
  VAR_21 = -VAR_0;
  goto err_free_manuf_data;
 }

 if (VAR_17->ecc.mode == VAR_8) {
  if (VAR_20 == VAR_4) {
   FUNC_8("On-die ECC selected but not supported\n");
   VAR_21 = -VAR_0;
   goto err_free_manuf_data;
  }

  if (VAR_20 == VAR_3) {
   VAR_19->ecc.forced = 1;
   VAR_19->ecc.enabled = 1;
  }
  if (VAR_17->base.eccreq.strength == 4) {
   VAR_19->ecc.rawbuf = FUNC_1(VAR_18->writesize +
           VAR_18->oobsize,
           VAR_2);
   if (!VAR_19->ecc.rawbuf) {
    VAR_21 = -VAR_1;
    goto err_free_manuf_data;
   }
  }

  if (VAR_17->base.eccreq.strength == 4)
   FUNC_5(VAR_18,
       &VAR_9);
  else
   FUNC_5(VAR_18,
       &VAR_10);

  VAR_17->ecc.bytes = VAR_17->base.eccreq.strength * 2;
  VAR_17->ecc.size = 512;
  VAR_17->ecc.strength = VAR_17->base.eccreq.strength;
  VAR_17->ecc.algo = VAR_7;
  VAR_17->ecc.read_page = VAR_11;
  VAR_17->ecc.write_page = VAR_12;

  if (VAR_20 == VAR_3) {
   VAR_17->ecc.read_page_raw = VAR_14;
   VAR_17->ecc.write_page_raw = VAR_16;
  } else {
   VAR_17->ecc.read_page_raw = VAR_13;
   VAR_17->ecc.write_page_raw = VAR_15;
  }
 }

 return 0;

err_free_manuf_data:
 FUNC_0(VAR_19->ecc.rawbuf);
 FUNC_0(VAR_19);

 return VAR_21;
}
