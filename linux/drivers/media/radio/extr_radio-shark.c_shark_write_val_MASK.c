
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_tea575x {struct shark_device* private_data; } ;
struct shark_device {int last_val; int* transfer_buffer; int v4l2_dev; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int ) ;
 int FUNC_1 (int ,int ,int*,int ,int*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_tea575x *VAR_2, u32 VAR_3)
{
 struct shark_device *VAR_4 = VAR_2->private_data;
 int VAR_5, VAR_6, VAR_7;


 if (VAR_4->last_val == VAR_3)
  return;

 FUNC_0(VAR_4->transfer_buffer, 0, VAR_1);
 VAR_4->transfer_buffer[0] = 0xc0;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  VAR_4->transfer_buffer[VAR_5] |= (VAR_3 >> (24 - VAR_5 * 8)) & 0xff;

 VAR_6 = FUNC_1(VAR_4->usbdev,
    FUNC_2(VAR_4->usbdev, VAR_0),
    VAR_4->transfer_buffer, VAR_1,
    &VAR_7, 1000);
 if (VAR_6 >= 0)
  VAR_4->last_val = VAR_3;
 else
  FUNC_3(&VAR_4->v4l2_dev, "set-freq error: %d\n", VAR_6);
}
