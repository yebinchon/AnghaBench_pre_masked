
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtk_nfc {struct device* dev; scalar_t__ regs; int done; } ;
struct mtd_info {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,void*,int,int ) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 struct mtk_nfc* FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct mtk_nfc*,int ) ;
 int FUNC_10 (struct mtk_nfc*,int ) ;
 int FUNC_11 (struct mtk_nfc*,int,int ) ;
 int FUNC_12 (struct mtk_nfc*,int,int ) ;
 int FUNC_13 (scalar_t__,int,int,int,int ) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(struct mtd_info *VAR_16, struct nand_chip *VAR_17,
     const u8 *VAR_18, int VAR_19, int VAR_20)
{
 struct mtk_nfc *VAR_21 = FUNC_8(VAR_17);
 struct device *VAR_22 = VAR_21->dev;
 dma_addr_t VAR_23;
 u32 VAR_24;
 int VAR_25;

 VAR_23 = FUNC_2(VAR_22, (void *)VAR_18, VAR_20, VAR_4);
 VAR_25 = FUNC_3(VAR_21->dev, VAR_23);
 if (VAR_25) {
  FUNC_1(VAR_21->dev, "dma mapping error\n");
  return -VAR_5;
 }

 VAR_24 = FUNC_10(VAR_21, VAR_10) | VAR_0 | VAR_1;
 FUNC_12(VAR_21, VAR_24, VAR_10);

 FUNC_11(VAR_21, VAR_17->ecc.steps << VAR_3, VAR_11);
 FUNC_11(VAR_21, FUNC_6(VAR_23), VAR_13);
 FUNC_12(VAR_21, VAR_7, VAR_12);

 FUNC_5(&VAR_21->done);

 VAR_24 = FUNC_9(VAR_21, VAR_11) | VAR_2;
 FUNC_11(VAR_21, VAR_24, VAR_11);
 FUNC_12(VAR_21, VAR_15, VAR_14);

 VAR_25 = FUNC_14(&VAR_21->done, FUNC_7(500));
 if (!VAR_25) {
  FUNC_1(VAR_22, "program ahb done timeout\n");
  FUNC_12(VAR_21, 0, VAR_12);
  VAR_25 = -VAR_6;
  goto timeout;
 }

 VAR_25 = FUNC_13(VAR_21->regs + VAR_9, VAR_24,
     FUNC_0(VAR_24) >= VAR_17->ecc.steps,
     10, VAR_8);
 if (VAR_25)
  FUNC_1(VAR_22, "hwecc write timeout\n");

timeout:

 FUNC_4(VAR_21->dev, VAR_23, VAR_20, VAR_4);
 FUNC_11(VAR_21, 0, VAR_11);

 return VAR_25;
}
