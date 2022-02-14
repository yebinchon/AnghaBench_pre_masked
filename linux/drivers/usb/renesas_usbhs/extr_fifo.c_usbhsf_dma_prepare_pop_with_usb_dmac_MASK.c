
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {scalar_t__ length; scalar_t__ trans; TYPE_1__* handler; scalar_t__ buf; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int dummy; } ;
struct TYPE_2__ {int (* prepare ) (struct usbhs_pkt*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbhs_pkt*,int*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_1 (struct usbhs_priv*,int ) ;
 int FUNC_2 (struct usbhs_pipe*,int) ;
 scalar_t__ FUNC_3 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_4 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_5 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_6 (struct usbhs_pipe*,int ) ;
 scalar_t__ FUNC_7 (struct usbhs_pkt*) ;
 int FUNC_8 (struct usbhs_pkt*) ;
 int FUNC_9 (struct usbhs_pipe*,struct usbhs_fifo*,int ) ;
 int FUNC_10 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 struct usbhs_fifo* FUNC_11 (struct usbhs_priv*,struct usbhs_pkt*) ;
 int FUNC_12 (struct usbhs_pipe*,int ) ;

__attribute__((used)) static int FUNC_13(struct usbhs_pkt *VAR_4,
      int *VAR_5)
{
 struct usbhs_pipe *VAR_6 = VAR_4->pipe;
 struct usbhs_priv *VAR_7 = FUNC_5(VAR_6);
 struct usbhs_fifo *VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_6))
  return 0;


 if ((VAR_4->length < FUNC_1(VAR_7, VAR_2)) ||
     FUNC_6(VAR_6, VAR_1))
  goto usbhsf_pio_prepare_pop;

 VAR_8 = FUNC_11(VAR_7, VAR_4);
 if (!VAR_8)
  goto usbhsf_pio_prepare_pop;

 if ((uintptr_t)VAR_4->buf & (VAR_0 - 1))
  goto usbhsf_pio_prepare_pop;


 if (FUNC_4(VAR_6))
  return 0;

 FUNC_2(VAR_6, 1);

 VAR_9 = FUNC_9(VAR_6, VAR_8, 0);
 if (VAR_9 < 0)
  goto usbhsf_pio_prepare_pop;

 if (FUNC_7(VAR_4) < 0)
  goto usbhsf_pio_prepare_pop_unselect;
 FUNC_12(VAR_6, 0);

 VAR_4->trans = VAR_4->length;

 FUNC_8(VAR_4);

 return 0;

usbhsf_pio_prepare_pop_unselect:
 FUNC_10(VAR_6, VAR_8);
usbhsf_pio_prepare_pop:




 VAR_4->handler = &VAR_3;
 FUNC_2(VAR_6, 0);

 return VAR_4->handler->prepare(VAR_4, VAR_5);
}
