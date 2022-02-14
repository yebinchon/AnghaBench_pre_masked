
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dw_mci_dma_slave {int dummy; } ;
struct dw_mci {TYPE_1__* dms; int dev; } ;
struct TYPE_3__ {int ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct dw_mci *VAR_3)
{

 VAR_3->dms = FUNC_3(sizeof(struct dw_mci_dma_slave), VAR_2);
 if (!VAR_3->dms)
  return -VAR_0;

 VAR_3->dms->ch = FUNC_1(VAR_3->dev, "rx-tx");
 if (!VAR_3->dms->ch) {
  FUNC_0(VAR_3->dev, "Failed to get external DMA channel.\n");
  FUNC_2(VAR_3->dms);
  VAR_3->dms = ((void*)0);
  return -VAR_1;
 }

 return 0;
}
