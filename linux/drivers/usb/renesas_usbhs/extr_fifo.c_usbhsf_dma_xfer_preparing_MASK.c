
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int trans; int zero; int length; int cookie; scalar_t__ actual; scalar_t__ dma; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int name; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct usbhs_pipe* callback_param; int callback; } ;
struct device {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,scalar_t__,int ,int,int) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_6 (struct usbhs_pipe*) ;
 int FUNC_7 (struct usbhs_pipe*) ;
 int FUNC_8 (struct usbhs_pipe*,int) ;
 int FUNC_9 (struct usbhs_pipe*,int ) ;
 struct usbhs_fifo* FUNC_10 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_11 (struct usbhs_pipe*) ;
 struct device* FUNC_12 (struct usbhs_priv*) ;
 struct dma_chan* FUNC_13 (struct usbhs_fifo*,struct usbhs_pkt*) ;
 int VAR_4 ;
 int FUNC_14 (struct usbhs_pipe*,struct usbhs_fifo*) ;

__attribute__((used)) static void FUNC_15(struct usbhs_pkt *VAR_5)
{
 struct usbhs_pipe *VAR_6 = VAR_5->pipe;
 struct usbhs_fifo *VAR_7;
 struct usbhs_priv *VAR_8 = FUNC_11(VAR_6);
 struct dma_async_tx_descriptor *VAR_9;
 struct dma_chan *VAR_10;
 struct device *VAR_11 = FUNC_12(VAR_8);
 enum dma_transfer_direction VAR_12;

 VAR_7 = FUNC_10(VAR_6);
 if (!VAR_7)
  return;

 VAR_10 = FUNC_13(VAR_7, VAR_5);
 VAR_12 = FUNC_6(VAR_6) ? VAR_1 : VAR_2;

 VAR_9 = FUNC_3(VAR_10, VAR_5->dma + VAR_5->actual,
     VAR_5->trans, VAR_12,
     VAR_3 | VAR_0);
 if (!VAR_9)
  return;

 VAR_9->callback = VAR_4;
 VAR_9->callback_param = VAR_6;

 VAR_5->cookie = FUNC_4(VAR_9);
 if (VAR_5->cookie < 0) {
  FUNC_1(VAR_11, "Failed to submit dma descriptor\n");
  return;
 }

 FUNC_0(VAR_11, "  %s %d (%d/ %d)\n",
  VAR_7->name, FUNC_7(VAR_6), VAR_5->length, VAR_5->zero);

 FUNC_8(VAR_6, 1);
 FUNC_9(VAR_6, VAR_5->trans);
 FUNC_2(VAR_10);
 FUNC_14(VAR_6, VAR_7);
 FUNC_5(VAR_6);
}
