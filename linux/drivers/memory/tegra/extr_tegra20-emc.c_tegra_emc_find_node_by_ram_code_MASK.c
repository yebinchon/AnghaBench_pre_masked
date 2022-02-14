
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device*,char*,scalar_t__) ;
 struct device_node* FUNC_1 (struct device_node*,char*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,scalar_t__*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static struct device_node *
FUNC_7(struct device *VAR_0)
{
 struct device_node *VAR_1;
 u32 VAR_2, VAR_3;
 int VAR_4;

 if (!FUNC_4(VAR_0->of_node, "nvidia,use-ram-code"))
  return FUNC_2(VAR_0->of_node);

 VAR_3 = FUNC_6();

 for (VAR_1 = FUNC_1(VAR_0->of_node, "emc-tables"); VAR_1;
      VAR_1 = FUNC_1(VAR_1, "emc-tables")) {
  VAR_4 = FUNC_5(VAR_1, "nvidia,ram-code", &VAR_2);
  if (VAR_4 || VAR_2 != VAR_3) {
   FUNC_3(VAR_1);
   continue;
  }

  return VAR_1;
 }

 FUNC_0(VAR_0, "no memory timings for RAM code %u found in device tree\n",
  VAR_3);

 return ((void*)0);
}
