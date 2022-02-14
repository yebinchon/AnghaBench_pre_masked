
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_fifo {char* name; int ctr; int sel; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbhs_priv*,struct usbhs_fifo*,int) ;
 int FUNC_1 (struct usbhs_priv*,struct usbhs_fifo*,int) ;
 struct usbhs_fifo* FUNC_2 (struct usbhs_priv*) ;

int FUNC_3(struct usbhs_priv *VAR_3)
{
 struct usbhs_fifo *VAR_4;


 VAR_4 = FUNC_2(VAR_3);
 VAR_4->name = "CFIFO";
 VAR_4->port = VAR_0;
 VAR_4->sel = VAR_2;
 VAR_4->ctr = VAR_1;


 FUNC_0(VAR_3, VAR_4, 0);
 FUNC_0(VAR_3, VAR_4, 1);
 FUNC_1(VAR_3, VAR_4, 2);
 FUNC_1(VAR_3, VAR_4, 3);

 return 0;
}
