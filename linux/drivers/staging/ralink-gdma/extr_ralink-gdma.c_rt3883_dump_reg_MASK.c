
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct gdma_dma_dev {TYPE_1__ ddev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct gdma_dma_dev*,int ) ;

__attribute__((used)) static void FUNC_6(struct gdma_dma_dev *VAR_5, int VAR_6)
{
 FUNC_4(VAR_5->ddev.dev, "chan %d, src %08x, dst %08x, ctr0 %08x, ctr1 %08x, unmask %08x, done %08x, req %08x, ack %08x, fin %08x\n",
  VAR_6,
  FUNC_5(VAR_5, FUNC_3(VAR_6)),
  FUNC_5(VAR_5, FUNC_2(VAR_6)),
  FUNC_5(VAR_5, FUNC_0(VAR_6)),
  FUNC_5(VAR_5, FUNC_1(VAR_6)),
  FUNC_5(VAR_5, VAR_4),
  FUNC_5(VAR_5, VAR_1),
  FUNC_5(VAR_5, VAR_3),
  FUNC_5(VAR_5, VAR_0),
  FUNC_5(VAR_5, VAR_2));
}
