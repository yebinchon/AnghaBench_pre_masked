
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct usb_ctrlrequest {int bRequestType; } ;
struct renesas_usb3_ep {int dir_in; } ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct renesas_usb3_ep* FUNC_0 (struct renesas_usb3*,int ) ;
 void* FUNC_1 (struct renesas_usb3*,int ) ;

__attribute__((used)) static void FUNC_2(struct renesas_usb3 *VAR_3,
    struct usb_ctrlrequest *VAR_4)
{
 struct renesas_usb3_ep *VAR_5 = FUNC_0(VAR_3, 0);
 u32 *VAR_6 = (u32 *)VAR_4;

 *VAR_6++ = FUNC_1(VAR_3, VAR_0);
 *VAR_6 = FUNC_1(VAR_3, VAR_1);


 VAR_5->dir_in = !!(VAR_4->bRequestType & VAR_2);
}
