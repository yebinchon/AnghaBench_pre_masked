
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_power_supply {int registered; int work; int update_interval; int supply_lock; int name; int model_name; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct gb_power_supply*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct gb_power_supply *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_2->model_name, VAR_2->name,
       sizeof(VAR_2->name));
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_3(&VAR_2->supply_lock);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->update_interval = VAR_1;
 FUNC_0(&VAR_2->work, VAR_0);
 FUNC_4(&VAR_2->work, 0);


 VAR_2->registered = 1;

 return 0;
}
