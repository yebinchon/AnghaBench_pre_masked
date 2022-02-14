
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_tx {struct usb_tx* buf; int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_tx*) ;
 struct usb_tx* FUNC_1 (int,int ) ;
 struct usb_tx* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct usb_tx *FUNC_5(int VAR_2)
{
 struct usb_tx *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_3->urb = FUNC_3(0, VAR_1);
 if (!(VAR_2 % 512))
  VAR_2++;

 VAR_3->buf = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3->urb || !VAR_3->buf) {
  VAR_4 = -VAR_0;
  goto out;
 }

out:
 if (VAR_4 < 0) {
  if (VAR_3) {
   FUNC_4(VAR_3->urb);
   FUNC_0(VAR_3->buf);
   FUNC_0(VAR_3);
  }
  return ((void*)0);
 }

 return VAR_3;
}
