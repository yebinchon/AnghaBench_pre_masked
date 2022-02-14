
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct bq24190_dev_info {int input_current_limit_work; } ;


 int FUNC_0 (int) ;
 struct bq24190_dev_info* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct power_supply *VAR_1)
{
 struct bq24190_dev_info *VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_0, &VAR_2->input_current_limit_work,
      FUNC_0(300));
}
