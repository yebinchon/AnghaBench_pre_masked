
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int dummy; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct usbhs_pkt*) ;
 struct usbhs_pkt* FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct usbhs_priv*,unsigned long) ;
 int FUNC_4 (struct usbhs_pipe*,int ,int ) ;
 int FUNC_5 (struct usbhs_pipe*) ;
 struct usbhs_fifo* FUNC_6 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_7 (struct usbhs_pipe*) ;
 int FUNC_8 (struct usbhs_priv*,unsigned long) ;
 struct dma_chan* FUNC_9 (struct usbhs_fifo*,struct usbhs_pkt*) ;
 int FUNC_10 (struct usbhs_pkt*) ;
 int FUNC_11 (struct usbhs_pipe*,struct usbhs_fifo*) ;

struct usbhs_pkt *FUNC_12(struct usbhs_pipe *VAR_0, struct usbhs_pkt *VAR_1)
{
 struct usbhs_priv *VAR_2 = FUNC_7(VAR_0);
 struct usbhs_fifo *VAR_3 = FUNC_6(VAR_0);
 unsigned long VAR_4;


 FUNC_3(VAR_2, VAR_4);

 FUNC_5(VAR_0);

 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  struct dma_chan *VAR_5 = ((void*)0);

  if (VAR_3)
   VAR_5 = FUNC_9(VAR_3, VAR_1);
  if (VAR_5) {
   FUNC_2(VAR_5);
   FUNC_10(VAR_1);
  }

  FUNC_4(VAR_0, 0, 0);

  FUNC_0(VAR_1);
 }

 if (VAR_3)
  FUNC_11(VAR_0, VAR_3);

 FUNC_8(VAR_2, VAR_4);


 return VAR_1;
}
