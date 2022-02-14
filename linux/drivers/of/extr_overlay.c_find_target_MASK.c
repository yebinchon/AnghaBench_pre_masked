
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char const*) ;
 struct device_node* FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,char*,char const**) ;
 int FUNC_3 (struct device_node*,char*,int *) ;
 int FUNC_4 (char*,struct device_node*,...) ;

__attribute__((used)) static struct device_node *FUNC_5(struct device_node *VAR_0)
{
 struct device_node *VAR_1;
 const char *VAR_2;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, "target", &VAR_3);
 if (!VAR_4) {
  VAR_1 = FUNC_1(VAR_3);
  if (!VAR_1)
   FUNC_4("find target, node: %pOF, phandle 0x%x not found\n",
          VAR_0, VAR_3);
  return VAR_1;
 }

 VAR_4 = FUNC_2(VAR_0, "target-path", &VAR_2);
 if (!VAR_4) {
  VAR_1 = FUNC_0(VAR_2);
  if (!VAR_1)
   FUNC_4("find target, node: %pOF, path '%s' not found\n",
          VAR_0, VAR_2);
  return VAR_1;
 }

 FUNC_4("find target, node: %pOF, no target property\n", VAR_0);

 return ((void*)0);
}
