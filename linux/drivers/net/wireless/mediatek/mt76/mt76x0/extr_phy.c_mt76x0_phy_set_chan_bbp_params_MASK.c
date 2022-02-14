
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mt76_reg_pair {scalar_t__ reg; int value; } ;
struct mt76x0_bbp_switch_item {int bw_band; struct mt76_reg_pair reg_pair; } ;
struct TYPE_3__ {int lna_gain; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct mt76x02_dev {TYPE_2__ cal; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x0_bbp_switch_item*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_1 ;
 int FUNC_4 (struct mt76x02_dev*,scalar_t__,int ) ;
 struct mt76x0_bbp_switch_item* VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct mt76x02_dev *VAR_3, u16 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  const struct mt76x0_bbp_switch_item *VAR_6 = &VAR_2[VAR_5];
  const struct mt76_reg_pair *VAR_7 = &VAR_6->reg_pair;

  if ((VAR_4 & VAR_6->bw_band) != VAR_4)
   continue;

  if (VAR_7->reg == FUNC_3(VAR_0, 8)) {
   u32 VAR_8 = VAR_7->value;
   u8 VAR_9;

   VAR_9 = FUNC_1(VAR_1, VAR_8);
   VAR_9 -= VAR_3->cal.rx.lna_gain * 2;
   VAR_8 &= ~VAR_1;
   VAR_8 |= FUNC_2(VAR_1, VAR_9);
   FUNC_4(VAR_3, VAR_7->reg, VAR_8);
  } else {
   FUNC_4(VAR_3, VAR_7->reg, VAR_7->value);
  }
 }
}
