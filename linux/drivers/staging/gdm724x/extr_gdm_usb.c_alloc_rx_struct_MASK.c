
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_rx {struct usb_rx* buf; int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_rx*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct usb_rx *FUNC_4(void)
{
 struct usb_rx *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_3->urb = FUNC_2(0, VAR_1);
 VAR_3->buf = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3->urb || !VAR_3->buf) {
  VAR_4 = -VAR_0;
  goto out;
 }
out:

 if (VAR_4 < 0) {
  if (VAR_3) {
   FUNC_3(VAR_3->urb);
   FUNC_0(VAR_3->buf);
   FUNC_0(VAR_3);
  }
  return ((void*)0);
 }

 return VAR_3;
}
