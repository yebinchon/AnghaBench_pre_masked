
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ati_remote {int outbuf_dma; int outbuf; int udev; int inbuf_dma; int inbuf; int out_urb; int irq_urb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ati_remote *VAR_1)
{
 FUNC_1(VAR_1->irq_urb);
 FUNC_1(VAR_1->out_urb);

 FUNC_0(VAR_1->udev, VAR_0,
  VAR_1->inbuf, VAR_1->inbuf_dma);

 FUNC_0(VAR_1->udev, VAR_0,
  VAR_1->outbuf, VAR_1->outbuf_dma);
}
