
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_priv*,scalar_t__) ;
 int FUNC_3 (struct usbhs_pipe*) ;

__attribute__((used)) static u16 FUNC_4(struct usbhs_pipe *VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = FUNC_3(VAR_2);

 if (FUNC_0(VAR_2))
  return FUNC_2(VAR_3, VAR_0);
 else
  return FUNC_2(VAR_3, VAR_1 + VAR_4);
}
