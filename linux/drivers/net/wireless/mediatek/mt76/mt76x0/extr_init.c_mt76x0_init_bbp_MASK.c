
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_reg_pair {int value; int reg; } ;
struct mt76x0_bbp_switch_item {int bw_band; struct mt76_reg_pair reg_pair; } ;
struct mt76x02_dev {int dummy; } ;


 int FUNC_0 (struct mt76x0_bbp_switch_item*) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int VAR_2 ;
 struct mt76x0_bbp_switch_item* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct mt76x02_dev*) ;

__attribute__((used)) static int FUNC_4(struct mt76x02_dev *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_5, VAR_2);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  const struct mt76x0_bbp_switch_item *VAR_8 = &VAR_3[VAR_7];
  const struct mt76_reg_pair *VAR_9 = &VAR_8->reg_pair;

  if (((VAR_1 | VAR_0) & VAR_8->bw_band) == (VAR_1 | VAR_0))
   FUNC_2(VAR_5, VAR_9->reg, VAR_9->value);
 }

 FUNC_1(VAR_5, VAR_4);

 return 0;
}
