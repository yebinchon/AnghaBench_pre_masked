
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int msg_seq; } ;
struct mt76_usb {TYPE_1__ mcu; } ;
struct mt76_dev {int state; struct mt76_usb usb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct mt76_dev*,int ,int ,int *,int) ;
 int FUNC_3 (struct mt76_dev*,int) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct mt76_dev *VAR_5, struct sk_buff *VAR_6,
   int VAR_7, bool VAR_8)
{
 struct mt76_usb *VAR_9 = &VAR_5->usb;
 int VAR_10;
 u8 VAR_11 = 0;
 u32 VAR_12;

 if (FUNC_5(VAR_1, &VAR_5->state))
  return 0;

 if (VAR_8) {
  VAR_11 = ++VAR_9->mcu.msg_seq & 0xf;
  if (!VAR_11)
   VAR_11 = ++VAR_9->mcu.msg_seq & 0xf;
 }

 VAR_12 = FUNC_0(VAR_2, VAR_11) |
        FUNC_0(VAR_3, VAR_7) |
        VAR_4;
 VAR_10 = FUNC_4(VAR_6, VAR_0, VAR_12);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_6->data, VAR_6->len, ((void*)0), 500);
 if (VAR_10)
  return VAR_10;

 if (VAR_8)
  VAR_10 = FUNC_3(VAR_5, VAR_11);

 FUNC_1(VAR_6);

 return VAR_10;
}
