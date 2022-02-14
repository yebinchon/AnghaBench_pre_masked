
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vdd; } ;
struct mmc_host {int ocr_avail; int caps2; TYPE_1__ ios; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int) ;

u32 FUNC_5(struct mmc_host *VAR_1, u32 VAR_2)
{
 int VAR_3;





 if (VAR_2 & 0x7F) {
  FUNC_0(FUNC_3(VAR_1),
  "card claims to support voltages below defined range\n");
  VAR_2 &= ~0x7F;
 }

 VAR_2 &= VAR_1->ocr_avail;
 if (!VAR_2) {
  FUNC_0(FUNC_3(VAR_1), "no support for card's volts\n");
  return 0;
 }

 if (VAR_1->caps2 & VAR_0) {
  VAR_3 = FUNC_1(VAR_2) - 1;
  VAR_2 &= 3 << VAR_3;
  FUNC_4(VAR_1, VAR_2);
 } else {
  VAR_3 = FUNC_2(VAR_2) - 1;
  VAR_2 &= 3 << VAR_3;
  if (VAR_3 != VAR_1->ios.vdd)
   FUNC_0(FUNC_3(VAR_1), "exceeding card's volts\n");
 }

 return VAR_2;
}
