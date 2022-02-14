
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct ab8500_fg {int fg_psy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int VAR_1 ;
 struct ab8500_fg* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static void FUNC_2(struct power_supply *VAR_2)
{
 struct ab8500_fg *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_1, ((void*)0),
  VAR_3->fg_psy, VAR_0);
}
