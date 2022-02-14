
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_ecc {int dummy; } ;
struct device_node {int dummy; } ;


 struct ingenic_ecc* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int ) ;

struct ingenic_ecc *FUNC_3(struct device_node *VAR_0)
{
 struct ingenic_ecc *VAR_1 = ((void*)0);
 struct device_node *VAR_2;

 VAR_2 = FUNC_2(VAR_0, "ecc-engine", 0);





 if (!VAR_2)
  VAR_2 = FUNC_2(VAR_0, "ingenic,bch-controller", 0);

 if (VAR_2) {
  VAR_1 = FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }
 return VAR_1;
}
