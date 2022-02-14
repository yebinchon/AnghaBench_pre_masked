
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_laptop {TYPE_1__* config; } ;
struct sabi_data {int* data; } ;
struct sabi_commands {int get_battery_life_extender; } ;
typedef int data ;
struct TYPE_2__ {struct sabi_commands commands; } ;


 int VAR_0 ;
 int FUNC_0 (struct sabi_data*,int ,int) ;
 int FUNC_1 (struct samsung_laptop*,int,struct sabi_data*,struct sabi_data*) ;

__attribute__((used)) static int FUNC_2(struct samsung_laptop *VAR_1)
{
 const struct sabi_commands *VAR_2 = &VAR_1->config->commands;
 struct sabi_data VAR_3;
 int VAR_4;

 if (VAR_2->get_battery_life_extender == 0xFFFF)
  return -VAR_0;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.data[0] = 0x80;
 VAR_4 = FUNC_1(VAR_1, VAR_2->get_battery_life_extender,
         &VAR_3, &VAR_3);

 if (VAR_4)
  return VAR_4;

 if (VAR_3.data[0] != 0 && VAR_3.data[0] != 1)
  return -VAR_0;

 return VAR_3.data[0];
}
