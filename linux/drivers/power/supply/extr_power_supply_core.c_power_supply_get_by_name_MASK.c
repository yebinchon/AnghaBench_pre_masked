
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int use_cnt; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct device* FUNC_1 (int ,int *,char const*,int ) ;
 struct power_supply* FUNC_2 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;

struct power_supply *FUNC_3(const char *VAR_2)
{
 struct power_supply *VAR_3 = ((void*)0);
 struct device *VAR_4 = FUNC_1(VAR_0, ((void*)0), VAR_2,
     VAR_1);

 if (VAR_4) {
  VAR_3 = FUNC_2(VAR_4);
  FUNC_0(&VAR_3->use_cnt);
 }

 return VAR_3;
}
