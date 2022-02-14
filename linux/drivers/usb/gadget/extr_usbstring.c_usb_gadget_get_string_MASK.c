
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u8 ;
struct usb_string {int id; int s; } ;
struct usb_gadget_strings {int language; struct usb_string* strings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int *,int) ;

int
FUNC_3 (const struct usb_gadget_strings *VAR_3, int VAR_4, u8 *VAR_5)
{
 struct usb_string *VAR_6;
 int VAR_7;


 if (VAR_4 == 0) {
  VAR_5 [0] = 4;
  VAR_5 [1] = VAR_1;
  VAR_5 [2] = (u8) VAR_3->language;
  VAR_5 [3] = (u8) (VAR_3->language >> 8);
  return 4;
 }
 for (VAR_6 = VAR_3->strings; VAR_6 && VAR_6->s; VAR_6++)
  if (VAR_6->id == VAR_4)
   break;


 if (!VAR_6 || !VAR_6->s)
  return -VAR_0;


 VAR_7 = FUNC_0 ((size_t) 126, FUNC_1 (VAR_6->s));
 VAR_7 = FUNC_2(VAR_6->s, VAR_7, VAR_2,
   (wchar_t *) &VAR_5[2], 126);
 if (VAR_7 < 0)
  return -VAR_0;
 VAR_5 [0] = (VAR_7 + 1) * 2;
 VAR_5 [1] = VAR_1;
 return VAR_5 [0];
}
