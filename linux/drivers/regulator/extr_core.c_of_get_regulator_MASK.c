
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (struct device*,char*,char const*,...) ;
 struct device_node* FUNC_1 (int ,char*) ;
 struct device_node* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,int,char*,char const*) ;

__attribute__((used)) static struct device_node *FUNC_4(struct device *VAR_0, const char *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);
 char VAR_3[32];

 FUNC_0(VAR_0, "Looking up %s-supply from device tree\n", VAR_1);

 FUNC_3(VAR_3, 32, "%s-supply", VAR_1);
 VAR_2 = FUNC_2(VAR_0->of_node, VAR_3, 0);

 if (!VAR_2) {
  VAR_2 = FUNC_1(VAR_0->of_node, VAR_3);
  if (VAR_2)
   return VAR_2;

  FUNC_0(VAR_0, "Looking up %s property in node %pOF failed\n",
    VAR_3, VAR_0->of_node);
  return ((void*)0);
 }
 return VAR_2;
}
