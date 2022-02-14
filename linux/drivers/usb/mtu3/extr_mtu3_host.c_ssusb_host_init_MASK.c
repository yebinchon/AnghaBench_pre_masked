
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,struct device_node*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device_node*,int *,int *,struct device*) ;
 int FUNC_3 (struct ssusb_mtk*) ;

int FUNC_4(struct ssusb_mtk *VAR_0, struct device_node *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;
 int VAR_3;

 FUNC_3(VAR_0);

 VAR_3 = FUNC_2(VAR_1, ((void*)0), ((void*)0), VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2, "failed to create child devices at %pOF\n",
    VAR_1);
  return VAR_3;
 }

 FUNC_1(VAR_2, "xHCI platform device register success...\n");

 return 0;
}
