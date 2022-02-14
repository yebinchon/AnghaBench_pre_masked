
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_mah; int max_mah_design; int mah; int permille; } ;
struct ab8500_fg {TYPE_1__ bat_cap; int dev; } ;


 int FUNC_0 (struct ab8500_fg*,int) ;
 int FUNC_1 (struct ab8500_fg*) ;
 int FUNC_2 (struct ab8500_fg*,int) ;
 int FUNC_3 (struct ab8500_fg*,int) ;
 int FUNC_4 (int ,char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ab8500_fg *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);
 VAR_1 = VAR_0->bat_cap.user_mah;
 if (VAR_1 > VAR_0->bat_cap.max_mah_design) {
  FUNC_4(VAR_0->dev, "Remaining cap %d can't be bigger than total"
   " %d\n", VAR_1, VAR_0->bat_cap.max_mah_design);
  VAR_1 = VAR_0->bat_cap.max_mah_design;
 }
 FUNC_3(VAR_0, VAR_0->bat_cap.user_mah);
 VAR_0->bat_cap.permille = FUNC_2(VAR_0, VAR_1);
 VAR_0->bat_cap.mah = VAR_1;
 FUNC_0(VAR_0, 1);
}
