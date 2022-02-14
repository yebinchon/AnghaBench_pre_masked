
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int * buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct i2c_adapter*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3,
    int VAR_4)
{
 int VAR_5 = 0, VAR_6;
 struct dvb_usb_device *VAR_7 = FUNC_0(VAR_2);



 if (FUNC_1(&VAR_7->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_6+1 < VAR_4 && VAR_3[VAR_6+1].flags & VAR_1) {
   VAR_5 = FUNC_3(VAR_7->udev, VAR_3[VAR_6+1].addr,
      VAR_3[VAR_6].buf, VAR_3[VAR_6].len,
      VAR_3[VAR_6+1].buf, VAR_3[VAR_6+1].len);
   if (VAR_5 != 0)
    break;
   VAR_6++;
  } else {
   VAR_5 = FUNC_3(VAR_7->udev, VAR_3[VAR_6].addr,
      VAR_3[VAR_6].buf, VAR_3[VAR_6].len,
      ((void*)0), 0);
   if (VAR_5 != 0)
    break;
  }
 }

 if (VAR_5 == 0)
  VAR_5 = VAR_6;

 FUNC_2(&VAR_7->i2c_mutex);

 return VAR_5;
}
