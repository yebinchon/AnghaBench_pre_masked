
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hcd {int dummy; } ;
struct pxa27x_ohci {int dummy; } ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct usb_hcd*,int,int,int,char*,int) ;
 int FUNC_1 (struct pxa27x_ohci*,int ,int) ;
 struct pxa27x_ohci* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_2, u16 VAR_3, u16 VAR_4,
       u16 VAR_5, char *VAR_6, u16 VAR_7)
{
 struct pxa27x_ohci *VAR_8 = FUNC_2(VAR_2);
 int VAR_9;

 switch (VAR_3) {
 case 128:
 case 129:
  if (!VAR_5 || VAR_5 > 3)
   return -VAR_0;

  if (VAR_4 != VAR_1)
   break;

  VAR_9 = FUNC_1(VAR_8, VAR_5 - 1,
       VAR_3 == 128);
  if (VAR_9)
   return VAR_9;
  break;
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
