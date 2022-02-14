
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct ati_remote {void* out_urb; void* irq_urb; void* outbuf; int outbuf_dma; void* inbuf; int inbuf_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct usb_device*,int ,int ,int *) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_3,
        struct ati_remote *VAR_4)
{
 VAR_4->inbuf = FUNC_0(VAR_3, VAR_0, VAR_1,
            &VAR_4->inbuf_dma);
 if (!VAR_4->inbuf)
  return -1;

 VAR_4->outbuf = FUNC_0(VAR_3, VAR_0, VAR_1,
      &VAR_4->outbuf_dma);
 if (!VAR_4->outbuf)
  return -1;

 VAR_4->irq_urb = FUNC_1(0, VAR_2);
 if (!VAR_4->irq_urb)
  return -1;

 VAR_4->out_urb = FUNC_1(0, VAR_2);
 if (!VAR_4->out_urb)
  return -1;

 return 0;
}
