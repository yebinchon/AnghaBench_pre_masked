
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_complete_t ;
struct usb_device {int dummy; } ;
struct mt7601u_dma_buf {TYPE_1__* urb; int dma; int len; int buf; } ;
struct mt7601u_dev {int dev; int * out_eps; int * in_eps; } ;
typedef int gfp_t ;
struct TYPE_4__ {int transfer_flags; int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 struct usb_device* FUNC_1 (struct mt7601u_dev*) ;
 int FUNC_2 (struct mt7601u_dev*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct usb_device*,unsigned int,int ,int ,int ,void*) ;
 unsigned int FUNC_4 (struct usb_device*,int ) ;
 unsigned int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

int FUNC_7(struct mt7601u_dev *VAR_2, int VAR_3, int VAR_4,
      struct mt7601u_dma_buf *VAR_5, gfp_t VAR_6,
      usb_complete_t VAR_7, void *VAR_8)
{
 struct usb_device *VAR_9 = FUNC_1(VAR_2);
 unsigned VAR_10;
 int VAR_11;

 if (VAR_3 == VAR_1)
  VAR_10 = FUNC_4(VAR_9, VAR_2->in_eps[VAR_4]);
 else
  VAR_10 = FUNC_5(VAR_9, VAR_2->out_eps[VAR_4]);

 FUNC_3(VAR_5->urb, VAR_9, VAR_10, VAR_5->buf, VAR_5->len,
     VAR_7, VAR_8);
 VAR_5->urb->transfer_dma = VAR_5->dma;
 VAR_5->urb->transfer_flags |= VAR_0;

 FUNC_2(VAR_2, VAR_5->urb);
 VAR_11 = FUNC_6(VAR_5->urb, VAR_6);
 if (VAR_11)
  FUNC_0(VAR_2->dev, "Error: submit URB dir:%d ep:%d failed:%d\n",
   VAR_3, VAR_4, VAR_11);
 return VAR_11;
}
