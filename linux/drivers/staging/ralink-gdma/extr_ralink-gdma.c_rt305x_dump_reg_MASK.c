
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct gdma_dma_dev {TYPE_1__ ddev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct gdma_dma_dev*,int ) ;

__attribute__((used)) static void FUNC_6(struct gdma_dma_dev *VAR_2, int VAR_3)
{
 FUNC_4(VAR_2->ddev.dev, "chan %d, src %08x, dst %08x, ctr0 %08x, ctr1 %08x, intr %08x, signal %08x\n",
  VAR_3,
  FUNC_5(VAR_2, FUNC_3(VAR_3)),
  FUNC_5(VAR_2, FUNC_2(VAR_3)),
  FUNC_5(VAR_2, FUNC_0(VAR_3)),
  FUNC_5(VAR_2, FUNC_1(VAR_3)),
  FUNC_5(VAR_2, VAR_0),
  FUNC_5(VAR_2, VAR_1));
}
