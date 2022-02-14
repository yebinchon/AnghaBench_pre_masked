
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {struct ds278x_info* name; } ;
struct ds278x_info {int id; TYPE_1__ battery_desc; int bat_work; int battery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ds278x_info* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct ds278x_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_2)
{
 struct ds278x_info *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = VAR_3->id;

 FUNC_6(VAR_3->battery);
 FUNC_0(&VAR_3->bat_work);
 FUNC_3(VAR_3->battery_desc.name);
 FUNC_3(VAR_3);

 FUNC_4(&VAR_1);
 FUNC_2(&VAR_0, VAR_4);
 FUNC_5(&VAR_1);

 return 0;
}
