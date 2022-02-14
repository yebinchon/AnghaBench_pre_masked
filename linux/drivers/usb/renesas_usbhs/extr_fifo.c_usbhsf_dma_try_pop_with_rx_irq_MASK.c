
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int trans; TYPE_1__* handler; int work; scalar_t__ actual; scalar_t__ length; scalar_t__ buf; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int dummy; } ;
struct TYPE_2__ {int (* try_run ) (struct usbhs_pkt*,int*) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usbhs_pkt*,int*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct usbhs_priv*,int ) ;
 scalar_t__ FUNC_5 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_6 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_7 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_8 (struct usbhs_pkt*) ;
 int FUNC_9 (struct usbhs_priv*,struct usbhs_fifo*) ;
 int FUNC_10 (struct usbhs_priv*,struct usbhs_fifo*) ;
 int FUNC_11 (struct usbhs_pipe*,struct usbhs_fifo*,int ) ;
 int FUNC_12 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 struct usbhs_fifo* FUNC_13 (struct usbhs_priv*,struct usbhs_pkt*) ;
 int FUNC_14 (struct usbhs_pipe*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_15(struct usbhs_pkt *VAR_3, int *VAR_4)
{
 struct usbhs_pipe *VAR_5 = VAR_3->pipe;
 struct usbhs_priv *VAR_6 = FUNC_7(VAR_5);
 struct usbhs_fifo *VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_5(VAR_5))
  return 0;

 if (FUNC_6(VAR_5))
  goto usbhsf_pio_prepare_pop;


 VAR_7 = FUNC_13(VAR_6, VAR_3);
 if (!VAR_7)
  goto usbhsf_pio_prepare_pop;

 if ((uintptr_t)(VAR_3->buf + VAR_3->actual) & 0x7)
  goto usbhsf_pio_prepare_pop;

 VAR_9 = FUNC_11(VAR_5, VAR_7, 0);
 if (VAR_9 < 0)
  goto usbhsf_pio_prepare_pop;


 VAR_8 = FUNC_10(VAR_6, VAR_7);
 VAR_8 = FUNC_1(VAR_3->length - VAR_3->actual, VAR_8);
 if (VAR_8 & 0x7)
  goto usbhsf_pio_prepare_pop_unselect;

 if (VAR_8 < FUNC_4(VAR_6, VAR_0))
  goto usbhsf_pio_prepare_pop_unselect;

 VAR_9 = FUNC_9(VAR_6, VAR_7);
 if (VAR_9 < 0)
  goto usbhsf_pio_prepare_pop_unselect;

 if (FUNC_8(VAR_3) < 0)
  goto usbhsf_pio_prepare_pop_unselect;
 FUNC_14(VAR_5, 0);

 VAR_3->trans = VAR_8;

 FUNC_0(&VAR_3->work, VAR_2);
 FUNC_2(&VAR_3->work);

 return 0;

usbhsf_pio_prepare_pop_unselect:
 FUNC_12(VAR_5, VAR_7);
usbhsf_pio_prepare_pop:




 VAR_3->handler = &VAR_1;

 return VAR_3->handler->try_run(VAR_3, VAR_4);
}
