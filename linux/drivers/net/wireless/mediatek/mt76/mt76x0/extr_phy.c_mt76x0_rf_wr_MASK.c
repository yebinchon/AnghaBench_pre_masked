
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int state; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct mt76_reg_pair {int value; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (struct mt76x02_dev*,int ,struct mt76_reg_pair*,int) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct mt76x02_dev *VAR_2, u32 VAR_3, u8 VAR_4)
{
 if (FUNC_1(VAR_2)) {
  struct mt76_reg_pair VAR_5 = {
   .reg = VAR_3,
   .value = VAR_4,
  };

  FUNC_0(!FUNC_4(VAR_0,
           &VAR_2->mt76.state));
  return FUNC_2(VAR_2, VAR_1, &VAR_5, 1);
 } else {
  return FUNC_3(VAR_2, VAR_3, VAR_4);
 }
}
