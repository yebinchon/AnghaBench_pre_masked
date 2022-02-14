
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct dln2_dev {int disconnect; } ;


 int VAR_0 ;
 int FUNC_0 (struct dln2_dev*,int ) ;
 struct dln2_dev* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_1)
{
 struct dln2_dev *VAR_2 = FUNC_1(VAR_1);

 VAR_2->disconnect = 0;

 return FUNC_0(VAR_2, VAR_0);
}
