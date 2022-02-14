
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int maxp; } ;
struct renesas_usbhs_driver_pipe_config {scalar_t__ double_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_3 (struct usbhs_pipe*) ;
 struct device* FUNC_4 (struct usbhs_priv*) ;
 struct renesas_usbhs_driver_pipe_config* FUNC_5 (struct usbhs_priv*,int) ;
 int FUNC_6 (struct usbhs_pipe*) ;
 int FUNC_7 (struct usbhs_pipe*,int,int) ;
 int FUNC_8 (struct usbhs_pipe*,int,int) ;
 int FUNC_9 (struct usbhs_pipe*) ;

void FUNC_10(struct usbhs_pipe *VAR_1, u16 VAR_2,
         u16 VAR_3, u16 VAR_4)
{
 struct usbhs_priv *VAR_5 = FUNC_3(VAR_1);
 int VAR_6 = FUNC_2(VAR_1);
 struct renesas_usbhs_driver_pipe_config *VAR_7 =
     FUNC_5(VAR_5, VAR_6);
 u16 VAR_8 = VAR_7->double_buf ? VAR_0 : 0;

 if (VAR_2 > 0xA) {
  struct device *VAR_9 = FUNC_4(VAR_5);

  FUNC_0(VAR_9, "devsel error %d\n", VAR_2);

  VAR_2 = 0;
 }

 FUNC_6(VAR_1);

 VAR_1->maxp = VAR_4;

 FUNC_9(VAR_1);
 FUNC_8(VAR_1, 0xFFFF,
        (VAR_2 << 12) |
        VAR_4);

 if (!FUNC_1(VAR_1))
  FUNC_7(VAR_1, 0x000F | VAR_0, VAR_3 | VAR_8);
}
