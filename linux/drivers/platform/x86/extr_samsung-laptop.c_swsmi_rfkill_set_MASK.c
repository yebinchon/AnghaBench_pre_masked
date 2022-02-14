
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_rfkill {scalar_t__ type; struct samsung_laptop* samsung; } ;
struct samsung_laptop {TYPE_1__* config; } ;
struct sabi_data {int* data; } ;
struct sabi_commands {int set_wireless_status; } ;
struct TYPE_2__ {struct sabi_commands commands; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct samsung_laptop*,int ,struct sabi_data*,struct sabi_data*) ;
 int FUNC_1 (struct samsung_laptop*,struct sabi_data*) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, bool VAR_5)
{
 struct samsung_rfkill *VAR_6 = VAR_4;
 struct samsung_laptop *VAR_7 = VAR_6->samsung;
 const struct sabi_commands *VAR_8 = &VAR_7->config->commands;
 struct sabi_data VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_1(VAR_7, &VAR_9);
 if (VAR_10)
  return VAR_10;


 for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
  if (VAR_9.data[VAR_11] == 0x02)
   VAR_9.data[1] = 0;

 if (VAR_6->type == VAR_1)
  VAR_9.data[VAR_3] = !VAR_5;
 else if (VAR_6->type == VAR_0)
  VAR_9.data[VAR_2] = !VAR_5;

 return FUNC_0(VAR_7, VAR_8->set_wireless_status,
       &VAR_9, &VAR_9);
}
