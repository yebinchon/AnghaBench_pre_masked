
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct dln2_dev {int dummy; } ;


 int FUNC_0 (struct dln2_dev*) ;
 int FUNC_1 (struct dln2_dev*) ;
 int FUNC_2 (int *) ;
 struct dln2_dev* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct dln2_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);

 FUNC_2(&VAR_0->dev);

 FUNC_0(VAR_1);
}
