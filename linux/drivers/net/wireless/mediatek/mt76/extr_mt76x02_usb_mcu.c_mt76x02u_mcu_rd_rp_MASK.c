
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rp_len; int burst; int mutex; struct mt76_reg_pair* rp; scalar_t__ base; } ;
struct mt76_usb {TYPE_1__ mcu; } ;
struct mt76_reg_pair {scalar_t__ value; scalar_t__ reg; } ;
struct mt76_dev {struct mt76_usb usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mt76_dev*,struct sk_buff*,int const,int) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct mt76_dev *VAR_5, u32 VAR_6,
     struct mt76_reg_pair *VAR_7, int VAR_8)
{
 const int VAR_9 = 10;
 const int VAR_10 = VAR_4 / 8;
 struct mt76_usb *VAR_11 = &VAR_5->usb;
 struct sk_buff *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 if (!VAR_8)
  return 0;

 VAR_13 = FUNC_2(VAR_10, VAR_8);
 if (VAR_13 != VAR_8)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_13 * 8 + VAR_3 + 4, VAR_2);
 if (!VAR_12)
  return -VAR_1;
 FUNC_6(VAR_12, VAR_3);

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  FUNC_5(VAR_12, VAR_6 + VAR_7[VAR_14].reg);
  FUNC_5(VAR_12, VAR_7[VAR_14].value);
 }

 FUNC_3(&VAR_11->mcu.mutex);

 VAR_11->mcu.rp = VAR_7;
 VAR_11->mcu.rp_len = VAR_8;
 VAR_11->mcu.base = VAR_6;
 VAR_11->mcu.burst = 0;

 VAR_15 = FUNC_0(VAR_5, VAR_12, VAR_9, 1);

 VAR_11->mcu.rp = ((void*)0);

 FUNC_4(&VAR_11->mcu.mutex);

 return VAR_15;
}
