
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int (* done ) (struct usbhs_priv*,struct usbhs_pkt*) ;TYPE_1__* handler; } ;
struct usbhs_pipe {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* prepare ) (struct usbhs_pkt*,int*) ;int (* try_run ) (struct usbhs_pkt*,int*) ;int (* dma_done ) (struct usbhs_pkt*,int*) ;} ;





 int FUNC_0 (struct usbhs_pkt*) ;
 struct usbhs_pkt* FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (int (*) (struct usbhs_pkt*,int*)) ;
 int FUNC_4 (struct usbhs_priv*,struct usbhs_pkt*) ;
 int FUNC_5 (struct usbhs_priv*,unsigned long) ;
 struct usbhs_priv* FUNC_6 (struct usbhs_pipe*) ;
 int FUNC_7 (struct usbhs_pipe*) ;
 struct device* FUNC_8 (struct usbhs_priv*) ;
 int FUNC_9 (struct usbhs_priv*,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct usbhs_pipe *VAR_0, int VAR_1)
{
 struct usbhs_priv *VAR_2 = FUNC_6(VAR_0);
 struct usbhs_pkt *VAR_3;
 struct device *VAR_4 = FUNC_8(VAR_2);
 int (*VAR_5)(struct usbhs_pkt *VAR_6, int *VAR_7);
 unsigned long VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;


 FUNC_5(VAR_2, VAR_8);

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  goto __usbhs_pkt_handler_end;

 switch (VAR_1) {
 case 129:
  VAR_5 = VAR_3->handler->prepare;
  break;
 case 128:
  VAR_5 = VAR_3->handler->try_run;
  break;
 case 130:
  VAR_5 = VAR_3->handler->dma_done;
  break;
 default:
  FUNC_2(VAR_4, "unknown pkt handler\n");
  goto __usbhs_pkt_handler_end;
 }

 if (FUNC_3(VAR_5))
  VAR_9 = VAR_5(VAR_3, &VAR_10);

 if (VAR_10)
  FUNC_0(VAR_3);

__usbhs_pkt_handler_end:
 FUNC_9(VAR_2, VAR_8);


 if (VAR_10) {
  VAR_3->done(VAR_2, VAR_3);
  FUNC_7(VAR_0);
 }

 return VAR_9;
}
