
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcs_device {int dummy; } ;
struct pcs_conf_vals {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int FUNC_0 (struct pcs_conf_vals**,int,unsigned int,int ,int ,unsigned int) ;
 int FUNC_1 (unsigned long**,int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct device_node*,char const*,unsigned int*,int) ;

__attribute__((used)) static void FUNC_4(struct pcs_device *VAR_0, struct device_node *VAR_1,
     const char *VAR_2, enum pin_config_param VAR_3,
     struct pcs_conf_vals **VAR_4, unsigned long **VAR_5)
{
 unsigned VAR_6[2], VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_6, 2);
 if (VAR_8)
  return;

 VAR_6[0] &= VAR_6[1];
 VAR_7 = FUNC_2(VAR_6[1]) - 1;

 FUNC_0(VAR_4, VAR_3, VAR_6[0], 0, 0, VAR_6[1]);
 FUNC_1(VAR_5, VAR_3, VAR_6[0] >> VAR_7);
}
