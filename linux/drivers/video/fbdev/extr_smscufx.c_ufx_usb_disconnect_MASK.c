
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ufx_data {int virtualized; scalar_t__ fb_count; int kref; int free_framebuffer_work; int usb_active; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 struct ufx_data* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_1)
{
 struct ufx_data *VAR_2;

 VAR_2 = FUNC_4(VAR_1);

 FUNC_2("USB disconnect starting\n");


 VAR_2->virtualized = 1;


 FUNC_0(&VAR_2->usb_active, 0);

 FUNC_5(VAR_1, ((void*)0));


 if (VAR_2->fb_count == 0)
  FUNC_3(&VAR_2->free_framebuffer_work, 0);


 FUNC_1(&VAR_2->kref, VAR_0);


}
