
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_descriptor_header {scalar_t__ bLength; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (void*,struct usb_descriptor_header*,scalar_t__) ;

struct usb_descriptor_header **
FUNC_2(struct usb_descriptor_header **VAR_1)
{
 struct usb_descriptor_header **VAR_2;
 unsigned VAR_3;
 unsigned VAR_4;
 void *VAR_5;
 struct usb_descriptor_header **VAR_6;


 for (VAR_3 = 0, VAR_4 = 0, VAR_2 = VAR_1; *VAR_2; VAR_2++, VAR_4++)
  VAR_3 += (*VAR_2)->bLength;
 VAR_3 += (VAR_4 + 1) * sizeof(*VAR_2);

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);





 VAR_2 = VAR_5;
 VAR_6 = VAR_5;
 VAR_5 += (VAR_4 + 1) * sizeof(*VAR_2);
 while (*VAR_1) {
  FUNC_1(VAR_5, *VAR_1, (*VAR_1)->bLength);
  *VAR_2 = VAR_5;
  VAR_2++;
  VAR_5 += (*VAR_1)->bLength;
  VAR_1++;
 }
 *VAR_2 = ((void*)0);

 return VAR_6;
}
