
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct mt7601u_dma_buf_rx {int urb; int p; } ;
struct mt7601u_dev {int dev; int * in_eps; } ;
typedef int gfp_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 struct usb_device* FUNC_1 (struct mt7601u_dev*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct mt7601u_dev*,int ) ;
 int FUNC_4 (int ,struct usb_device*,unsigned int,int *,int ,int ,struct mt7601u_dev*) ;
 unsigned int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mt7601u_dev *VAR_3,
     struct mt7601u_dma_buf_rx *VAR_4, gfp_t VAR_5)
{
 struct usb_device *VAR_6 = FUNC_1(VAR_3);
 u8 *VAR_7 = FUNC_2(VAR_4->p);
 unsigned VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_6, VAR_3->in_eps[VAR_0]);

 FUNC_4(VAR_4->urb, VAR_6, VAR_8, VAR_7, VAR_1,
     VAR_2, VAR_3);

 FUNC_3(VAR_3, VAR_4->urb);
 VAR_9 = FUNC_6(VAR_4->urb, VAR_5);
 if (VAR_9)
  FUNC_0(VAR_3->dev, "Error: submit RX URB failed:%d\n", VAR_9);

 return VAR_9;
}
