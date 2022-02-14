
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct as102_dev_t {int kref; } ;


 int VAR_0 ;
 int FUNC_0 (struct as102_dev_t*) ;
 int FUNC_1 (struct as102_dev_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct as102_dev_t* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_3)
{
 struct as102_dev_t *VAR_4;


 VAR_4 = FUNC_5(VAR_3);


 FUNC_0(VAR_4);


 FUNC_1(VAR_4);

 FUNC_6(VAR_3, ((void*)0));


 FUNC_4(VAR_3, &VAR_1);


 FUNC_2(&VAR_4->kref, VAR_2);

 FUNC_3("%s: device has been disconnected\n", VAR_0);
}
