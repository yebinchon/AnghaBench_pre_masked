
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct technisat_usb2_state {int* buf; } ;
struct ir_raw_event {int pulse; int duration; } ;
struct dvb_usb_device {int rc_dev; int i2c_mutex; int udev; struct technisat_usb2_state* priv; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int,int (*) (char*,int)) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct ir_raw_event*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int,int,int,int ,int*,int,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct dvb_usb_device *VAR_9)
{
 struct technisat_usb2_state *VAR_10 = VAR_9->priv;
 struct ir_raw_event VAR_11;
 u8 *VAR_12 = VAR_10->buf;
 int VAR_13, VAR_14;

 VAR_12[0] = VAR_3;
 VAR_12[1] = 0x08;
 VAR_12[2] = 0x8f;
 VAR_12[3] = VAR_5;
 VAR_12[4] = VAR_4;

 if (FUNC_5(&VAR_9->i2c_mutex) < 0)
  return -VAR_0;
 VAR_14 = FUNC_7(VAR_9->udev, FUNC_9(VAR_9->udev, 0),
   VAR_3,
   VAR_8 | VAR_7,
   0, 0,
   VAR_12, 5, 500);
 if (VAR_14 < 0)
  goto unlock;

 VAR_12[1] = 0;
 VAR_12[2] = 0;
 VAR_14 = FUNC_7(VAR_9->udev, FUNC_8(VAR_9->udev, 0),
   VAR_3,
   VAR_8 | VAR_6,
   0x8080, 0,
   VAR_12, 62, 500);

unlock:
 FUNC_6(&VAR_9->i2c_mutex);

 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_14 == 1)
  return 0;
 VAR_11.pulse = 0;
 for (VAR_13 = 1; VAR_13 < FUNC_0(VAR_10->buf); VAR_13++) {
  if (VAR_12[VAR_13] == 0xff) {
   VAR_11.pulse = 0;
   VAR_11.duration = 888888*2;
   FUNC_4(VAR_9->rc_dev, &VAR_11);
   break;
  }

  VAR_11.pulse = !VAR_11.pulse;
  VAR_11.duration = (VAR_12[VAR_13] * VAR_1 *
          VAR_2) / 1000;
  FUNC_4(VAR_9->rc_dev, &VAR_11);
 }

 FUNC_3(VAR_9->rc_dev);

 return 1;
}
