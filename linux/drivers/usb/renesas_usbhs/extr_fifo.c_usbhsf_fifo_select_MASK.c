
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int sel; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usbhs_pipe*,int) ;
 scalar_t__ FUNC_3 (struct usbhs_priv*) ;
 scalar_t__ FUNC_4 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_5 (struct usbhs_pipe*) ;
 int FUNC_6 (struct usbhs_pipe*) ;
 int FUNC_7 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 struct usbhs_priv* FUNC_8 (struct usbhs_pipe*) ;
 struct device* FUNC_9 (struct usbhs_priv*) ;
 int FUNC_10 (struct usbhs_priv*,int ) ;
 int FUNC_11 (struct usbhs_priv*,int ,int) ;
 scalar_t__ FUNC_12 (struct usbhs_fifo*) ;

__attribute__((used)) static int FUNC_13(struct usbhs_pipe *VAR_3,
         struct usbhs_fifo *VAR_4,
         int VAR_5)
{
 struct usbhs_priv *VAR_6 = FUNC_8(VAR_3);
 struct device *VAR_7 = FUNC_9(VAR_6);
 int VAR_8 = 1024;
 u16 VAR_9 = ((1 << 5) | 0xF);
 u16 VAR_10 = FUNC_6(VAR_3);

 if (FUNC_4(VAR_3) ||
     FUNC_12(VAR_4))
  return -VAR_0;

 if (FUNC_5(VAR_3)) {
  VAR_10 |= (1 == VAR_5) << 5;

  if (FUNC_3(VAR_6))
   FUNC_2(VAR_3, VAR_5);
 }


 FUNC_11(VAR_6, VAR_4->sel, VAR_10 | VAR_2);


 while (VAR_8--) {
  if (VAR_10 == (VAR_9 & FUNC_10(VAR_6, VAR_4->sel))) {
   FUNC_7(VAR_3, VAR_4);
   return 0;
  }
  FUNC_1(10);
 }

 FUNC_0(VAR_7, "fifo select error\n");

 return -VAR_1;
}
