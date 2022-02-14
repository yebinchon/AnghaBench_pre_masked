
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct bq27xxx_device_info {int work; } ;


 int FUNC_0 (int *) ;
 struct bq27xxx_device_info* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct power_supply *VAR_0)
{
 struct bq27xxx_device_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->work);
 FUNC_2(&VAR_1->work, 0);
}
