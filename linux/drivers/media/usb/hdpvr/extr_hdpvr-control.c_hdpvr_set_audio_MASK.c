
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdpvr_device {int flags; int* usbc_buf; int usbc_mutex; int udev; int v4l2_dev; } ;
typedef enum v4l2_mpeg_audio_encoding { ____Placeholder_v4l2_mpeg_audio_encoding } v4l2_mpeg_audio_encoding ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdpvr_device*,int ,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int,int,int ,int ,int*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,char*,int) ;

int FUNC_7(struct hdpvr_device *VAR_6, u8 VAR_7,
      enum v4l2_mpeg_audio_encoding VAR_8)
{
 int VAR_9 = 0;

 if (VAR_6->flags & VAR_3) {
  FUNC_2(&VAR_6->usbc_mutex);
  FUNC_1(VAR_6->usbc_buf, 0, 2);
  VAR_6->usbc_buf[0] = VAR_7;
  if (VAR_8 == VAR_4)
   VAR_6->usbc_buf[1] = 0;
  else if (VAR_8 == VAR_5)
   VAR_6->usbc_buf[1] = 1;
  else {
   FUNC_3(&VAR_6->usbc_mutex);
   FUNC_6(&VAR_6->v4l2_dev, "invalid audio codec %d\n",
     VAR_8);
   VAR_9 = -VAR_2;
   goto error;
  }

  VAR_9 = FUNC_4(VAR_6->udev,
          FUNC_5(VAR_6->udev, 0),
          0x01, 0x38, VAR_0,
          VAR_1, VAR_6->usbc_buf, 2,
          1000);
  FUNC_3(&VAR_6->usbc_mutex);
  if (VAR_9 == 2)
   VAR_9 = 0;
 } else
  VAR_9 = FUNC_0(VAR_6, VAR_0, VAR_7);
error:
 return VAR_9;
}
