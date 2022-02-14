
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct msdc_host {int dev; scalar_t__ base; int latch_ck; } ;
struct msdc_delay_phase {int maxlen; scalar_t__ start; int final_phase; int member_0; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 struct msdc_delay_phase FUNC_1 (struct msdc_host*,int) ;
 int FUNC_2 (int,int) ;
 struct msdc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int,int *) ;
 int FUNC_5 (struct msdc_host*,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct mmc_host *VAR_7, u32 VAR_8)
{
 struct msdc_host *VAR_9 = FUNC_3(VAR_7);
 u32 VAR_10 = 0, VAR_11 = 0;
 struct msdc_delay_phase VAR_12, VAR_13 = { 0,};
 u8 VAR_14, VAR_15;
 int VAR_16, VAR_17;

 FUNC_8(VAR_9->base + VAR_5, VAR_1,
        VAR_9->latch_ck);
 FUNC_6(VAR_9->base + VAR_2, VAR_3);
 FUNC_6(VAR_9->base + VAR_2, VAR_4);
 for (VAR_16 = 0 ; VAR_16 < VAR_6; VAR_16++) {
  FUNC_5(VAR_9, VAR_16);
  VAR_17 = FUNC_4(VAR_7, VAR_8, ((void*)0));
  if (!VAR_17)
   VAR_10 |= (1 << VAR_16);
 }
 VAR_12 = FUNC_1(VAR_9, VAR_10);

 if (VAR_12.maxlen >= 12 ||
     (VAR_12.start == 0 && VAR_12.maxlen >= 4))
  goto skip_fall;

 FUNC_7(VAR_9->base + VAR_2, VAR_3);
 FUNC_7(VAR_9->base + VAR_2, VAR_4);
 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  FUNC_5(VAR_9, VAR_16);
  VAR_17 = FUNC_4(VAR_7, VAR_8, ((void*)0));
  if (!VAR_17)
   VAR_11 |= (1 << VAR_16);
 }
 VAR_13 = FUNC_1(VAR_9, VAR_11);

skip_fall:
 VAR_15 = FUNC_2(VAR_12.maxlen, VAR_13.maxlen);
 if (VAR_15 == VAR_12.maxlen) {
  FUNC_6(VAR_9->base + VAR_2, VAR_3);
  FUNC_6(VAR_9->base + VAR_2, VAR_4);
  VAR_14 = VAR_12.final_phase;
 } else {
  FUNC_7(VAR_9->base + VAR_2, VAR_3);
  FUNC_7(VAR_9->base + VAR_2, VAR_4);
  VAR_14 = VAR_13.final_phase;
 }
 FUNC_5(VAR_9, VAR_14);

 FUNC_0(VAR_9->dev, "Final data pad delay: %x\n", VAR_14);
 return VAR_14 == 0xff ? -VAR_0 : 0;
}
