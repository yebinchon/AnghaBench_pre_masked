
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int dma_conf; scalar_t__ regs; int d_next; scalar_t__ desc_mode; } ;
struct ast_vhub_ep {TYPE_3__ epn; TYPE_2__* vhub; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ast_vhub_ep *VAR_4,
         bool VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;


 FUNC_6(0, VAR_4->epn.regs + VAR_1);


 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  VAR_6 = FUNC_4(VAR_4->epn.regs + VAR_1);
  VAR_6 = FUNC_0(VAR_6);
  if (VAR_6 == VAR_2 ||
      VAR_6 == VAR_3)
   break;
  FUNC_5(1);
 }
 if (VAR_8 >= 1000)
  FUNC_3(&VAR_4->vhub->pdev->dev, "Timeout waiting for DMA\n");


 if (!VAR_5)
  return;


 if (VAR_4->epn.desc_mode) {
  VAR_7 = FUNC_2(VAR_4->epn.d_next) |
   FUNC_1(VAR_4->epn.d_next);
  FUNC_6(VAR_7, VAR_4->epn.regs + VAR_0);


  FUNC_6(VAR_4->epn.dma_conf,
         VAR_4->epn.regs + VAR_1);
 } else {

  FUNC_6(VAR_4->epn.dma_conf,
         VAR_4->epn.regs + VAR_1);
 }
}
