
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct au0828_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (struct au0828_dev*) ;
 int FUNC_2 (struct au0828_dev*) ;
 int FUNC_3 (struct au0828_dev*) ;
 int FUNC_4 (struct au0828_dev*,int ,int) ;
 int FUNC_5 (char*) ;
 struct au0828_dev* FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_1)
{
 struct au0828_dev *VAR_2 = FUNC_6(VAR_1);
 if (!VAR_2)
  return 0;

 FUNC_5("Resume\n");


 FUNC_4(VAR_2, VAR_0, 1 << 4);


 FUNC_1(VAR_2);

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_2);



 return 0;
}
