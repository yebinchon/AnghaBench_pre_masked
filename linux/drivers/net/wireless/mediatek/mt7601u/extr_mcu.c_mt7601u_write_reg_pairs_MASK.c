
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct mt76_reg_pair {scalar_t__ value; scalar_t__ reg; } ;
struct mt7601u_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (struct mt7601u_dev*,struct sk_buff*,int ,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

int FUNC_5(struct mt7601u_dev *VAR_5, u32 VAR_6,
       const struct mt76_reg_pair *VAR_7, int VAR_8)
{
 const int VAR_9 = VAR_3 / 8;
 struct sk_buff *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (!VAR_8)
  return 0;

 VAR_11 = FUNC_1(VAR_9, VAR_8);

 VAR_10 = FUNC_0(VAR_11 * 8 + VAR_4 + 4, VAR_2);
 if (!VAR_10)
  return -VAR_1;
 FUNC_4(VAR_10, VAR_4);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  FUNC_3(VAR_10, VAR_6 + VAR_7[VAR_12].reg);
  FUNC_3(VAR_10, VAR_7[VAR_12].value);
 }

 VAR_13 = FUNC_2(VAR_5, VAR_10, VAR_0, VAR_11 == VAR_8);
 if (VAR_13)
  return VAR_13;

 return FUNC_5(VAR_5, VAR_6, VAR_7 + VAR_11, VAR_8 - VAR_11);
}
