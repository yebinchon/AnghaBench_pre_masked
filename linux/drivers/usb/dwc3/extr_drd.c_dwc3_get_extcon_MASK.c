
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extcon_dev {int dummy; } ;
struct dwc3 {struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 struct extcon_dev* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,char*,char const**) ;
 struct extcon_dev* FUNC_3 (struct device_node*) ;
 struct extcon_dev* FUNC_4 (struct device*,int ) ;
 struct extcon_dev* FUNC_5 (char const*) ;
 struct device_node* FUNC_6 (struct device_node*,int,int) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static struct extcon_dev *FUNC_9(struct dwc3 *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct device_node *VAR_3, *VAR_4;
 struct extcon_dev *VAR_5;
 const char *VAR_6;

 if (FUNC_1(VAR_2, "extcon"))
  return FUNC_4(VAR_2, 0);







 if (FUNC_2(VAR_2, "linux,extcon-name", &VAR_6) == 0) {
  VAR_5 = FUNC_5(VAR_6);
  if (!VAR_5)
   return FUNC_0(-VAR_0);

  return VAR_5;
 }

 VAR_3 = FUNC_8(VAR_2->of_node, "phys", 0);
 VAR_4 = FUNC_6(VAR_3, -1, -1);

 if (VAR_4)
  VAR_5 = FUNC_3(VAR_4);
 else
  VAR_5 = ((void*)0);

 FUNC_7(VAR_4);
 FUNC_7(VAR_3);

 return VAR_5;
}
