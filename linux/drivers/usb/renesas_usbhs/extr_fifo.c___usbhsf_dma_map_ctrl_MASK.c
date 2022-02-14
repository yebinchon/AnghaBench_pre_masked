
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {struct usbhs_pipe* pipe; } ;
struct usbhs_pipe_info {int (* dma_map_ctrl ) (int ,struct usbhs_pkt*,int) ;} ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int dummy; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,struct usbhs_pkt*,int) ;
 struct usbhs_fifo* FUNC_1 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_2 (struct usbhs_pipe*) ;
 struct usbhs_pipe_info* FUNC_3 (struct usbhs_priv*) ;
 struct dma_chan* FUNC_4 (struct usbhs_fifo*,struct usbhs_pkt*) ;

__attribute__((used)) static int FUNC_5(struct usbhs_pkt *VAR_0, int VAR_1)
{
 struct usbhs_pipe *VAR_2 = VAR_0->pipe;
 struct usbhs_priv *VAR_3 = FUNC_2(VAR_2);
 struct usbhs_pipe_info *VAR_4 = FUNC_3(VAR_3);
 struct usbhs_fifo *VAR_5 = FUNC_1(VAR_2);
 struct dma_chan *VAR_6 = FUNC_4(VAR_5, VAR_0);

 return VAR_4->dma_map_ctrl(VAR_6->device->dev, VAR_0, VAR_1);
}
