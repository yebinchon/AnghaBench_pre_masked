
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;
struct usb_interface {int dummy; } ;
struct hwarc {struct uwb_rc* uwb_rc; } ;


 struct hwarc* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct uwb_rc*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0)
{
 struct hwarc *VAR_1 = FUNC_0(VAR_0);
 struct uwb_rc *VAR_2 = VAR_1->uwb_rc;

 FUNC_1(VAR_2);
 return 0;
}
