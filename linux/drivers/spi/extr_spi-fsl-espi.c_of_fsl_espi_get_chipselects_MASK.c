
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->of_node;
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, "fsl,espi-num-chipselects", &VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0, "No 'fsl,espi-num-chipselects' property\n");
  return 0;
 }

 return VAR_2;
}
