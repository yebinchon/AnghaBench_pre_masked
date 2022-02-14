
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_laptop {struct sabi_config* config; } ;
struct sabi_data {scalar_t__* data; } ;
struct sabi_commands {int get_performance_level; } ;
struct sabi_config {TYPE_1__* performance_levels; struct sabi_commands commands; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; scalar_t__ value; } ;


 struct samsung_laptop* FUNC_0 (struct device*) ;
 int FUNC_1 (struct samsung_laptop*,int ,int *,struct sabi_data*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct samsung_laptop *VAR_3 = FUNC_0(VAR_0);
 const struct sabi_config *VAR_4 = VAR_3->config;
 const struct sabi_commands *VAR_5 = &VAR_4->commands;
 struct sabi_data VAR_6;
 int VAR_7;
 int VAR_8;


 VAR_7 = FUNC_1(VAR_3, VAR_5->get_performance_level,
         ((void*)0), &VAR_6);
 if (VAR_7)
  return VAR_7;


 for (VAR_8 = 0; VAR_4->performance_levels[VAR_8].name; ++VAR_8) {
  if (VAR_6.data[0] == VAR_4->performance_levels[VAR_8].value)
   return FUNC_2(VAR_2, "%s\n", VAR_4->performance_levels[VAR_8].name);
 }
 return FUNC_2(VAR_2, "%s\n", "unknown");
}
