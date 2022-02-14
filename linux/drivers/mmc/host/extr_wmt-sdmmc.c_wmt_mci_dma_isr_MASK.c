
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmt_mci_priv {scalar_t__ comp_cmd; int comp_dma; TYPE_2__* req; int dev; scalar_t__ sdmmc_base; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct wmt_mci_priv*) ;
 int FUNC_5 (struct wmt_mci_priv*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct wmt_mci_priv *VAR_6;

 int VAR_7;

 VAR_6 = (struct wmt_mci_priv *)VAR_5;

 VAR_7 = FUNC_3(VAR_6->sdmmc_base + VAR_3) & 0x0F;

 if (VAR_7 != VAR_0) {
  FUNC_2(VAR_6->dev, "DMA Error: Status = %d\n", VAR_7);
  VAR_6->req->data->error = -VAR_1;
  FUNC_0(VAR_6->comp_dma);
  return VAR_2;
 }

 VAR_6->req->data->error = 0;

 FUNC_5(VAR_6);

 FUNC_0(VAR_6->comp_dma);

 if (VAR_6->comp_cmd) {
  if (FUNC_1(VAR_6->comp_cmd)) {





   FUNC_4(VAR_6);
  }
 }

 return VAR_2;
}
