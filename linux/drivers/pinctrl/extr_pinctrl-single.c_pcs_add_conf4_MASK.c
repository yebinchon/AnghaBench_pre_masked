
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcs_device {int dev; } ;
struct pcs_conf_vals {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int FUNC_0 (struct pcs_conf_vals**,int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned long**,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device_node*,char const*,unsigned int*,int) ;
 int FUNC_5 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct pcs_device *VAR_0, struct device_node *VAR_1,
     const char *VAR_2, enum pin_config_param VAR_3,
     struct pcs_conf_vals **VAR_4, unsigned long **VAR_5)
{
 unsigned VAR_6[4];
 int VAR_7;


 VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_6, 4);
 if (VAR_7)
  return;
 if (!VAR_6[3]) {
  FUNC_3(VAR_0->dev, "mask field of the property can't be 0\n");
  return;
 }
 VAR_6[0] &= VAR_6[3];
 VAR_6[1] &= VAR_6[3];
 VAR_6[2] &= VAR_6[3];
 VAR_7 = FUNC_5(VAR_6[0], VAR_6[1], VAR_6[2]);
 if (VAR_7 < 0)
  FUNC_2(VAR_0->dev, "failed to match enable or disable bits\n");
 FUNC_0(VAR_4, VAR_3, VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3]);
 FUNC_1(VAR_5, VAR_3, VAR_7);
}
