
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int length; int zero; void (* done ) (struct usbhs_priv*,struct usbhs_pkt*) ;int sequence; scalar_t__ actual; int * handler; void* buf; struct usbhs_pipe* pipe; int node; } ;
struct usbhs_pipe {int * handler; int list; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct usbhs_priv*,unsigned long) ;
 struct usbhs_priv* FUNC_3 (struct usbhs_pipe*) ;
 struct device* FUNC_4 (struct usbhs_priv*) ;
 int FUNC_5 (struct usbhs_priv*,unsigned long) ;
 int VAR_0 ;

void FUNC_6(struct usbhs_pipe *VAR_1, struct usbhs_pkt *VAR_2,
      void (*VAR_3)(struct usbhs_priv *VAR_4,
     struct usbhs_pkt *VAR_5),
      void *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct usbhs_priv *VAR_10 = FUNC_3(VAR_1);
 struct device *VAR_11 = FUNC_4(VAR_10);
 unsigned long VAR_12;

 if (!VAR_3) {
  FUNC_0(VAR_11, "no done function\n");
  return;
 }


 FUNC_2(VAR_10, VAR_12);

 if (!VAR_1->handler) {
  FUNC_0(VAR_11, "no handler function\n");
  VAR_1->handler = &VAR_0;
 }

 FUNC_1(&VAR_2->node, &VAR_1->list);






 VAR_2->pipe = VAR_1;
 VAR_2->buf = VAR_6;
 VAR_2->handler = VAR_1->handler;
 VAR_2->length = VAR_7;
 VAR_2->zero = VAR_8;
 VAR_2->actual = 0;
 VAR_2->done = VAR_3;
 VAR_2->sequence = VAR_9;

 FUNC_5(VAR_10, VAR_12);

}
