
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_laptop {TYPE_1__* config; } ;
struct sabi_data {int dummy; } ;
struct sabi_commands {int get_wireless_status; } ;
struct TYPE_2__ {struct sabi_commands commands; } ;


 int FUNC_0 (struct samsung_laptop*,int ,int *,struct sabi_data*) ;

__attribute__((used)) static int FUNC_1(struct samsung_laptop *VAR_0,
     struct sabi_data *VAR_1)
{
 const struct sabi_commands *VAR_2 = &VAR_0->config->commands;

 return FUNC_0(VAR_0, VAR_2->get_wireless_status,
       ((void*)0), VAR_1);
}
