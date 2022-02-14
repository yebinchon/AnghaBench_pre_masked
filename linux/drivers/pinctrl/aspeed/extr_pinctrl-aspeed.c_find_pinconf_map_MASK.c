
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aspeed_pin_config_map {int arg; int val; int param; } ;
typedef int s64 ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
typedef enum aspeed_pin_config_map_type { ____Placeholder_aspeed_pin_config_map_type } aspeed_pin_config_map_type ;


 int FUNC_0 (struct aspeed_pin_config_map*) ;


 struct aspeed_pin_config_map* VAR_0 ;

__attribute__((used)) static const struct aspeed_pin_config_map *FUNC_1(
  enum pin_config_param VAR_1,
  enum aspeed_pin_config_map_type VAR_2,
  s64 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  const struct aspeed_pin_config_map *VAR_5;
  bool VAR_6;

  VAR_5 = &VAR_0[VAR_4];

  switch (VAR_2) {
  case 129:
   VAR_6 = (VAR_5->arg == -1 || VAR_5->arg == VAR_3);
   break;
  case 128:
   VAR_6 = (VAR_5->val == VAR_3);
   break;
  }

  if (VAR_1 == VAR_5->param && VAR_6)
   return VAR_5;
 }

 return ((void*)0);
}
