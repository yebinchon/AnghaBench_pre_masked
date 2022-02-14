
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_string {int id; } ;
struct usb_gadget_strings {struct usb_string* strings; } ;
struct usb_gadget_string_container {int list; } ;
struct usb_composite_dev {int gstrings; } ;


 int VAR_0 ;
 struct usb_string* FUNC_0 (struct usb_gadget_string_container*) ;
 struct usb_string* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct usb_gadget_string_container*) ;
 struct usb_gadget_string_container* FUNC_3 (struct usb_gadget_strings**,unsigned int,unsigned int) ;
 struct usb_gadget_strings** FUNC_4 (struct usb_gadget_string_container*) ;
 int FUNC_5 (struct usb_gadget_string_container*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct usb_composite_dev*,struct usb_string*) ;

struct usb_string *FUNC_8(struct usb_composite_dev *VAR_1,
  struct usb_gadget_strings **VAR_2, unsigned VAR_3)
{
 struct usb_gadget_string_container *VAR_4;
 struct usb_gadget_strings **VAR_5;
 unsigned VAR_6 = 0;
 unsigned VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_2[VAR_7]; VAR_7++)
  VAR_6++;

 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_4 = FUNC_3(VAR_2, VAR_6, VAR_3);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 VAR_5 = FUNC_4(VAR_4);
 VAR_8 = FUNC_7(VAR_1, VAR_5[0]->strings);
 if (VAR_8)
  goto err;

 for (VAR_7 = 1; VAR_7 < VAR_6; VAR_7++) {
  struct usb_string *VAR_9;
  struct usb_string *VAR_10;
  unsigned VAR_11;

  VAR_9 = VAR_5[0]->strings;
  VAR_10 = VAR_5[VAR_7]->strings;
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   VAR_10->id = VAR_9->id;
   VAR_10++;
   VAR_9++;
  }
 }
 FUNC_6(&VAR_4->list, &VAR_1->gstrings);
 return VAR_5[0]->strings;
err:
 FUNC_5(VAR_4);
 return FUNC_1(VAR_8);
}
