
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mt76_wcid {int hw_key_idx; } ;
struct mt7601u_dev {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct mt7601u_dev*,struct sk_buff*,int ) ;
 int FUNC_4 (int) ;

int FUNC_5(struct mt7601u_dev *VAR_2, struct sk_buff *VAR_3,
      struct mt76_wcid *VAR_4, int VAR_5)
{
 u8 VAR_6 = FUNC_4(VAR_5);
 u32 VAR_7;
 int VAR_8;

 VAR_7 = VAR_0;
 if (VAR_4->hw_key_idx == 0xff)
  VAR_7 |= VAR_1;

 VAR_8 = FUNC_2(VAR_3, FUNC_0(VAR_6), VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_2->hw, VAR_3);
  return VAR_8;
 }

 return 0;
}
