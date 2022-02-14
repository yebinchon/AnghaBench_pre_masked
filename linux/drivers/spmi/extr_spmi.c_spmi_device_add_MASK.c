
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_device {int dev; int usid; struct spmi_controller* ctrl; } ;
struct spmi_controller {int nr; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct spmi_device *VAR_0)
{
 struct spmi_controller *VAR_1 = VAR_0->ctrl;
 int VAR_2;

 FUNC_3(&VAR_0->dev, "%d-%02x", VAR_1->nr, VAR_0->usid);

 VAR_2 = FUNC_4(&VAR_0->dev);
 if (VAR_2 < 0) {
  FUNC_1(&VAR_0->dev, "Can't add %s, status %d\n",
   FUNC_2(&VAR_0->dev), VAR_2);
  goto err_device_add;
 }

 FUNC_0(&VAR_0->dev, "device %s registered\n", FUNC_2(&VAR_0->dev));

err_device_add:
 return VAR_2;
}
