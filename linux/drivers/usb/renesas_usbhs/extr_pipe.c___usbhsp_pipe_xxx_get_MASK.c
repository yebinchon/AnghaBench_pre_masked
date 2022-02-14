
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;


 scalar_t__ FUNC_0 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_priv*,int ) ;

__attribute__((used)) static u16 FUNC_3(struct usbhs_pipe *VAR_0,
     u16 VAR_1, u16 VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_0))
  return FUNC_2(VAR_3, VAR_1);
 else
  return FUNC_2(VAR_3, VAR_2);
}
