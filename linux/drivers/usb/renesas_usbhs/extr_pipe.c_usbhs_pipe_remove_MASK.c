
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pipe_info {int pipe; } ;


 int FUNC_0 (int ) ;
 struct usbhs_pipe_info* FUNC_1 (struct usbhs_priv*) ;

void FUNC_2(struct usbhs_priv *VAR_0)
{
 struct usbhs_pipe_info *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pipe);
}
