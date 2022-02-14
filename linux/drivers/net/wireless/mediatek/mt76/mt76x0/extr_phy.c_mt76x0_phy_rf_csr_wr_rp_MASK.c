
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int dummy; } ;
struct mt76_reg_pair {int value; int reg; } ;


 int FUNC_0 (struct mt76x02_dev*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct mt76x02_dev *VAR_0,
   const struct mt76_reg_pair *VAR_1,
   int VAR_2)
{
 while (VAR_2-- > 0) {
  FUNC_0(VAR_0, VAR_1->reg, VAR_1->value);
  VAR_1++;
 }
}
