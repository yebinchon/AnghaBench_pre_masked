
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct mt7601u_dma_buf {int urb; int dma; int buf; int len; } ;
struct mt7601u_dev {int dummy; } ;


 struct usb_device* FUNC_0 (struct mt7601u_dev*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mt7601u_dev *VAR_0, struct mt7601u_dma_buf *VAR_1)
{
 struct usb_device *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_1->len, VAR_1->buf, VAR_1->dma);
 FUNC_2(VAR_1->urb);
}
