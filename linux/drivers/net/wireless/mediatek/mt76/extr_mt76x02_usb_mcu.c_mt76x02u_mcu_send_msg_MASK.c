
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct mt76_usb {TYPE_1__ mcu; } ;
struct mt76_dev {struct mt76_usb usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76_dev*,struct sk_buff*,int,int) ;
 struct sk_buff* FUNC_1 (void const*,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct mt76_dev *VAR_2, int VAR_3, const void *VAR_4,
        int VAR_5, bool VAR_6)
{
 struct mt76_usb *VAR_7 = &VAR_2->usb;
 struct sk_buff *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_4, VAR_1, VAR_5, 8);
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(&VAR_7->mcu.mutex);
 VAR_9 = FUNC_0(VAR_2, VAR_8, VAR_3, VAR_6);
 FUNC_3(&VAR_7->mcu.mutex);

 return VAR_9;
}
