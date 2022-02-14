
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int actual; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int fifo; } ;
struct usbhs_fifo {int dummy; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_pkt*,struct dma_chan*,int) ;
 int FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_pipe*,int ) ;
 struct usbhs_fifo* FUNC_3 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_4 (struct usbhs_pipe*) ;
 int FUNC_5 (struct usbhs_priv*,int ,int ) ;
 struct dma_chan* FUNC_6 (struct usbhs_fifo*,struct usbhs_pkt*) ;
 int FUNC_7 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 int FUNC_8 (struct usbhs_pkt*) ;
 int FUNC_9 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 int FUNC_10 (struct usbhs_priv*,struct usbhs_fifo*) ;
 int FUNC_11 (struct usbhs_pipe*,int ) ;

__attribute__((used)) static int FUNC_12(struct usbhs_pkt *VAR_1,
          int *VAR_2)
{
 struct usbhs_pipe *VAR_3 = VAR_1->pipe;
 struct usbhs_priv *VAR_4 = FUNC_4(VAR_3);
 struct usbhs_fifo *VAR_5 = FUNC_3(VAR_3);
 struct dma_chan *VAR_6 = FUNC_6(VAR_5, VAR_1);
 int VAR_7;






 FUNC_5(VAR_4, VAR_0, FUNC_1(VAR_3));

 VAR_7 = FUNC_10(VAR_4, VAR_5);
 FUNC_9(VAR_3, VAR_5);
 VAR_1->actual = FUNC_0(VAR_1, VAR_6, VAR_7);

 FUNC_2(VAR_3, 0);
 FUNC_7(VAR_3, VAR_5);
 FUNC_8(VAR_1);
 FUNC_11(VAR_3, VAR_3->fifo);


 *VAR_2 = 1;

 return 0;
}
