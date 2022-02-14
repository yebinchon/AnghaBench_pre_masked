
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_endpoint_descriptor {int dummy; } ;
struct renesas_usb3_ep {scalar_t__ dir_in; } ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct renesas_usb3* FUNC_2 (struct renesas_usb3_ep*) ;
 int FUNC_3 (struct renesas_usb3*,int ,int ) ;
 int FUNC_4 (struct usb_endpoint_descriptor const*) ;
 int FUNC_5 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static void FUNC_6(struct renesas_usb3_ep *VAR_2,
         const struct usb_endpoint_descriptor *VAR_3)
{
 struct renesas_usb3 *VAR_4 = FUNC_2(VAR_2);
 u32 VAR_5 = 0;

 VAR_5 |= VAR_2->dir_in ? VAR_0 : 0;
 VAR_5 |= FUNC_1(FUNC_5(VAR_3));
 VAR_5 |= FUNC_0(FUNC_4(VAR_3));
 FUNC_3(VAR_4, VAR_5, VAR_1);
}
