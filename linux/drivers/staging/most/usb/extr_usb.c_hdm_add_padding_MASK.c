
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct most_dev {TYPE_1__* usb_device; struct most_channel_config* conf; } ;
struct most_channel_config {int dummy; } ;
struct mbo {unsigned int buffer_length; scalar_t__ virt_address; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (struct most_channel_config*) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct most_dev *VAR_2, int VAR_3, struct mbo *VAR_4)
{
 struct most_channel_config *VAR_5 = &VAR_2->conf[VAR_3];
 unsigned int VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7, VAR_8;

 if (!VAR_6)
  return -VAR_0;
 VAR_8 = VAR_4->buffer_length / VAR_6;

 if (VAR_8 < 1) {
  FUNC_0(&VAR_2->usb_device->dev,
   "Missed minimal transfer unit.\n");
  return -VAR_0;
 }

 for (VAR_7 = VAR_8 - 1; VAR_7 > 0; VAR_7--)
  FUNC_2(VAR_4->virt_address + VAR_7 * VAR_1,
   VAR_4->virt_address + VAR_7 * VAR_6,
   VAR_6);
 VAR_4->buffer_length = VAR_8 * VAR_1;
 return 0;
}
