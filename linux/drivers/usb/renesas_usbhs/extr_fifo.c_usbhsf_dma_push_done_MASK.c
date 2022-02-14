
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_pkt {int trans; scalar_t__ actual; scalar_t__ length; TYPE_1__* handler; int zero; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int fifo; } ;
struct TYPE_2__ {int (* try_run ) (struct usbhs_pkt*,int*) ;} ;


 int FUNC_0 (struct usbhs_pkt*,int*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_pipe*,int) ;
 int FUNC_3 (struct usbhs_pipe*,int ) ;
 int FUNC_4 (struct usbhs_pkt*) ;
 int FUNC_5 (struct usbhs_pipe*,int ) ;

__attribute__((used)) static int FUNC_6(struct usbhs_pkt *VAR_1, int *VAR_2)
{
 struct usbhs_pipe *VAR_3 = VAR_1->pipe;
 int VAR_4 = VAR_1->trans % FUNC_1(VAR_3);

 VAR_1->actual += VAR_1->trans;

 if (VAR_1->actual < VAR_1->length)
  *VAR_2 = 0;
 else if (VAR_4)
  *VAR_2 = 1;
 else
  *VAR_2 = !VAR_1->zero;

 FUNC_2(VAR_3, !*VAR_2);

 FUNC_3(VAR_3, VAR_3->fifo);
 FUNC_4(VAR_1);
 FUNC_5(VAR_3, VAR_3->fifo);

 if (!*VAR_2) {

  VAR_1->handler = &VAR_0;
  return VAR_1->handler->try_run(VAR_1, VAR_2);
 }

 return 0;
}
