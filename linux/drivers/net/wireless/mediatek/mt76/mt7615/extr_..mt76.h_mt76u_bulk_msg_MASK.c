
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct mt76_usb {int * out_ep; int * in_ep; } ;
struct mt76_dev {struct mt76_usb usb; int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,unsigned int,void*,int,int*,int) ;
 unsigned int FUNC_2 (struct usb_device*,int ) ;
 unsigned int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct mt76_dev *VAR_2, void *VAR_3, int VAR_4, int *VAR_5,
        int VAR_6)
{
 struct usb_device *VAR_7 = FUNC_0(VAR_2->dev);
 struct mt76_usb *VAR_8 = &VAR_2->usb;
 unsigned int VAR_9;

 if (VAR_5)
  VAR_9 = FUNC_2(VAR_7, VAR_8->in_ep[VAR_0]);
 else
  VAR_9 = FUNC_3(VAR_7, VAR_8->out_ep[VAR_1]);

 return FUNC_1(VAR_7, VAR_9, VAR_3, VAR_4, VAR_5, VAR_6);
}
