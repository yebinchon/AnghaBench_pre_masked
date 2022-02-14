
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mt76_txwi {int dummy; } ;
struct mt7601u_dev {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_2(struct mt7601u_dev *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 VAR_3 = sizeof(struct mt76_txwi) + 4;
 if (VAR_2 % 4)
  VAR_3 += 2;

 return FUNC_1(VAR_1, VAR_3);
}
