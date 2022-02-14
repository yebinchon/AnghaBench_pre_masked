
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u32 ;
struct usb_string_descriptor {int bLength; void* bDescriptorType; scalar_t__ wData; } ;
struct dbc_str_descs {int* string0; scalar_t__ manufacturer; scalar_t__ product; scalar_t__ serial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int *,int ) ;

__attribute__((used)) static u32 FUNC_2(struct dbc_str_descs *VAR_6)
{
 struct usb_string_descriptor *VAR_7;
 u32 VAR_8;


 VAR_7 = (struct usb_string_descriptor *)VAR_6->serial;
 FUNC_1(VAR_3, FUNC_0(VAR_3),
   VAR_5, (wchar_t *)VAR_7->wData,
   VAR_0);

 VAR_7->bLength = (FUNC_0(VAR_3) + 1) * 2;
 VAR_7->bDescriptorType = VAR_4;
 VAR_8 = VAR_7->bLength;
 VAR_8 <<= 8;


 VAR_7 = (struct usb_string_descriptor *)VAR_6->product;
 FUNC_1(VAR_2, FUNC_0(VAR_2),
   VAR_5, (wchar_t *)VAR_7->wData,
   VAR_0);

 VAR_7->bLength = (FUNC_0(VAR_2) + 1) * 2;
 VAR_7->bDescriptorType = VAR_4;
 VAR_8 += VAR_7->bLength;
 VAR_8 <<= 8;


 VAR_7 = (struct usb_string_descriptor *)VAR_6->manufacturer;
 FUNC_1(VAR_1,
   FUNC_0(VAR_1),
   VAR_5, (wchar_t *)VAR_7->wData,
   VAR_0);

 VAR_7->bLength = (FUNC_0(VAR_1) + 1) * 2;
 VAR_7->bDescriptorType = VAR_4;
 VAR_8 += VAR_7->bLength;
 VAR_8 <<= 8;


 VAR_6->string0[0] = 4;
 VAR_6->string0[1] = VAR_4;
 VAR_6->string0[2] = 0x09;
 VAR_6->string0[3] = 0x04;
 VAR_8 += 4;

 return VAR_8;
}
