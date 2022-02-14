
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int sequence; int length; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int dummy; } ;


 int FUNC_0 (struct usbhs_pipe*,int) ;
 int FUNC_1 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_2 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_3 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_4 (struct usbhs_pipe*) ;
 int FUNC_5 (struct usbhs_pipe*,int) ;
 int FUNC_6 (struct usbhs_pipe*,int ) ;
 struct usbhs_priv* FUNC_7 (struct usbhs_pipe*) ;
 int FUNC_8 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 struct usbhs_fifo* FUNC_9 (struct usbhs_priv*) ;
 int FUNC_10 (struct usbhs_pipe*,int) ;

__attribute__((used)) static int FUNC_11(struct usbhs_pkt *VAR_0, int *VAR_1)
{
 struct usbhs_pipe *VAR_2 = VAR_0->pipe;
 struct usbhs_priv *VAR_3 = FUNC_7(VAR_2);
 struct usbhs_fifo *VAR_4 = FUNC_9(VAR_3);

 if (FUNC_2(VAR_2))
  return 0;

 if (FUNC_4(VAR_2))
  return 0;




 FUNC_0(VAR_2, VAR_0->sequence);
 VAR_0->sequence = -1;

 if (FUNC_3(VAR_2))
  FUNC_8(VAR_2, VAR_4);

 FUNC_6(VAR_2, VAR_0->length);
 FUNC_1(VAR_2);
 FUNC_5(VAR_2, 1);
 FUNC_10(VAR_2, 1);

 return 0;
}
