
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct samsung_laptop {scalar_t__ has_stepping_quirk; struct sabi_config* config; } ;
struct sabi_commands {int set_brightness; } ;
struct sabi_config {scalar_t__ min_brightness; struct sabi_commands commands; } ;


 scalar_t__ FUNC_0 (struct samsung_laptop*) ;
 int FUNC_1 (struct samsung_laptop*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct samsung_laptop *VAR_0, u8 VAR_1)
{
 const struct sabi_config *VAR_2 = VAR_0->config;
 const struct sabi_commands *VAR_3 = &VAR_0->config->commands;
 u8 VAR_4 = VAR_1 + VAR_2->min_brightness;

 if (VAR_0->has_stepping_quirk && VAR_4 != 0) {




  if (VAR_1 == FUNC_0(VAR_0))
   return;

  FUNC_1(VAR_0, VAR_3->set_brightness, 0);
 }

 FUNC_1(VAR_0, VAR_3->set_brightness, VAR_4);
}
