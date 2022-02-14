
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct shark_device {int* transfer_buffer; int usbdev; } ;
struct radio_tea5777 {int v4l2_dev; struct shark_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int ,int ,int*,int ,int*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ,int ,char*,int,int*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct radio_tea5777 *VAR_3, u64 VAR_4)
{
 struct shark_device *VAR_5 = VAR_3->private_data;
 int VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_5->transfer_buffer, 0, VAR_1);
 VAR_5->transfer_buffer[0] = 0x81;
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  VAR_5->transfer_buffer[VAR_6 + 1] = (VAR_4 >> (40 - VAR_6 * 8)) & 0xff;

 FUNC_3(1, VAR_2, VAR_3->v4l2_dev, "shark2-write: %*ph\n",
   7, VAR_5->transfer_buffer);

 VAR_7 = FUNC_1(VAR_5->usbdev,
    FUNC_2(VAR_5->usbdev, VAR_0),
    VAR_5->transfer_buffer, VAR_1,
    &VAR_8, 1000);
 if (VAR_7 < 0) {
  FUNC_4(VAR_3->v4l2_dev, "write error: %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
