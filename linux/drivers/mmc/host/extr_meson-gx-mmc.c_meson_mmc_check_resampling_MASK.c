
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int timing; } ;
struct meson_host {int dummy; } ;






 int FUNC_0 (struct meson_host*) ;

__attribute__((used)) static void FUNC_1(struct meson_host *VAR_0,
           struct mmc_ios *VAR_1)
{
 switch (VAR_1->timing) {
 case 131:
 case 129:
 case 128:
 case 130:
  FUNC_0(VAR_0);
  break;
 }
}
