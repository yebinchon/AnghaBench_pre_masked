
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {void* emmc_top_cmd; void* emmc_top_control; void* pad_cmd_tune; void* pad_tune; void* iocon; } ;
struct msdc_host {int hs400_mode; scalar_t__ top_base; TYPE_2__ saved_tune_para; scalar_t__ base; int dev; TYPE_1__* dev_comp; } ;
struct mmc_host {int dummy; } ;
struct TYPE_3__ {scalar_t__ hs400_tune; scalar_t__ async_fifo; scalar_t__ data_tune; scalar_t__ pad_tune_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mmc_host*,scalar_t__) ;
 struct msdc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct msdc_host*,int ) ;
 int FUNC_4 (struct mmc_host*,scalar_t__) ;
 int FUNC_5 (struct mmc_host*,scalar_t__) ;
 int FUNC_6 (struct mmc_host*,scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct mmc_host *VAR_7, u32 VAR_8)
{
 struct msdc_host *VAR_9 = FUNC_2(VAR_7);
 int VAR_10;
 u32 VAR_11 = VAR_9->dev_comp->pad_tune_reg;

 if (VAR_9->dev_comp->data_tune && VAR_9->dev_comp->async_fifo) {
  VAR_10 = FUNC_6(VAR_7, VAR_8);
  if (VAR_9->hs400_mode) {
   FUNC_8(VAR_9->base + VAR_3,
         VAR_4 | VAR_5);
   FUNC_3(VAR_9, 0);
  }
  goto tune_done;
 }
 if (VAR_9->hs400_mode &&
     VAR_9->dev_comp->hs400_tune)
  VAR_10 = FUNC_1(VAR_7, VAR_8);
 else
  VAR_10 = FUNC_5(VAR_7, VAR_8);
 if (VAR_10 == -VAR_0) {
  FUNC_0(VAR_9->dev, "Tune response fail!\n");
  return VAR_10;
 }
 if (VAR_9->hs400_mode == 0) {
  VAR_10 = FUNC_4(VAR_7, VAR_8);
  if (VAR_10 == -VAR_0)
   FUNC_0(VAR_9->dev, "Tune data fail!\n");
 }

tune_done:
 VAR_9->saved_tune_para.iocon = FUNC_7(VAR_9->base + VAR_3);
 VAR_9->saved_tune_para.pad_tune = FUNC_7(VAR_9->base + VAR_11);
 VAR_9->saved_tune_para.pad_cmd_tune = FUNC_7(VAR_9->base + VAR_6);
 if (VAR_9->top_base) {
  VAR_9->saved_tune_para.emmc_top_control = FUNC_7(VAR_9->top_base +
    VAR_2);
  VAR_9->saved_tune_para.emmc_top_cmd = FUNC_7(VAR_9->top_base +
    VAR_1);
 }
 return VAR_10;
}
