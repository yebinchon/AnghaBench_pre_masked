
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_laptop {struct sabi_config* config; } ;
struct sabi_data {int* data; } ;
struct sabi_commands {int get_brightness; } ;
struct sabi_config {int min_brightness; struct sabi_commands commands; } ;


 int FUNC_0 (struct samsung_laptop*,int ,int *,struct sabi_data*) ;

__attribute__((used)) static int FUNC_1(struct samsung_laptop *VAR_0)
{
 const struct sabi_config *VAR_1 = VAR_0->config;
 const struct sabi_commands *VAR_2 = &VAR_0->config->commands;
 struct sabi_data VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2->get_brightness,
         ((void*)0), &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = VAR_3.data[0];
 if (VAR_4 > VAR_1->min_brightness)
  VAR_4 -= VAR_1->min_brightness;
 else
  VAR_4 = 0;

 return VAR_4;
}
