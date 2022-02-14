
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_nand_info {int xfer_type; int gpmc_irq_fifo; int gpmc_irq_count; int ecc_opt; int elm_dev; TYPE_3__* pdev; int dma; int phys_base; } ;
struct TYPE_5__ {int bytes; int size; int strength; void* write_subpage; void* write_page; void* read_page; void* correct; void* hwctl; void* mode; void* priv; void* calculate; int algo; } ;
struct TYPE_4__ {int write_buf; int read_buf; } ;
struct nand_chip {int bbt_options; int options; TYPE_2__ ecc; TYPE_1__ legacy; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct dma_slave_config {int src_maxburst; int dst_maxburst; void* dst_addr_width; void* src_addr_width; int dst_addr; int src_addr; } ;
struct device {int parent; } ;
typedef int dma_cap_mask_t ;
typedef int cfg ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;




 int VAR_15 ;






 int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int,int ,int ,char*,struct omap_nand_info*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,struct dma_slave_config*) ;
 int FUNC_9 (int ,int ,int,int,int) ;
 int FUNC_10 (struct dma_slave_config*,int ,int) ;
 int FUNC_11 (struct mtd_info*,int *) ;
 struct omap_nand_info* FUNC_12 (struct mtd_info*) ;
 void* VAR_17 ;
 void* FUNC_13 (struct mtd_info*) ;
 struct mtd_info* FUNC_14 (struct nand_chip*) ;
 int FUNC_15 (struct omap_nand_info*) ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int FUNC_18(struct nand_chip *VAR_36)
{
 struct mtd_info *VAR_37 = FUNC_14(VAR_36);
 struct omap_nand_info *VAR_38 = FUNC_12(VAR_37);
 struct device *VAR_39 = &VAR_38->pdev->dev;
 int VAR_40 = VAR_0;
 int VAR_41;
 dma_cap_mask_t VAR_42;
 int VAR_43;

 if (VAR_36->bbt_options & VAR_10)
  VAR_36->bbt_options |= VAR_9;
 else
  VAR_36->options |= VAR_15;


 switch (VAR_38->xfer_type) {
 case 134:
  VAR_36->legacy.read_buf = VAR_28;
  VAR_36->legacy.write_buf = VAR_33;
  break;

 case 137:

  break;

 case 136:
  FUNC_6(VAR_42);
  FUNC_5(VAR_4, VAR_42);
  VAR_38->dma = FUNC_7(VAR_39->parent, "rxtx");

  if (FUNC_0(VAR_38->dma)) {
   FUNC_2(VAR_39, "DMA engine request failed\n");
   return FUNC_1(VAR_38->dma);
  } else {
   struct dma_slave_config VAR_44;

   FUNC_10(&VAR_44, 0, sizeof(VAR_44));
   VAR_44.src_addr = VAR_38->phys_base;
   VAR_44.dst_addr = VAR_38->phys_base;
   VAR_44.src_addr_width = VAR_5;
   VAR_44.dst_addr_width = VAR_5;
   VAR_44.src_maxburst = 16;
   VAR_44.dst_maxburst = 16;
   VAR_43 = FUNC_8(VAR_38->dma, &VAR_44);
   if (VAR_43) {
    FUNC_2(VAR_39,
     "DMA engine slave config failed: %d\n",
     VAR_43);
    return VAR_43;
   }
   VAR_36->legacy.read_buf = VAR_26;
   VAR_36->legacy.write_buf = VAR_31;
  }
  break;

 case 135:
  VAR_38->gpmc_irq_fifo = FUNC_16(VAR_38->pdev, 0);
  if (VAR_38->gpmc_irq_fifo <= 0) {
   FUNC_2(VAR_39, "Error getting fifo IRQ\n");
   return -VAR_7;
  }
  VAR_43 = FUNC_4(VAR_39, VAR_38->gpmc_irq_fifo,
           VAR_24, VAR_8,
           "gpmc-nand-fifo", VAR_38);
  if (VAR_43) {
   FUNC_2(VAR_39, "Requesting IRQ %d, error %d\n",
    VAR_38->gpmc_irq_fifo, VAR_43);
   VAR_38->gpmc_irq_fifo = 0;
   return VAR_43;
  }

  VAR_38->gpmc_irq_count = FUNC_16(VAR_38->pdev, 1);
  if (VAR_38->gpmc_irq_count <= 0) {
   FUNC_2(VAR_39, "Error getting IRQ count\n");
   return -VAR_7;
  }
  VAR_43 = FUNC_4(VAR_39, VAR_38->gpmc_irq_count,
           VAR_24, VAR_8,
           "gpmc-nand-count", VAR_38);
  if (VAR_43) {
   FUNC_2(VAR_39, "Requesting IRQ %d, error %d\n",
    VAR_38->gpmc_irq_count, VAR_43);
   VAR_38->gpmc_irq_count = 0;
   return VAR_43;
  }

  VAR_36->legacy.read_buf = VAR_27;
  VAR_36->legacy.write_buf = VAR_32;

  break;

 default:
  FUNC_2(VAR_39, "xfer_type %d not supported!\n", VAR_38->xfer_type);
  return -VAR_6;
 }

 if (!FUNC_15(VAR_38))
  return -VAR_6;





 if (VAR_38->ecc_opt == VAR_16) {
  VAR_36->ecc.mode = VAR_14;
  VAR_36->ecc.algo = VAR_12;
  return 0;
 }


 switch (VAR_38->ecc_opt) {
 case 128:
  FUNC_3(VAR_39, "nand: using OMAP_ECC_HAM1_CODE_HW\n");
  VAR_36->ecc.mode = VAR_13;
  VAR_36->ecc.bytes = 3;
  VAR_36->ecc.size = 512;
  VAR_36->ecc.strength = 1;
  VAR_36->ecc.calculate = VAR_18;
  VAR_36->ecc.hwctl = VAR_22;
  VAR_36->ecc.correct = VAR_20;
  FUNC_11(VAR_37, &VAR_25);
  VAR_41 = VAR_36->ecc.bytes;

  if (!(VAR_36->options & VAR_11))
   VAR_40 = 1;

  break;

 case 131:
  FUNC_17("nand: using OMAP_ECC_BCH4_CODE_HW_DETECTION_SW\n");
  VAR_36->ecc.mode = VAR_13;
  VAR_36->ecc.size = 512;
  VAR_36->ecc.bytes = 7;
  VAR_36->ecc.strength = 4;
  VAR_36->ecc.hwctl = VAR_23;
  VAR_36->ecc.correct = VAR_17;
  VAR_36->ecc.calculate = VAR_19;
  FUNC_11(VAR_37, &VAR_30);

  VAR_41 = VAR_36->ecc.bytes + 1;

  VAR_36->ecc.priv = FUNC_13(VAR_37);
  if (!VAR_36->ecc.priv) {
   FUNC_2(VAR_39, "Unable to use BCH library\n");
   return -VAR_6;
  }
  break;

 case 132:
  FUNC_17("nand: using OMAP_ECC_BCH4_CODE_HW ECC scheme\n");
  VAR_36->ecc.mode = VAR_13;
  VAR_36->ecc.size = 512;

  VAR_36->ecc.bytes = 7 + 1;
  VAR_36->ecc.strength = 4;
  VAR_36->ecc.hwctl = VAR_23;
  VAR_36->ecc.correct = VAR_21;
  VAR_36->ecc.read_page = VAR_29;
  VAR_36->ecc.write_page = VAR_34;
  VAR_36->ecc.write_subpage = VAR_35;
  FUNC_11(VAR_37, &VAR_25);
  VAR_41 = VAR_36->ecc.bytes;

  VAR_43 = FUNC_9(VAR_38->elm_dev, VAR_2,
     VAR_37->writesize / VAR_36->ecc.size,
     VAR_36->ecc.size, VAR_36->ecc.bytes);
  if (VAR_43 < 0)
   return VAR_43;
  break;

 case 129:
  FUNC_17("nand: using OMAP_ECC_BCH8_CODE_HW_DETECTION_SW\n");
  VAR_36->ecc.mode = VAR_13;
  VAR_36->ecc.size = 512;
  VAR_36->ecc.bytes = 13;
  VAR_36->ecc.strength = 8;
  VAR_36->ecc.hwctl = VAR_23;
  VAR_36->ecc.correct = VAR_17;
  VAR_36->ecc.calculate = VAR_19;
  FUNC_11(VAR_37, &VAR_30);

  VAR_41 = VAR_36->ecc.bytes + 1;

  VAR_36->ecc.priv = FUNC_13(VAR_37);
  if (!VAR_36->ecc.priv) {
   FUNC_2(VAR_39, "unable to use BCH library\n");
   return -VAR_6;
  }
  break;

 case 130:
  FUNC_17("nand: using OMAP_ECC_BCH8_CODE_HW ECC scheme\n");
  VAR_36->ecc.mode = VAR_13;
  VAR_36->ecc.size = 512;

  VAR_36->ecc.bytes = 13 + 1;
  VAR_36->ecc.strength = 8;
  VAR_36->ecc.hwctl = VAR_23;
  VAR_36->ecc.correct = VAR_21;
  VAR_36->ecc.read_page = VAR_29;
  VAR_36->ecc.write_page = VAR_34;
  VAR_36->ecc.write_subpage = VAR_35;
  FUNC_11(VAR_37, &VAR_25);
  VAR_41 = VAR_36->ecc.bytes;

  VAR_43 = FUNC_9(VAR_38->elm_dev, VAR_3,
     VAR_37->writesize / VAR_36->ecc.size,
     VAR_36->ecc.size, VAR_36->ecc.bytes);
  if (VAR_43 < 0)
   return VAR_43;

  break;

 case 133:
  FUNC_17("Using OMAP_ECC_BCH16_CODE_HW ECC scheme\n");
  VAR_36->ecc.mode = VAR_13;
  VAR_36->ecc.size = 512;
  VAR_36->ecc.bytes = 26;
  VAR_36->ecc.strength = 16;
  VAR_36->ecc.hwctl = VAR_23;
  VAR_36->ecc.correct = VAR_21;
  VAR_36->ecc.read_page = VAR_29;
  VAR_36->ecc.write_page = VAR_34;
  VAR_36->ecc.write_subpage = VAR_35;
  FUNC_11(VAR_37, &VAR_25);
  VAR_41 = VAR_36->ecc.bytes;

  VAR_43 = FUNC_9(VAR_38->elm_dev, VAR_1,
     VAR_37->writesize / VAR_36->ecc.size,
     VAR_36->ecc.size, VAR_36->ecc.bytes);
  if (VAR_43 < 0)
   return VAR_43;

  break;
 default:
  FUNC_2(VAR_39, "Invalid or unsupported ECC scheme\n");
  return -VAR_6;
 }


 VAR_40 += (VAR_41 *
    (VAR_37->writesize / VAR_36->ecc.size));
 if (VAR_37->oobsize < VAR_40) {
  FUNC_2(VAR_39,
   "Not enough OOB bytes: required = %d, available=%d\n",
   VAR_40, VAR_37->oobsize);
  return -VAR_6;
 }

 return 0;
}
