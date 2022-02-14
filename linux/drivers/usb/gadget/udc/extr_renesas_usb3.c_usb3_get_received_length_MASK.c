
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct renesas_usb3_ep {scalar_t__ num; } ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct renesas_usb3* FUNC_0 (struct renesas_usb3_ep*) ;
 int FUNC_1 (struct renesas_usb3*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct renesas_usb3_ep *VAR_2)
{
 struct renesas_usb3 *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = VAR_2->num ? VAR_1 : VAR_0;

 return FUNC_1(VAR_3, VAR_4);
}
