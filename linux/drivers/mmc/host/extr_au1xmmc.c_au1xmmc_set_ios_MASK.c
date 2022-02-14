
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_ios {scalar_t__ power_mode; scalar_t__ clock; int bus_width; } ;
struct mmc_host {int dummy; } ;
struct au1xmmc_host {scalar_t__ clock; } ;


 int FUNC_0 (struct au1xmmc_host*) ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct au1xmmc_host*,scalar_t__) ;
 int FUNC_4 (struct au1xmmc_host*,int) ;
 struct au1xmmc_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_4, struct mmc_ios *VAR_5)
{
 struct au1xmmc_host *VAR_6 = FUNC_5(VAR_4);
 u32 VAR_7;

 if (VAR_5->power_mode == VAR_0)
  FUNC_4(VAR_6, 0);
 else if (VAR_5->power_mode == VAR_1) {
  FUNC_4(VAR_6, 1);
 }

 if (VAR_5->clock && VAR_5->clock != VAR_6->clock) {
  FUNC_3(VAR_6, VAR_5->clock);
  VAR_6->clock = VAR_5->clock;
 }

 VAR_7 = FUNC_1(FUNC_0(VAR_6));
 switch (VAR_5->bus_width) {
 case 128:
  VAR_7 |= VAR_2;
  break;
 case 129:
  VAR_7 &= ~VAR_2;
  VAR_7 |= VAR_3;
  break;
 case 130:
  VAR_7 &= ~(VAR_3 | VAR_2);
  break;
 }
 FUNC_2(VAR_7, FUNC_0(VAR_6));
 FUNC_6();
}
