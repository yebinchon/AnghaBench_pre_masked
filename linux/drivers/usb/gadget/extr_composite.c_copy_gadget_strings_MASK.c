
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_string {char* s; } ;
struct usb_gadget_strings {struct usb_string* strings; int language; } ;
struct usb_gadget_string_container {void* stash; } ;


 int VAR_0 ;
 struct usb_gadget_string_container* FUNC_0 (int ) ;
 int VAR_1 ;
 struct usb_gadget_strings** FUNC_1 (struct usb_gadget_string_container*) ;
 struct usb_gadget_string_container* FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static struct usb_gadget_string_container *FUNC_3(
  struct usb_gadget_strings **VAR_2, unsigned VAR_3,
  unsigned VAR_4)
{
 struct usb_gadget_string_container *VAR_5;
 struct usb_gadget_strings **VAR_6;
 struct usb_gadget_strings *VAR_7;
 struct usb_string *VAR_8;
 unsigned VAR_9;
 unsigned VAR_10;
 unsigned VAR_11;
 void *VAR_12;

 VAR_9 = sizeof(*VAR_5);
 VAR_9 += sizeof(void *) * (VAR_3 + 1);
 VAR_9 += sizeof(struct usb_gadget_strings) * VAR_3;
 VAR_9 += sizeof(struct usb_string) * (VAR_4 + 1) * (VAR_3);
 VAR_5 = FUNC_2(VAR_9, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_6 = FUNC_1(VAR_5);
 VAR_12 = VAR_5->stash;
 VAR_12 += sizeof(void *) * (VAR_3 + 1);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct usb_string *VAR_13;

  VAR_6[VAR_10] = VAR_12;
  VAR_7 = VAR_6[VAR_10];
  VAR_12 += sizeof(struct usb_gadget_strings);
  VAR_7->language = VAR_2[VAR_10]->language;
  VAR_7->strings = VAR_12;
  VAR_13 = VAR_2[VAR_10]->strings;

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   VAR_8 = VAR_12;
   VAR_12 += sizeof(struct usb_string);
   if (VAR_13->s)
    VAR_8->s = VAR_13->s;
   else
    VAR_8->s = "";
   VAR_13++;
  }
  VAR_8 = VAR_12;
  VAR_8->s = ((void*)0);
  VAR_12 += sizeof(struct usb_string);

 }
 VAR_6[VAR_10] = ((void*)0);
 return VAR_5;
}
