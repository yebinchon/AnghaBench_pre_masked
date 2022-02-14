
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int head; int notifier; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct usb_phy*) ;
 int FUNC_6 (struct usb_phy*) ;

int FUNC_7(struct usb_phy *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_3->dev) {
  FUNC_1(VAR_3->dev, "no device provided for PHY\n");
  return -VAR_0;
 }

 FUNC_6(VAR_3);
 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_0(&VAR_3->notifier);

 FUNC_3(&VAR_2, VAR_4);
 FUNC_2(&VAR_3->head, &VAR_1);
 FUNC_4(&VAR_2, VAR_4);

 return 0;
}
