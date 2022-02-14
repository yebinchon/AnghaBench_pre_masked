
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct technisat_usb2_state {int* buf; } ;
struct dvb_usb_device {int i2c_mutex; int udev; struct technisat_usb2_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int,int,int ,int*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct technisat_usb2_state *VAR_7 = VAR_4->priv;
 u8 *VAR_8 = VAR_7->buf;
 int VAR_9;

 VAR_8[0] = 0;

 if (FUNC_0(&VAR_4->i2c_mutex) < 0)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_4->udev, FUNC_3(VAR_4->udev, 0),
  VAR_1,
  VAR_3 | VAR_2,
  (VAR_5 << 8) | VAR_6, 0,
  VAR_8, 1, 500);

 FUNC_1(&VAR_4->i2c_mutex);

 return VAR_9;
}
