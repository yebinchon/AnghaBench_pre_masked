
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int pipe; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct usbhs_priv* FUNC_1 (int ) ;
 struct device* FUNC_2 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_3(struct usbhs_pkt *VAR_1, int *VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_1(VAR_1->pipe);
 struct device *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4, "null handler\n");

 return -VAR_0;
}
