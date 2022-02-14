
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_usb_device {int usb_mutex; int udev; struct dib0700_state* priv; } ;
struct dib0700_state {int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct dvb_usb_device *VAR_5, u32 *VAR_6,
   u32 *VAR_7, u32 *VAR_8, u32 *VAR_9)
{
 struct dib0700_state *VAR_10 = VAR_5->priv;
 int VAR_11;

 if (FUNC_1(&VAR_5->usb_mutex) < 0) {
  FUNC_0("could not acquire lock");
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_5->udev, FUNC_4(VAR_5->udev, 0),
      VAR_1,
      VAR_4 | VAR_3, 0, 0,
      VAR_10->buf, 16, VAR_2);
 if (VAR_6 != ((void*)0))
  *VAR_6 = (VAR_10->buf[0] << 24) | (VAR_10->buf[1] << 16) |
   (VAR_10->buf[2] << 8) | VAR_10->buf[3];
 if (VAR_7 != ((void*)0))
  *VAR_7 = (VAR_10->buf[4] << 24) | (VAR_10->buf[5] << 16) |
   (VAR_10->buf[6] << 8) | VAR_10->buf[7];
 if (VAR_8 != ((void*)0))
  *VAR_8 = (VAR_10->buf[8] << 24) | (VAR_10->buf[9] << 16) |
   (VAR_10->buf[10] << 8) | VAR_10->buf[11];
 if (VAR_9 != ((void*)0))
  *VAR_9 = (VAR_10->buf[12] << 24) | (VAR_10->buf[13] << 16) |
   (VAR_10->buf[14] << 8) | VAR_10->buf[15];
 FUNC_2(&VAR_5->usb_mutex);
 return VAR_11;
}
