
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {TYPE_1__* handler; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int dummy; } ;
struct TYPE_2__ {int (* prepare ) (struct usbhs_pkt*,int*) ;} ;


 int FUNC_0 (struct usbhs_pkt*,int*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_2 (struct usbhs_pipe*) ;
 int FUNC_3 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_4 (struct usbhs_pipe*) ;
 int FUNC_5 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 int FUNC_6 (struct usbhs_pipe*,struct usbhs_fifo*,int ) ;
 int FUNC_7 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 struct usbhs_fifo* FUNC_8 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_9(struct usbhs_pkt *VAR_1,
          int *VAR_2)
{
 struct usbhs_pipe *VAR_3 = VAR_1->pipe;
 struct usbhs_priv *VAR_4 = FUNC_4(VAR_3);
 struct usbhs_fifo *VAR_5 = FUNC_8(VAR_4);

 if (FUNC_2(VAR_3))
  return 0;







 FUNC_1(VAR_3);

 FUNC_3(VAR_3);

 FUNC_6(VAR_3, VAR_5, 0);
 FUNC_5(VAR_3, VAR_5);
 FUNC_7(VAR_3, VAR_5);




 VAR_1->handler = &VAR_0;

 return VAR_1->handler->prepare(VAR_1, VAR_2);
}
