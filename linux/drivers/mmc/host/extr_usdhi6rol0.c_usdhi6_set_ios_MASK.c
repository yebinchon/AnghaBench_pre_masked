
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usdhi6_host {scalar_t__ rate; } ;
struct mmc_ios {scalar_t__ clock; int power_mode; int timing; int bus_width; int vdd; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,int ,int,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mmc_host*) ;
 struct usdhi6_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct usdhi6_host*,struct mmc_ios*) ;
 int FUNC_5 (struct usdhi6_host*) ;
 int FUNC_6 (struct usdhi6_host*,int ) ;
 int FUNC_7 (struct usdhi6_host*) ;
 int FUNC_8 (struct usdhi6_host*,struct mmc_ios*) ;
 int FUNC_9 (struct usdhi6_host*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_5, struct mmc_ios *VAR_6)
{
 struct usdhi6_host *VAR_7 = FUNC_3(VAR_5);
 u32 VAR_8, VAR_9;
 int VAR_10;

 FUNC_0(FUNC_2(VAR_5), "%uHz, OCR: %u, power %u, bus-width %u, timing %u\n",
  VAR_6->clock, VAR_6->vdd, VAR_6->power_mode, VAR_6->bus_width, VAR_6->timing);

 switch (VAR_6->power_mode) {
 case 130:
  FUNC_8(VAR_7, VAR_6);
  FUNC_5(VAR_7);
  break;
 case 128:




  VAR_10 = FUNC_7(VAR_7);
  if (VAR_10 < 0) {
   FUNC_1(FUNC_2(VAR_5), "Cannot reset the interface!\n");
  } else {
   FUNC_8(VAR_7, VAR_6);
   FUNC_5(VAR_7);
  }
  break;
 case 129:
  VAR_8 = FUNC_6(VAR_7, VAR_3);





  if (VAR_6->bus_width == VAR_0) {
   if (VAR_6->timing == VAR_1)
    FUNC_1(FUNC_2(VAR_5),
     "4 bits are required for DDR\n");
   VAR_8 |= VAR_4;
   VAR_9 = 0;
  } else {
   VAR_8 &= ~VAR_4;
   VAR_9 = VAR_6->timing == VAR_1;
  }
  FUNC_9(VAR_7, VAR_3, VAR_8);
  FUNC_9(VAR_7, VAR_2, VAR_9);
  break;
 }

 if (VAR_7->rate != VAR_6->clock)
  FUNC_4(VAR_7, VAR_6);
}
