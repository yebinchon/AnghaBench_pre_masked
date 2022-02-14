
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dev; } ;
struct amradio_device {int* buffer; TYPE_1__ vdev; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ,int ,int*,int,int*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct amradio_device *VAR_4, u8 VAR_5, u8 VAR_6,
  u8 *VAR_7, u8 VAR_8, bool VAR_9)
{
 int VAR_10;
 int VAR_11;

 VAR_4->buffer[0] = 0x00;
 VAR_4->buffer[1] = 0x55;
 VAR_4->buffer[2] = 0xaa;
 VAR_4->buffer[3] = VAR_8;
 VAR_4->buffer[4] = VAR_5;
 VAR_4->buffer[5] = VAR_6;
 VAR_4->buffer[6] = 0x00;
 VAR_4->buffer[7] = VAR_7 || VAR_9 ? 8 : 0;

 VAR_10 = FUNC_3(VAR_4->usbdev, FUNC_5(VAR_4->usbdev, 2),
  VAR_4->buffer, VAR_1, &VAR_11, VAR_3);

 if (VAR_10 < 0 || VAR_11 != VAR_1) {
  if (FUNC_6(&VAR_4->vdev))
   FUNC_0(&VAR_4->vdev.dev,
     "cmd %02x failed\n", VAR_5);
  return VAR_10 ? VAR_10 : -VAR_2;
 }
 if (!VAR_7 && !VAR_9)
  return 0;

 if (VAR_7) {
  FUNC_1(VAR_4->buffer, VAR_7, VAR_8);
  FUNC_2(VAR_4->buffer + VAR_8, 0, 8 - VAR_8);
  VAR_10 = FUNC_3(VAR_4->usbdev, FUNC_5(VAR_4->usbdev, 2),
   VAR_4->buffer, VAR_1, &VAR_11, VAR_3);
 } else {
  FUNC_2(VAR_4->buffer, 0, 8);
  VAR_10 = FUNC_3(VAR_4->usbdev, FUNC_4(VAR_4->usbdev, 0x81),
   VAR_4->buffer, VAR_1, &VAR_11, VAR_3);
 }
 if (VAR_10 == 0 && VAR_11 == VAR_1)
  return 0;
 if (FUNC_6(&VAR_4->vdev) && VAR_5 != VAR_0)
  FUNC_0(&VAR_4->vdev.dev, "follow-up to cmd %02x failed\n", VAR_5);
 return VAR_10 ? VAR_10 : -VAR_2;
}
