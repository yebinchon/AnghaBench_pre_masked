
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_pcwd_private {int mtx; scalar_t__ exists; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 struct usb_pcwd_private* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_pcwd_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct usb_pcwd_private*) ;
 int VAR_5 ;
 int FUNC_8 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_6)
{
 struct usb_pcwd_private *VAR_7;


 FUNC_1(&VAR_1);

 VAR_7 = FUNC_5(VAR_6);
 FUNC_8(VAR_6, ((void*)0));

 FUNC_1(&VAR_7->mtx);


 if (!VAR_2)
  FUNC_7(VAR_7);


 VAR_7->exists = 0;


 FUNC_0(&VAR_3);
 FUNC_0(&VAR_5);
 FUNC_4(&VAR_4);

 FUNC_2(&VAR_7->mtx);


 FUNC_6(VAR_7);

 VAR_0--;

 FUNC_2(&VAR_1);

 FUNC_3("USB PC Watchdog disconnected\n");
}
