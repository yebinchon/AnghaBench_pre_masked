
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mah; int permille; } ;
struct ab8500_fg {TYPE_1__ bat_cap; } ;


 int FUNC_0 (struct ab8500_fg*,int) ;
 int FUNC_1 (struct ab8500_fg*,int) ;
 int FUNC_2 (struct ab8500_fg*,int) ;
 int FUNC_3 (struct ab8500_fg*) ;
 int FUNC_4 (struct ab8500_fg*) ;

__attribute__((used)) static int FUNC_5(struct ab8500_fg *VAR_0, bool VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1)
  VAR_2 = FUNC_3(VAR_0);
 else
  VAR_2 = FUNC_4(VAR_0);

 VAR_3 = FUNC_2(VAR_0, VAR_2);

 VAR_0->bat_cap.mah = FUNC_0(VAR_0, VAR_3);
 VAR_0->bat_cap.permille =
  FUNC_1(VAR_0, VAR_0->bat_cap.mah);

 return VAR_0->bat_cap.mah;
}
