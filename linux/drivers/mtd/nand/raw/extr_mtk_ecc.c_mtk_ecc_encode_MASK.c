
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mtk_ecc_config {int strength; int addr; int op; } ;
struct mtk_ecc {int dev; int eccdata; TYPE_1__* caps; scalar_t__ regs; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int parity_bits; scalar_t__* ecc_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct mtk_ecc*) ;
 int FUNC_7 (struct mtk_ecc*,struct mtk_ecc_config*) ;
 int FUNC_8 (struct mtk_ecc*,int ) ;
 int FUNC_9 (struct mtk_ecc*,int ) ;
 int FUNC_10 (int,int) ;

int FUNC_11(struct mtk_ecc *VAR_4, struct mtk_ecc_config *VAR_5,
     u8 *VAR_6, u32 VAR_7)
{
 dma_addr_t VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_4->dev, VAR_6, VAR_7, VAR_0);
 VAR_10 = FUNC_3(VAR_4->dev, VAR_8);
 if (VAR_10) {
  FUNC_1(VAR_4->dev, "dma mapping error\n");
  return -VAR_3;
 }

 VAR_5->op = VAR_1;
 VAR_5->addr = VAR_8;
 VAR_10 = FUNC_7(VAR_4, VAR_5);
 if (VAR_10) {
  FUNC_4(VAR_4->dev, VAR_8, VAR_7, VAR_0);
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_4, VAR_1);
 if (VAR_10)
  goto timeout;

 FUNC_9(VAR_4, VAR_1);


 VAR_9 = (VAR_5->strength * VAR_4->caps->parity_bits + 7) >> 3;


 FUNC_0(VAR_4->eccdata,
   VAR_4->regs + VAR_4->caps->ecc_regs[VAR_2],
   FUNC_10(VAR_9, 4));


 FUNC_5(VAR_6 + VAR_7, VAR_4->eccdata, VAR_9);
timeout:

 FUNC_4(VAR_4->dev, VAR_8, VAR_7, VAR_0);
 FUNC_6(VAR_4);

 return VAR_10;
}
