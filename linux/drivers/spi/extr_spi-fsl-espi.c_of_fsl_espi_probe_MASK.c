
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,struct resource*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (struct device_node*,int ,struct resource*) ;
 unsigned int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct resource VAR_4;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_5(VAR_3, "mode")) {
  FUNC_0(VAR_2, "mode property is not supported on ESPI!\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, 0, &VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_2(VAR_3, 0);
 if (!VAR_5)
  return -VAR_0;

 return FUNC_1(VAR_2, &VAR_4, VAR_5, VAR_6);
}
