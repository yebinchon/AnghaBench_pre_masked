
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct msdc_host {int base; int hs200_cmd_int_delay; int dev; TYPE_2__* dev_comp; } ;
struct msdc_delay_phase {int maxlen; scalar_t__ start; int final_phase; int member_0; } ;
struct TYPE_3__ {scalar_t__ timing; } ;
struct mmc_host {TYPE_1__ ios; } ;
struct TYPE_4__ {int pad_tune_reg; scalar_t__ async_fifo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 struct msdc_delay_phase FUNC_1 (struct msdc_host*,int) ;
 int FUNC_2 (int,int) ;
 struct msdc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int,int*) ;
 int FUNC_5 (struct msdc_host*,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ,int) ;

__attribute__((used)) static int FUNC_9(struct mmc_host *VAR_7, u32 VAR_8)
{
 struct msdc_host *VAR_9 = FUNC_3(VAR_7);
 u32 VAR_10 = 0, VAR_11 = 0;
 struct msdc_delay_phase VAR_12, VAR_13 = { 0,};
 struct msdc_delay_phase VAR_14;
 u8 VAR_15, VAR_16;
 u32 VAR_17 = 0;
 u32 VAR_18 = VAR_9->dev_comp->pad_tune_reg;
 int VAR_19;
 int VAR_20, VAR_21;

 if (VAR_7->ios.timing == VAR_1 ||
     VAR_7->ios.timing == VAR_2)
  FUNC_8(VAR_9->base + VAR_18,
         VAR_5,
         VAR_9->hs200_cmd_int_delay);

 FUNC_6(VAR_9->base + VAR_3, VAR_4);
 for (VAR_20 = 0 ; VAR_20 < VAR_6; VAR_20++) {
  FUNC_5(VAR_9, VAR_20);





  for (VAR_21 = 0; VAR_21 < 3; VAR_21++) {
   FUNC_4(VAR_7, VAR_8, &VAR_19);
   if (!VAR_19) {
    VAR_10 |= (1 << VAR_20);
   } else {
    VAR_10 &= ~(1 << VAR_20);
    break;
   }
  }
 }
 VAR_12 = FUNC_1(VAR_9, VAR_10);

 if (VAR_12.maxlen >= 12 ||
     (VAR_12.start == 0 && VAR_12.maxlen >= 4))
  goto skip_fall;

 FUNC_7(VAR_9->base + VAR_3, VAR_4);
 for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
  FUNC_5(VAR_9, VAR_20);





  for (VAR_21 = 0; VAR_21 < 3; VAR_21++) {
   FUNC_4(VAR_7, VAR_8, &VAR_19);
   if (!VAR_19) {
    VAR_11 |= (1 << VAR_20);
   } else {
    VAR_11 &= ~(1 << VAR_20);
    break;
   }
  }
 }
 VAR_13 = FUNC_1(VAR_9, VAR_11);

skip_fall:
 VAR_16 = FUNC_2(VAR_12.maxlen, VAR_13.maxlen);
 if (VAR_13.maxlen >= 12 && VAR_13.start < 4)
  VAR_16 = VAR_13.maxlen;
 if (VAR_16 == VAR_12.maxlen) {
  FUNC_6(VAR_9->base + VAR_3, VAR_4);
  VAR_15 = VAR_12.final_phase;
 } else {
  FUNC_7(VAR_9->base + VAR_3, VAR_4);
  VAR_15 = VAR_13.final_phase;
 }
 FUNC_5(VAR_9, VAR_15);

 if (VAR_9->dev_comp->async_fifo || VAR_9->hs200_cmd_int_delay)
  goto skip_internal;

 for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
  FUNC_8(VAR_9->base + VAR_18,
         VAR_5, VAR_20);
  FUNC_4(VAR_7, VAR_8, &VAR_19);
  if (!VAR_19)
   VAR_17 |= (1 << VAR_20);
 }
 FUNC_0(VAR_9->dev, "Final internal delay: 0x%x\n", VAR_17);
 VAR_14 = FUNC_1(VAR_9, VAR_17);
 FUNC_8(VAR_9->base + VAR_18, VAR_5,
        VAR_14.final_phase);
skip_internal:
 FUNC_0(VAR_9->dev, "Final cmd pad delay: %x\n", VAR_15);
 return VAR_15 == 0xff ? -VAR_0 : 0;
}
