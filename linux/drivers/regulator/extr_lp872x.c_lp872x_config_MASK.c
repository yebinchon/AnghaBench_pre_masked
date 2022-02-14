
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp872x_platform_data {int general_config; int update_config; } ;
struct lp872x {struct lp872x_platform_data* pdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct lp872x*) ;
 int FUNC_1 (struct lp872x*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct lp872x *VAR_1)
{
 struct lp872x_platform_data *VAR_2 = VAR_1->pdata;
 int VAR_3;

 if (!VAR_2 || !VAR_2->update_config)
  goto init_dvs;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2->general_config);
 if (VAR_3)
  return VAR_3;

init_dvs:
 return FUNC_0(VAR_1);
}
