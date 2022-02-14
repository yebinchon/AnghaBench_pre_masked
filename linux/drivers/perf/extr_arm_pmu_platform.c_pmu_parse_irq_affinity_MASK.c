
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_2, int VAR_3)
{
 struct device_node *VAR_4;
 int VAR_5;






 if (!FUNC_3(VAR_2))
  return VAR_3;

 VAR_4 = FUNC_2(VAR_2, "interrupt-affinity", VAR_3);
 if (!VAR_4) {
  FUNC_4("failed to parse interrupt-affinity[%d] for %pOFn\n",
   VAR_3, VAR_2);
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0) {
  FUNC_4("failed to find logical CPU for %pOFn\n", VAR_4);
  VAR_5 = VAR_1;
 }

 FUNC_1(VAR_4);

 return VAR_5;
}
