
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_laptop {TYPE_1__* config; } ;
struct sabi_data {int* data; } ;
struct sabi_commands {int set_usb_charge; } ;
typedef int data ;
struct TYPE_2__ {struct sabi_commands commands; } ;


 int FUNC_0 (struct sabi_data*,int ,int) ;
 int FUNC_1 (struct samsung_laptop*,int ,struct sabi_data*,int *) ;

__attribute__((used)) static int FUNC_2(struct samsung_laptop *VAR_0,
       int VAR_1)
{
 const struct sabi_commands *VAR_2 = &VAR_0->config->commands;
 struct sabi_data VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.data[0] = 0x80 | VAR_1;
 return FUNC_1(VAR_0, VAR_2->set_usb_charge,
       &VAR_3, ((void*)0));
}
