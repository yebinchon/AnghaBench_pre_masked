
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget_driver {scalar_t__ max_speed; int setup; } ;
struct usb_gadget {int dummy; } ;
struct r8a66597 {int old_vbus; int timer; int scount; struct usb_gadget_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct r8a66597* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct r8a66597*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct r8a66597*,int ,int ) ;
 int FUNC_5 (struct r8a66597*,int ) ;
 int FUNC_6 (struct r8a66597*) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_9,
  struct usb_gadget_driver *VAR_10)
{
 struct r8a66597 *VAR_11 = FUNC_0(VAR_9);

 if (!VAR_10
   || VAR_10->max_speed < VAR_5
   || !VAR_10->setup)
  return -VAR_0;
 if (!VAR_11)
  return -VAR_1;


 VAR_11->driver = VAR_10;

 FUNC_1(VAR_11);
 FUNC_4(VAR_11, VAR_6, VAR_2);
 if (FUNC_5(VAR_11, VAR_3) & VAR_7) {
  FUNC_6(VAR_11);

  VAR_11->old_vbus = FUNC_5(VAR_11,
      VAR_3) & VAR_7;
  VAR_11->scount = VAR_4;
  FUNC_2(&VAR_11->timer, VAR_8 + FUNC_3(50));
 }

 return 0;
}
