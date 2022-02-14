
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int pipe; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usbhs_priv*,int ) ;
 struct usbhs_priv* FUNC_1 (int ) ;
 int FUNC_2 (struct usbhs_pkt*,int*) ;
 int FUNC_3 (struct usbhs_pkt*,int*) ;

__attribute__((used)) static int FUNC_4(struct usbhs_pkt *VAR_1, int *VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_1(VAR_1->pipe);

 if (FUNC_0(VAR_3, VAR_0))
  return FUNC_3(VAR_1, VAR_2);
 else
  return FUNC_2(VAR_1, VAR_2);
}
