
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct cypress {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_interface*) ;
 struct cypress* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*,struct cypress*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_2,
    const struct usb_device_id *VAR_3)
{
 struct cypress *VAR_4 = ((void*)0);
 int VAR_5 = -VAR_0;


 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto error_mem;

 VAR_4->udev = FUNC_3(FUNC_1(VAR_2));


 FUNC_4(VAR_2, VAR_4);


 FUNC_0(&VAR_2->dev,
   "Cypress CY7C63xxx device now attached\n");
 return 0;

error_mem:
 return VAR_5;
}
