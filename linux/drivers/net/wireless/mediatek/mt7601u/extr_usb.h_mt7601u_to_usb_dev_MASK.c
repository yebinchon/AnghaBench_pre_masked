
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct mt7601u_dev {int dev; } ;


 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline struct usb_device *FUNC_2(struct mt7601u_dev *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0->dev));
}
