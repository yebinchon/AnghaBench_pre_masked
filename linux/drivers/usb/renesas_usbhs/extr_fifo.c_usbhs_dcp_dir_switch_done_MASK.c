
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_pkt {int length; int actual; int * handler; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_pipe*,int ) ;
 int FUNC_1 (struct usbhs_pipe*,int ) ;

__attribute__((used)) static int FUNC_2(struct usbhs_pkt *VAR_1, int *VAR_2)
{
 struct usbhs_pipe *VAR_3 = VAR_1->pipe;

 if (VAR_1->handler == &VAR_0)
  FUNC_1(VAR_3, 0);
 else
  FUNC_0(VAR_3, 0);

 VAR_1->actual = VAR_1->length;
 *VAR_2 = 1;

 return 0;
}
