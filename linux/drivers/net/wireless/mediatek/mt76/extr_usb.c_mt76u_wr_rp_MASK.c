
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76_reg_pair {int dummy; } ;
struct mt76_dev {TYPE_1__* mcu_ops; int state; } ;
struct TYPE_2__ {int (* mcu_wr_rp ) (struct mt76_dev*,int ,struct mt76_reg_pair const*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mt76_dev*,int ,struct mt76_reg_pair const*,int) ;
 int FUNC_1 (struct mt76_dev*,int ,struct mt76_reg_pair const*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct mt76_dev *VAR_1, u32 VAR_2,
     const struct mt76_reg_pair *VAR_3, int VAR_4)
{
 if (FUNC_2(VAR_0, &VAR_1->state))
  return VAR_1->mcu_ops->mcu_wr_rp(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
