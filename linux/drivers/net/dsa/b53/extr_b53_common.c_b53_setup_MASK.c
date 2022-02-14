
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int vlan_filtering_is_global; int dev; struct b53_device* priv; } ;
struct b53_device {unsigned int num_ports; } ;


 int FUNC_0 (struct b53_device*) ;
 int FUNC_1 (struct dsa_switch*,unsigned int) ;
 int FUNC_2 (struct b53_device*,unsigned int) ;
 int FUNC_3 (struct b53_device*) ;
 int FUNC_4 (struct b53_device*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct dsa_switch*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct dsa_switch *VAR_0)
{
 struct b53_device *VAR_1 = VAR_0->priv;
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_5(VAR_0->dev, "failed to reset switch\n");
  return VAR_3;
 }

 FUNC_3(VAR_1);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  FUNC_5(VAR_0->dev, "failed to apply configuration\n");




 for (VAR_2 = 0; VAR_2 < VAR_1->num_ports; VAR_2++) {
  if (FUNC_6(VAR_0, VAR_2))
   FUNC_2(VAR_1, VAR_2);
  else
   FUNC_1(VAR_0, VAR_2);
 }






 VAR_0->vlan_filtering_is_global = 1;

 return VAR_3;
}
