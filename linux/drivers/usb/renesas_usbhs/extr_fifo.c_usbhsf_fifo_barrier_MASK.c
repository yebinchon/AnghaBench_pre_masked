
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_fifo {int ctr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbhs_priv*,int ) ;

__attribute__((used)) static int FUNC_1(struct usbhs_priv *VAR_2,
          struct usbhs_fifo *VAR_3)
{

 if (FUNC_0(VAR_2, VAR_3->ctr) & VAR_1)
  return 0;

 return -VAR_0;
}
