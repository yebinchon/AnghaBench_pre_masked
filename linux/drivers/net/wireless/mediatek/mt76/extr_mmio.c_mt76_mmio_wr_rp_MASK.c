
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76_reg_pair {int value; int reg; } ;
struct mt76_dev {int dummy; } ;


 int FUNC_0 (struct mt76_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mt76_dev *VAR_0, u32 VAR_1,
      const struct mt76_reg_pair *VAR_2, int VAR_3)
{
 while (VAR_3 > 0) {
  FUNC_0(VAR_0, VAR_2->reg, VAR_2->value);
  VAR_2++;
  VAR_3--;
 }

 return 0;
}
