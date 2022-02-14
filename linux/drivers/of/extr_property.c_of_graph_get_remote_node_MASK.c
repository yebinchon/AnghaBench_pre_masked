
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node const*,int ,int ) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char*,...) ;

struct device_node *FUNC_5(const struct device_node *VAR_0,
          u32 VAR_1, u32 VAR_2)
{
 struct device_node *VAR_3, *VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_4("no valid endpoint (%d, %d) for node %pOF\n",
    VAR_1, VAR_2, VAR_0);
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 if (!VAR_4) {
  FUNC_4("no valid remote node\n");
  return ((void*)0);
 }

 if (!FUNC_0(VAR_4)) {
  FUNC_4("not available for remote node\n");
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
