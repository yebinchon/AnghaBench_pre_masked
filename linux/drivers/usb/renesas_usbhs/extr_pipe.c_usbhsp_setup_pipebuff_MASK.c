
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct renesas_usbhs_driver_pipe_config {int bufsize; int bufnum; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,int,int) ;
 int FUNC_1 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_2 (struct usbhs_pipe*) ;
 struct device* FUNC_3 (struct usbhs_priv*) ;
 struct renesas_usbhs_driver_pipe_config* FUNC_4 (struct usbhs_priv*,int) ;

__attribute__((used)) static u16 FUNC_5(struct usbhs_pipe *VAR_0)
{
 struct usbhs_priv *VAR_1 = FUNC_2(VAR_0);
 struct device *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = FUNC_1(VAR_0);
 u16 VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 struct renesas_usbhs_driver_pipe_config *VAR_7 =
     FUNC_4(VAR_1, VAR_3);
 VAR_4 = VAR_7->bufsize;
 VAR_5 = VAR_7->bufnum;


 VAR_6 = (VAR_4 / 64) - 1;

 FUNC_0(VAR_2, "pipe : %d : buff_size 0x%x: bufnmb 0x%x\n",
  VAR_3, VAR_4, VAR_5);

 return (0x1f & VAR_6) << 10 |
  (0xff & VAR_5) << 0;
}
