
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int va; } ;
struct mic_device {int dp_dma_addr; int dma_mbdev; int scdev; int vpdev; TYPE_3__* ops; TYPE_2__* intr_ops; int * dma_ch; int aper; TYPE_1__* pdev; int num_dma_ch; int dp; TYPE_4__ mmio; } ;
struct cosm_device {int dummy; } ;
struct TYPE_7__ {int (* load_mic_fw ) (struct mic_device*,int *) ;int (* send_firmware_intr ) (struct mic_device*) ;int (* write_spad ) (struct mic_device*,int ,int) ;} ;
struct TYPE_6__ {int (* enable_interrupts ) (struct mic_device*) ;} ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mic_device* FUNC_2 (struct cosm_device*) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int *,int *,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mic_device*) ;
 int VAR_9 ;
 int FUNC_6 (struct mic_device*) ;
 int FUNC_7 (struct mic_device*) ;
 int FUNC_8 (struct mic_device*) ;
 int FUNC_9 (struct mic_device*) ;
 int VAR_10 ;
 int FUNC_10 (int *,int ,int *,int *,int,int ,TYPE_4__*,int *,int ,int *,int *,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mic_device*,int *) ;
 int FUNC_13 (struct mic_device*) ;
 int FUNC_14 (struct mic_device*,int ,int) ;
 int FUNC_15 (struct mic_device*,int ,int) ;
 int FUNC_16 (struct mic_device*) ;
 int VAR_11 ;
 int FUNC_17 (int *,int ,int *,int *,int,int *,int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct cosm_device *VAR_12, int VAR_13)
{
 struct mic_device *VAR_14 = FUNC_2(VAR_12);
 int VAR_15;

 FUNC_5(VAR_14);
 VAR_14->dma_mbdev = FUNC_3(&VAR_14->pdev->dev,
            VAR_1, &VAR_9,
            &VAR_8, VAR_13, VAR_14->mmio.va);
 if (FUNC_0(VAR_14->dma_mbdev)) {
  VAR_15 = FUNC_1(VAR_14->dma_mbdev);
  goto unlock_ret;
 }
 if (!FUNC_8(VAR_14)) {
  VAR_15 = -VAR_0;
  goto dma_remove;
 }
 VAR_14->scdev = FUNC_10(&VAR_14->pdev->dev, VAR_4,
        &VAR_6, &VAR_10,
        VAR_13 + 1, 0, &VAR_14->mmio,
        &VAR_14->aper, VAR_14->dp, ((void*)0),
        VAR_14->dma_ch, VAR_14->num_dma_ch,
        1);
 if (FUNC_0(VAR_14->scdev)) {
  VAR_15 = FUNC_1(VAR_14->scdev);
  goto dma_free;
 }

 VAR_14->vpdev = FUNC_17(&VAR_14->pdev->dev,
       VAR_5, &VAR_7,
       &VAR_11, VAR_13 + 1, &VAR_14->aper,
       VAR_14->dma_ch[0]);
 if (FUNC_0(VAR_14->vpdev)) {
  VAR_15 = FUNC_1(VAR_14->vpdev);
  goto scif_remove;
 }

 VAR_15 = VAR_14->ops->load_mic_fw(VAR_14, ((void*)0));
 if (VAR_15)
  goto vop_remove;
 FUNC_9(VAR_14);
 FUNC_7(VAR_14);
 VAR_14->intr_ops->enable_interrupts(VAR_14);
 VAR_14->ops->write_spad(VAR_14, VAR_3, VAR_14->dp_dma_addr);
 VAR_14->ops->write_spad(VAR_14, VAR_2, VAR_14->dp_dma_addr >> 32);
 VAR_14->ops->send_firmware_intr(VAR_14);
 goto unlock_ret;
vop_remove:
 FUNC_18(VAR_14->vpdev);
scif_remove:
 FUNC_11(VAR_14->scdev);
dma_free:
 FUNC_6(VAR_14);
dma_remove:
 FUNC_4(VAR_14->dma_mbdev);
unlock_ret:
 return VAR_15;
}
