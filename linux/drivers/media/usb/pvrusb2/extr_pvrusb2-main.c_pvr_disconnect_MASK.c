
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct pvr2_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_context*) ;
 int FUNC_1 (int ,char*,struct pvr2_context*) ;
 struct pvr2_context* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_1)
{
 struct pvr2_context *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_0,"pvr_disconnect(pvr=%p) BEGIN",VAR_2);

 FUNC_3 (VAR_1, ((void*)0));
 FUNC_0(VAR_2);

 FUNC_1(VAR_0,"pvr_disconnect(pvr=%p) DONE",VAR_2);

}
