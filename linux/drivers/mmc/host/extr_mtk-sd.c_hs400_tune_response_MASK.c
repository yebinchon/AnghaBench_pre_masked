
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct msdc_host {int hs200_cmd_int_delay; int dev; scalar_t__ base; scalar_t__ hs400_cmd_resp_sel_rising; } ;
struct msdc_delay_phase {int final_phase; int member_0; } ;
struct TYPE_2__ {scalar_t__ timing; } ;
struct mmc_host {TYPE_1__ ios; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,int) ;
 struct msdc_delay_phase FUNC_2 (struct msdc_host*,int) ;
 struct msdc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int,int*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_8(struct mmc_host *VAR_10, u32 VAR_11)
{
 struct msdc_host *VAR_12 = FUNC_3(VAR_10);
 u32 VAR_13 = 0;
 struct msdc_delay_phase VAR_14 = { 0,};
 u8 VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;


 FUNC_6(VAR_12->base + VAR_7, FUNC_0(0));

 if (VAR_10->ios.timing == VAR_1 ||
     VAR_10->ios.timing == VAR_2)
  FUNC_7(VAR_12->base + VAR_5,
         VAR_6,
         VAR_12->hs200_cmd_int_delay);

 if (VAR_12->hs400_cmd_resp_sel_rising)
  FUNC_5(VAR_12->base + VAR_3, VAR_4);
 else
  FUNC_6(VAR_12->base + VAR_3, VAR_4);
 for (VAR_17 = 0 ; VAR_17 < VAR_9; VAR_17++) {
  FUNC_7(VAR_12->base + VAR_7,
         VAR_8, VAR_17);





  for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
   FUNC_4(VAR_10, VAR_11, &VAR_16);
   if (!VAR_16) {
    VAR_13 |= (1 << VAR_17);
   } else {
    VAR_13 &= ~(1 << VAR_17);
    break;
   }
  }
 }
 VAR_14 = FUNC_2(VAR_12, VAR_13);
 FUNC_7(VAR_12->base + VAR_7, VAR_8,
        VAR_14.final_phase);
 VAR_15 = VAR_14.final_phase;

 FUNC_1(VAR_12->dev, "Final cmd pad delay: %x\n", VAR_15);
 return VAR_15 == 0xff ? -VAR_0 : 0;
}
