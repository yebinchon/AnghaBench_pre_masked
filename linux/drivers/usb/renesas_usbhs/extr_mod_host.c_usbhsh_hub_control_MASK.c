
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhsh_hpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct device {int dummy; } ;




 int VAR_0 ;





 int FUNC_0 (struct usbhsh_hpriv*,int ,int ,int ,char*,int ) ;
 int FUNC_1 (struct usbhsh_hpriv*,int ,int ,int ,char*,int ) ;
 int FUNC_2 (struct usbhsh_hpriv*,int ,int ,int ,char*,int ) ;
 int FUNC_3 (struct device*,char*,int ,int,int ) ;
 struct device* FUNC_4 (struct usbhs_priv*) ;
 struct usbhsh_hpriv* FUNC_5 (struct usb_hcd*) ;
 struct usbhs_priv* FUNC_6 (struct usbhsh_hpriv*) ;
 int FUNC_7 (struct usbhsh_hpriv*) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_1, u16 VAR_2, u16 VAR_3,
         u16 VAR_4, char *VAR_5, u16 VAR_6)
{
 struct usbhsh_hpriv *VAR_7 = FUNC_5(VAR_1);
 struct usbhs_priv *VAR_8 = FUNC_6(VAR_7);
 struct device *VAR_9 = FUNC_4(VAR_8);
 int VAR_10 = -VAR_0;

 switch (VAR_2) {


 case 134:
 case 129:
  VAR_10 = FUNC_1(VAR_7, VAR_2,
            VAR_3, VAR_4, VAR_5, VAR_6);
  break;


 case 128:
 case 133:
  VAR_10 = FUNC_2(VAR_7, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6);
  break;


 case 131:
 case 130:
 case 132:
  VAR_10 = FUNC_0(VAR_7, VAR_2,
           VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 }

 FUNC_3(VAR_9, "typeReq = %x, ret = %d, port_stat = %x\n",
  VAR_2, VAR_10, FUNC_7(VAR_7));

 return VAR_10;
}
