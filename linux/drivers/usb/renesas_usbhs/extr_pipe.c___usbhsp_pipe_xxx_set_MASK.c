
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;


 int FUNC_0 (struct usbhs_priv*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_2 (struct usbhs_pipe*) ;

__attribute__((used)) static void FUNC_3(struct usbhs_pipe *VAR_0,
      u16 VAR_1, u16 VAR_2,
      u16 VAR_3, u16 VAR_4)
{
 struct usbhs_priv *VAR_5 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_0))
  FUNC_0(VAR_5, VAR_1, VAR_3, VAR_4);
 else
  FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
}
