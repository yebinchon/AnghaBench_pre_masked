
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ixgbevf_reg_test {scalar_t__ reg; scalar_t__ array_len; int test_type; int write; int mask; } ;
struct TYPE_4__ {int hw_addr; } ;
struct ixgbevf_adapter {TYPE_2__ hw; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;






 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (struct ixgbevf_adapter*,int*,scalar_t__,int ,int ) ;
 int FUNC_4 (struct ixgbevf_adapter*,int*,scalar_t__,int ,int ) ;
 struct ixgbevf_reg_test* VAR_0 ;

__attribute__((used)) static int FUNC_5(struct ixgbevf_adapter *VAR_1, u64 *VAR_2)
{
 const struct ixgbevf_reg_test *VAR_3;
 u32 VAR_4;

 if (FUNC_0(VAR_1->hw.hw_addr)) {
  FUNC_1(&VAR_1->pdev->dev,
   "Adapter removed - register test blocked\n");
  *VAR_2 = 1;
  return 1;
 }
 VAR_3 = VAR_0;




 while (VAR_3->reg) {
  for (VAR_4 = 0; VAR_4 < VAR_3->array_len; VAR_4++) {
   bool VAR_5 = 0;

   switch (VAR_3->test_type) {
   case 133:
    VAR_5 = FUNC_3(VAR_1, VAR_2,
           VAR_3->reg + (VAR_4 * 0x40),
           VAR_3->mask,
           VAR_3->write);
    break;
   case 132:
    VAR_5 = FUNC_4(VAR_1, VAR_2,
            VAR_3->reg + (VAR_4 * 0x40),
            VAR_3->mask,
            VAR_3->write);
    break;
   case 128:
    FUNC_2(&VAR_1->hw,
      VAR_3->reg + (VAR_4 * 0x40),
      VAR_3->write);
    break;
   case 131:
    VAR_5 = FUNC_3(VAR_1, VAR_2,
           VAR_3->reg + (VAR_4 * 4),
           VAR_3->mask,
           VAR_3->write);
    break;
   case 129:
    VAR_5 = FUNC_3(VAR_1, VAR_2,
           VAR_3->reg + (VAR_4 * 8),
           VAR_3->mask,
           VAR_3->write);
    break;
   case 130:
    VAR_5 = FUNC_3(VAR_1, VAR_2,
           VAR_3->reg + 4 + (VAR_4 * 8),
           VAR_3->mask,
           VAR_3->write);
    break;
   }
   if (VAR_5)
    return 1;
  }
  VAR_3++;
 }

 *VAR_2 = 0;
 return *VAR_2;
}
