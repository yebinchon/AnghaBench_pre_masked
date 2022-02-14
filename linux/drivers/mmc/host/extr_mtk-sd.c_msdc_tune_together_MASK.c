
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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 struct msdc_delay_phase FUNC_1 (struct msdc_host*,int) ;
 int FUNC_2 (int,int) ;
 struct msdc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int,int *) ;
 int FUNC_5 (struct msdc_host*,int) ;
 int FUNC_6 (struct msdc_host*,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct mmc_host *VAR_8, u32 VAR_9)
{
 struct msdc_host *VAR_10 = FUNC_3(VAR_8);
 u32 VAR_11 = 0, VAR_12 = 0;
 struct msdc_delay_phase VAR_13, VAR_14 = { 0,};
 u8 VAR_15, VAR_16;
 int VAR_17, VAR_18;

 FUNC_9(VAR_10->base + VAR_6, VAR_1,
        VAR_10->latch_ck);

 FUNC_7(VAR_10->base + VAR_2, VAR_4);
 FUNC_7(VAR_10->base + VAR_2,
       VAR_3 | VAR_5);
 for (VAR_17 = 0 ; VAR_17 < VAR_7; VAR_17++) {
  FUNC_5(VAR_10, VAR_17);
  FUNC_6(VAR_10, VAR_17);
  VAR_18 = FUNC_4(VAR_8, VAR_9, ((void*)0));
  if (!VAR_18)
   VAR_11 |= (1 << VAR_17);
 }
 VAR_13 = FUNC_1(VAR_10, VAR_11);

 if (VAR_13.maxlen >= 12 ||
     (VAR_13.start == 0 && VAR_13.maxlen >= 4))
  goto skip_fall;

 FUNC_8(VAR_10->base + VAR_2, VAR_4);
 FUNC_8(VAR_10->base + VAR_2,
       VAR_3 | VAR_5);
 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
  FUNC_5(VAR_10, VAR_17);
  FUNC_6(VAR_10, VAR_17);
  VAR_18 = FUNC_4(VAR_8, VAR_9, ((void*)0));
  if (!VAR_18)
   VAR_12 |= (1 << VAR_17);
 }
 VAR_14 = FUNC_1(VAR_10, VAR_12);

skip_fall:
 VAR_16 = FUNC_2(VAR_13.maxlen, VAR_14.maxlen);
 if (VAR_16 == VAR_13.maxlen) {
  FUNC_7(VAR_10->base + VAR_2, VAR_4);
  FUNC_7(VAR_10->base + VAR_2,
        VAR_3 | VAR_5);
  VAR_15 = VAR_13.final_phase;
 } else {
  FUNC_8(VAR_10->base + VAR_2, VAR_4);
  FUNC_8(VAR_10->base + VAR_2,
        VAR_3 | VAR_5);
  VAR_15 = VAR_14.final_phase;
 }

 FUNC_5(VAR_10, VAR_15);
 FUNC_6(VAR_10, VAR_15);

 FUNC_0(VAR_10->dev, "Final pad delay: %x\n", VAR_15);
 return VAR_15 == 0xff ? -VAR_0 : 0;
}
