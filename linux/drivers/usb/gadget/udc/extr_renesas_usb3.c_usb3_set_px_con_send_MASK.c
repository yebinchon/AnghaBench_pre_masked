
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct renesas_usb3_ep {scalar_t__ num; } ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct renesas_usb3* FUNC_1 (struct renesas_usb3_ep*) ;
 int FUNC_2 (struct renesas_usb3*,int) ;
 int FUNC_3 (struct renesas_usb3*,int,int) ;

__attribute__((used)) static void FUNC_4(struct renesas_usb3_ep *VAR_4, int VAR_5,
     bool VAR_6)
{
 struct renesas_usb3 *VAR_7 = FUNC_1(VAR_4);
 u32 VAR_8 = VAR_4->num ? VAR_3 : VAR_2;
 u32 VAR_9 = FUNC_2(VAR_7, VAR_8);

 VAR_9 |= VAR_1 | FUNC_0(VAR_5);
 VAR_9 |= (VAR_4->num && VAR_6) ? VAR_0 : 0;
 FUNC_3(VAR_7, VAR_9, VAR_8);
}
