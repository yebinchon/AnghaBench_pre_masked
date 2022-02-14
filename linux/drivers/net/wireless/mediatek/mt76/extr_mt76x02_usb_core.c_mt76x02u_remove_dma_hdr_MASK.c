
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mt76x02_txwi {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1, sizeof(struct mt76x02_txwi) + VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 % 4)
  FUNC_1(VAR_1, 2);
}
