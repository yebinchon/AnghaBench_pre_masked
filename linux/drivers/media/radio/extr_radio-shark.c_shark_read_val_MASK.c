
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_tea575x {struct shark_device* private_data; } ;
struct TYPE_2__ {int stereo; } ;
struct shark_device {int* transfer_buffer; int last_val; TYPE_1__ tea; int v4l2_dev; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int ,int ,int*,int ,int*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static u32 FUNC_5(struct snd_tea575x *VAR_6)
{
 struct shark_device *VAR_7 = VAR_6->private_data;
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = 0;

 FUNC_0(VAR_7->transfer_buffer, 0, VAR_2);
 VAR_7->transfer_buffer[0] = 0x80;
 VAR_9 = FUNC_1(VAR_7->usbdev,
    FUNC_3(VAR_7->usbdev, VAR_1),
    VAR_7->transfer_buffer, VAR_2,
    &VAR_10, 1000);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_7->v4l2_dev, "request-status error: %d\n", VAR_9);
  return VAR_7->last_val;
 }

 VAR_9 = FUNC_1(VAR_7->usbdev,
    FUNC_2(VAR_7->usbdev, VAR_0),
    VAR_7->transfer_buffer, VAR_2,
    &VAR_10, 1000);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_7->v4l2_dev, "get-status error: %d\n", VAR_9);
  return VAR_7->last_val;
 }

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  VAR_11 |= VAR_7->transfer_buffer[VAR_8] << (24 - VAR_8 * 8);

 VAR_7->last_val = VAR_11;






 if (((VAR_11 & VAR_4) == VAR_3) &&
     !(VAR_11 & VAR_5))
  VAR_7->tea.stereo = 1;
 else
  VAR_7->tea.stereo = 0;

 return VAR_11;
}
