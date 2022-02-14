
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_pkt {TYPE_1__* handler; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct TYPE_2__ {int (* prepare ) (struct usbhs_pkt*,int*) ;} ;


 int FUNC_0 (struct usbhs_pkt*,int*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct usbhs_pipe*) ;

__attribute__((used)) static int FUNC_2(struct usbhs_pkt *VAR_1, int *VAR_2)
{
 struct usbhs_pipe *VAR_3 = VAR_1->pipe;

 FUNC_1(VAR_3);




 VAR_1->handler = &VAR_0;

 return VAR_1->handler->prepare(VAR_1, VAR_2);
}
