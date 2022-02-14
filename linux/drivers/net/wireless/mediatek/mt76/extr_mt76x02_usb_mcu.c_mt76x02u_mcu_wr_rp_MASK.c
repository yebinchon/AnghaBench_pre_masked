
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int mutex; } ;
struct mt76_usb {TYPE_1__ mcu; } ;
struct mt76_reg_pair {scalar_t__ value; scalar_t__ reg; } ;
struct mt76_dev {struct mt76_usb usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt76_dev*,struct sk_buff*,int const,int) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct mt76_dev *VAR_4, u32 VAR_5,
     const struct mt76_reg_pair *VAR_6, int VAR_7)
{
 const int VAR_8 = 12;
 const int VAR_9 = VAR_3 / 8;
 struct mt76_usb *VAR_10 = &VAR_4->usb;
 struct sk_buff *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (!VAR_7)
  return 0;

 VAR_12 = FUNC_2(VAR_9, VAR_7);

 VAR_11 = FUNC_1(VAR_12 * 8 + VAR_2 + 4, VAR_1);
 if (!VAR_11)
  return -VAR_0;
 FUNC_6(VAR_11, VAR_2);

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  FUNC_5(VAR_11, VAR_5 + VAR_6[VAR_13].reg);
  FUNC_5(VAR_11, VAR_6[VAR_13].value);
 }

 FUNC_3(&VAR_10->mcu.mutex);
 VAR_14 = FUNC_0(VAR_4, VAR_11, VAR_8, VAR_12 == VAR_7);
 FUNC_4(&VAR_10->mcu.mutex);
 if (VAR_14)
  return VAR_14;

 return FUNC_7(VAR_4, VAR_5, VAR_6 + VAR_12, VAR_7 - VAR_12);
}
