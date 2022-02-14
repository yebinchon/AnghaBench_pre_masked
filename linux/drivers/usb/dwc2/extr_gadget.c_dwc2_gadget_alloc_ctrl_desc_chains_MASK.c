
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {void* ctrl_out_desc; int ctrl_out_desc_dma; int dev; void* ctrl_in_desc; int ctrl_in_desc_dma; void** setup_desc; int * setup_desc_dma; } ;
struct dwc2_dma_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct dwc2_hsotg *VAR_2)
{
 VAR_2->setup_desc[0] =
  FUNC_0(VAR_2->dev,
        sizeof(struct dwc2_dma_desc),
        &VAR_2->setup_desc_dma[0],
        VAR_1);
 if (!VAR_2->setup_desc[0])
  goto fail;

 VAR_2->setup_desc[1] =
  FUNC_0(VAR_2->dev,
        sizeof(struct dwc2_dma_desc),
        &VAR_2->setup_desc_dma[1],
        VAR_1);
 if (!VAR_2->setup_desc[1])
  goto fail;

 VAR_2->ctrl_in_desc =
  FUNC_0(VAR_2->dev,
        sizeof(struct dwc2_dma_desc),
        &VAR_2->ctrl_in_desc_dma,
        VAR_1);
 if (!VAR_2->ctrl_in_desc)
  goto fail;

 VAR_2->ctrl_out_desc =
  FUNC_0(VAR_2->dev,
        sizeof(struct dwc2_dma_desc),
        &VAR_2->ctrl_out_desc_dma,
        VAR_1);
 if (!VAR_2->ctrl_out_desc)
  goto fail;

 return 0;

fail:
 return -VAR_0;
}
