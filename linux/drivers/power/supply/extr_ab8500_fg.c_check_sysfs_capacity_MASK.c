
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int user_mah; int permille; int mah; } ;
struct ab8500_fg {int dev; TYPE_3__ bat_cap; TYPE_2__* bm; } ;
struct TYPE_5__ {TYPE_1__* fg_params; } ;
struct TYPE_4__ {int user_cap_limit; } ;


 int FUNC_0 (struct ab8500_fg*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct ab8500_fg*) ;

__attribute__((used)) static bool FUNC_3(struct ab8500_fg *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 int VAR_4;

 VAR_1 = VAR_0->bat_cap.user_mah;

 VAR_4 = FUNC_0(VAR_0,
  VAR_0->bat_cap.user_mah);

 VAR_2 = VAR_0->bat_cap.permille - VAR_0->bm->fg_params->user_cap_limit * 10;
 VAR_3 = VAR_0->bat_cap.permille + VAR_0->bm->fg_params->user_cap_limit * 10;

 if (VAR_2 < 0)
  VAR_2 = 0;

 if (VAR_3 > 1000)
  VAR_3 = 1000;

 FUNC_1(VAR_0->dev, "Capacity limits:"
  " (Lower: %d User: %d Upper: %d) [user: %d, was: %d]\n",
  VAR_2, VAR_4, VAR_3, VAR_1, VAR_0->bat_cap.mah);


 if (VAR_4 > VAR_2 && VAR_4 < VAR_3) {
  FUNC_1(VAR_0->dev, "OK! Using users cap %d uAh now\n", VAR_1);
  FUNC_2(VAR_0);
  return 1;
 }
 FUNC_1(VAR_0->dev, "Capacity from user out of limits, ignoring");
 return 0;
}
