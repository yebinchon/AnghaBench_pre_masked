
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_rfkill {struct samsung_laptop* samsung; } ;
struct samsung_laptop {TYPE_1__* config; } ;
struct sabi_commands {int set_wireless_button; } ;
struct TYPE_2__ {struct sabi_commands commands; } ;


 int FUNC_0 (struct samsung_laptop*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, bool VAR_1)
{
 struct samsung_rfkill *VAR_2 = VAR_0;
 struct samsung_laptop *VAR_3 = VAR_2->samsung;
 const struct sabi_commands *VAR_4 = &VAR_3->config->commands;

 return FUNC_0(VAR_3, VAR_4->set_wireless_button,
     !VAR_1);
}
