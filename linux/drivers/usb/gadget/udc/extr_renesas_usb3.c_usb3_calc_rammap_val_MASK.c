
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_endpoint_descriptor {int dummy; } ;
struct renesas_usb3_ep {int rammap_val; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const) ;
 int const FUNC_2 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static u32 FUNC_3(struct renesas_usb3_ep *VAR_0,
    const struct usb_endpoint_descriptor *VAR_1)
{
 int VAR_2;
 static const u32 VAR_3[] = {8, 16, 32, 64, 512};
 u32 VAR_4 = FUNC_1(1024);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3); VAR_2++) {
  if (FUNC_2(VAR_1) <= VAR_3[VAR_2])
   VAR_4 = FUNC_1(VAR_3[VAR_2]);
 }

 return VAR_0->rammap_val | VAR_4;
}
