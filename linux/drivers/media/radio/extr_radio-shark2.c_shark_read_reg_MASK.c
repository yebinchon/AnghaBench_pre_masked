
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct shark_device {int* transfer_buffer; int usbdev; } ;
struct radio_tea5777 {int v4l2_dev; struct shark_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int ,int ,int*,int ,int*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int ,int ,char*,int,int*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct radio_tea5777 *VAR_4, u32 *VAR_5)
{
 struct shark_device *VAR_6 = VAR_4->private_data;
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = 0;

 FUNC_0(VAR_6->transfer_buffer, 0, VAR_2);
 VAR_6->transfer_buffer[0] = 0x82;
 VAR_8 = FUNC_1(VAR_6->usbdev,
    FUNC_3(VAR_6->usbdev, VAR_1),
    VAR_6->transfer_buffer, VAR_2,
    &VAR_9, 1000);
 if (VAR_8 < 0) {
  FUNC_5(VAR_4->v4l2_dev, "request-read error: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_6->usbdev,
    FUNC_2(VAR_6->usbdev, VAR_0),
    VAR_6->transfer_buffer, VAR_2,
    &VAR_9, 1000);
 if (VAR_8 < 0) {
  FUNC_5(VAR_4->v4l2_dev, "read error: %d\n", VAR_8);
  return VAR_8;
 }

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
  VAR_10 |= VAR_6->transfer_buffer[VAR_7] << (16 - VAR_7 * 8);

 FUNC_4(1, VAR_3, VAR_4->v4l2_dev, "shark2-read: %*ph\n",
   3, VAR_6->transfer_buffer);

 *VAR_5 = VAR_10;
 return 0;
}
