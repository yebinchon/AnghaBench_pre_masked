
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int timing; int clock; } ;
struct meson_host {int dummy; } ;




 int FUNC_0 (struct meson_host*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct meson_host *VAR_0,
           struct mmc_ios *VAR_1)
{
 bool VAR_2;

 switch (VAR_1->timing) {
 case 129:
 case 128:
  VAR_2 = 1;
  break;

 default:
  VAR_2 = 0;
  break;
 }

 return FUNC_0(VAR_0, VAR_1->clock, VAR_2);
}
