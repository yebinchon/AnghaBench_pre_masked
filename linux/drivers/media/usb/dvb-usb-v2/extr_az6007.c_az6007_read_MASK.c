
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int udev; struct az6007_device_state* priv; } ;
struct az6007_device_state {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_1, u8 VAR_2, u16 VAR_3,
       u16 VAR_4, u8 *VAR_5, int VAR_6)
{
 struct az6007_device_state *VAR_7 = VAR_1->priv;
 int VAR_8;

 if (FUNC_1(&VAR_7->mutex) < 0)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_1->udev, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_2(&VAR_7->mutex);

 return VAR_8;
}
