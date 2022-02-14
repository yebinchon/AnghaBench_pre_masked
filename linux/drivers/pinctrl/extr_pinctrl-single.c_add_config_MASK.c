
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcs_conf_vals {int param; unsigned int val; unsigned int enable; unsigned int disable; unsigned int mask; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;



__attribute__((used)) static void FUNC_0(struct pcs_conf_vals **VAR_0, enum pin_config_param VAR_1,
         unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
         unsigned VAR_5)
{
 (*VAR_0)->param = VAR_1;
 (*VAR_0)->val = VAR_2;
 (*VAR_0)->enable = VAR_3;
 (*VAR_0)->disable = VAR_4;
 (*VAR_0)->mask = VAR_5;
 (*VAR_0)++;
}
