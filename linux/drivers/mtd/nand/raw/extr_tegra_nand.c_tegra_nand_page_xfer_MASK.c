
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_nand_controller {int dev; int dma_complete; int command_complete; scalar_t__ regs; int cur_cs; } ;
struct nand_chip {int options; int cur_cs; int controller; } ;
struct mtd_info {int writesize; int oobsize; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,void*,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct tegra_nand_controller*) ;
 int FUNC_9 (struct tegra_nand_controller*) ;
 int FUNC_10 (struct nand_chip*,int ) ;
 struct tegra_nand_controller* FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct mtd_info *VAR_39, struct nand_chip *VAR_40,
    void *VAR_41, void *VAR_42, int VAR_43, int VAR_44,
    bool VAR_45)
{
 struct tegra_nand_controller *VAR_46 = FUNC_11(VAR_40->controller);
 enum dma_data_direction VAR_47 = VAR_45 ? VAR_18 : VAR_30;
 dma_addr_t VAR_48 = 0, VAR_49 = 0;
 u32 VAR_50, VAR_51, VAR_52;
 int VAR_53;

 FUNC_10(VAR_40, VAR_40->cur_cs);

 if (VAR_45) {
  FUNC_13(VAR_34, VAR_46->regs + VAR_2);
  FUNC_13(VAR_35, VAR_46->regs + VAR_3);
 } else {
  FUNC_13(VAR_36, VAR_46->regs + VAR_2);
  FUNC_13(VAR_33, VAR_46->regs + VAR_3);
 }
 VAR_51 = VAR_9 | VAR_13;


 VAR_50 = VAR_44 << 16;

 if (!VAR_41)
  VAR_50 |= VAR_39->writesize;
 FUNC_13(VAR_50, VAR_46->regs + VAR_0);

 if (VAR_40->options & VAR_37) {
  FUNC_13(VAR_44 >> 16, VAR_46->regs + VAR_1);
  VAR_51 |= VAR_6 | FUNC_0(5);
 } else {
  VAR_51 |= VAR_6 | FUNC_0(4);
 }

 if (VAR_41) {
  VAR_48 = FUNC_4(VAR_46->dev, VAR_41, VAR_39->writesize, VAR_47);
  VAR_53 = FUNC_5(VAR_46->dev, VAR_48);
  if (VAR_53) {
   FUNC_3(VAR_46->dev, "dma mapping error\n");
   return -VAR_31;
  }

  FUNC_13(VAR_39->writesize - 1, VAR_46->regs + VAR_16);
  FUNC_13(VAR_48, VAR_46->regs + VAR_15);
 }

 if (VAR_42) {
  VAR_49 = FUNC_4(VAR_46->dev, VAR_42, VAR_39->oobsize,
           VAR_47);
  VAR_53 = FUNC_5(VAR_46->dev, VAR_49);
  if (VAR_53) {
   FUNC_3(VAR_46->dev, "dma mapping error\n");
   VAR_53 = -VAR_31;
   goto err_unmap_dma_page;
  }

  FUNC_13(VAR_43 - 1, VAR_46->regs + VAR_17);
  FUNC_13(VAR_49, VAR_46->regs + VAR_38);
 }

 VAR_52 = VAR_23 | VAR_28 |
     VAR_24 | VAR_26 |
     VAR_20;

 if (VAR_41)
  VAR_52 |= VAR_21;
 if (VAR_42)
  VAR_52 |= VAR_22;

 if (VAR_45)
  VAR_52 |= VAR_25 | VAR_29;
 else
  VAR_52 |= VAR_27;

 FUNC_13(VAR_52, VAR_46->regs + VAR_19);

 VAR_51 |= VAR_10 | VAR_11 | FUNC_2(9) |
        FUNC_1(VAR_46->cur_cs);

 if (VAR_41)
  VAR_51 |= VAR_7;
 if (VAR_42)
  VAR_51 |= VAR_8;

 if (VAR_45)
  VAR_51 |= VAR_12;
 else
  VAR_51 |= VAR_14 | VAR_5;

 FUNC_13(VAR_51, VAR_46->regs + VAR_4);

 VAR_53 = FUNC_12(&VAR_46->command_complete,
       FUNC_7(500));
 if (!VAR_53) {
  FUNC_3(VAR_46->dev, "COMMAND timeout\n");
  FUNC_9(VAR_46);
  FUNC_8(VAR_46);
  VAR_53 = -VAR_32;
  goto err_unmap_dma;
 }

 VAR_53 = FUNC_12(&VAR_46->dma_complete,
       FUNC_7(500));
 if (!VAR_53) {
  FUNC_3(VAR_46->dev, "DMA timeout\n");
  FUNC_9(VAR_46);
  FUNC_8(VAR_46);
  VAR_53 = -VAR_32;
  goto err_unmap_dma;
 }
 VAR_53 = 0;

err_unmap_dma:
 if (VAR_42)
  FUNC_6(VAR_46->dev, VAR_49, VAR_39->oobsize, VAR_47);
err_unmap_dma_page:
 if (VAR_41)
  FUNC_6(VAR_46->dev, VAR_48, VAR_39->writesize, VAR_47);

 return VAR_53;
}
