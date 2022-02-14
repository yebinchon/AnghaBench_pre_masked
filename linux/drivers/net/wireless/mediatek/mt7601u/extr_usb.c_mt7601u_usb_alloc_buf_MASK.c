
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct mt7601u_dma_buf {size_t len; int buf; int urb; int dma; } ;
struct mt7601u_dev {int dummy; } ;


 int VAR_0 ;
 struct usb_device* FUNC_0 (struct mt7601u_dev*) ;
 int FUNC_1 (struct usb_device*,size_t,int ,int *) ;
 int FUNC_2 (int ,int ) ;

bool FUNC_3(struct mt7601u_dev *VAR_1, size_t VAR_2,
      struct mt7601u_dma_buf *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_0(VAR_1);

 VAR_3->len = VAR_2;
 VAR_3->urb = FUNC_2(0, VAR_0);
 VAR_3->buf = FUNC_1(VAR_4, VAR_3->len, VAR_0, &VAR_3->dma);

 return !VAR_3->urb || !VAR_3->buf;
}
