
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int length; int actual; int buf; int trans; TYPE_1__* handler; int work; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int dummy; } ;
struct TYPE_2__ {int (* prepare ) (struct usbhs_pkt*,int*) ;} ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usbhs_pkt*,int*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (struct usbhs_priv*,int ) ;
 scalar_t__ FUNC_4 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_5 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_6 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_7 (struct usbhs_pipe*,int ) ;
 scalar_t__ FUNC_8 (struct usbhs_pkt*) ;
 int FUNC_9 (struct usbhs_pkt*) ;
 int FUNC_10 (struct usbhs_pipe*,struct usbhs_fifo*,int ) ;
 int FUNC_11 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 struct usbhs_fifo* FUNC_12 (struct usbhs_priv*,struct usbhs_pkt*) ;
 int FUNC_13 (struct usbhs_pipe*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct usbhs_pkt *VAR_6, int *VAR_7)
{
 struct usbhs_pipe *VAR_8 = VAR_6->pipe;
 struct usbhs_priv *VAR_9 = FUNC_6(VAR_8);
 struct usbhs_fifo *VAR_10;
 int VAR_11 = VAR_6->length - VAR_6->actual;
 int VAR_12;
 uintptr_t VAR_13;

 if (FUNC_4(VAR_8))
  return 0;


 if ((VAR_11 < FUNC_3(VAR_9, VAR_3)) ||
     FUNC_7(VAR_8, VAR_1))
  goto usbhsf_pio_prepare_push;


 if (!FUNC_3(VAR_9, VAR_2) && VAR_11 & 0x7)
  goto usbhsf_pio_prepare_push;


 VAR_13 = FUNC_3(VAR_9, VAR_2) ?
     VAR_0 - 1 : 0x7;
 if ((uintptr_t)(VAR_6->buf + VAR_6->actual) & VAR_13)
  goto usbhsf_pio_prepare_push;


 if (FUNC_5(VAR_8))
  return 0;


 VAR_10 = FUNC_12(VAR_9, VAR_6);
 if (!VAR_10)
  goto usbhsf_pio_prepare_push;

 VAR_12 = FUNC_10(VAR_8, VAR_10, 0);
 if (VAR_12 < 0)
  goto usbhsf_pio_prepare_push;

 if (FUNC_8(VAR_6) < 0)
  goto usbhsf_pio_prepare_push_unselect;

 VAR_6->trans = VAR_11;

 FUNC_13(VAR_8, 0);

 if (FUNC_3(VAR_9, VAR_2)) {
  FUNC_9(VAR_6);
 } else {
  FUNC_0(&VAR_6->work, VAR_5);
  FUNC_1(&VAR_6->work);
 }

 return 0;

usbhsf_pio_prepare_push_unselect:
 FUNC_11(VAR_8, VAR_10);
usbhsf_pio_prepare_push:



 VAR_6->handler = &VAR_4;

 return VAR_6->handler->prepare(VAR_6, VAR_7);
}
