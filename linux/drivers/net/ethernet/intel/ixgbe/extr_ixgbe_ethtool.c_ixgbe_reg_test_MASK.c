
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ixgbe_reg_test {scalar_t__ reg; scalar_t__ array_len; int test_type; scalar_t__ write; int mask; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ mac; int hw_addr; } ;
struct ixgbe_adapter {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;






 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct ixgbe_adapter*,int*,scalar_t__,int ,scalar_t__) ;
 int FUNC_5 (struct ixgbe_adapter*,int*,scalar_t__,int ,scalar_t__) ;
 struct ixgbe_reg_test* VAR_2 ;
 struct ixgbe_reg_test* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct ixgbe_adapter *VAR_4, u64 *VAR_5)
{
 const struct ixgbe_reg_test *VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11;

 if (FUNC_2(VAR_4->hw.hw_addr)) {
  FUNC_0(VAR_1, "Adapter removed - register test blocked\n");
  *VAR_5 = 1;
  return 1;
 }
 switch (VAR_4->hw.mac.type) {
 case 133:
  VAR_11 = 0x7FFFF3FF;
  VAR_6 = VAR_2;
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_11 = 0x7FFFF30F;
  VAR_6 = VAR_3;
  break;
 default:
  *VAR_5 = 1;
  return 1;
 }







 VAR_8 = FUNC_1(&VAR_4->hw, VAR_0);
 VAR_7 = (FUNC_1(&VAR_4->hw, VAR_0) & VAR_11);
 FUNC_3(&VAR_4->hw, VAR_0, VAR_11);
 VAR_9 = FUNC_1(&VAR_4->hw, VAR_0) & VAR_11;
 if (VAR_7 != VAR_9) {
  FUNC_0(VAR_1, "failed STATUS register test got: 0x%08X expected: 0x%08X\n",
        VAR_9, VAR_7);
  *VAR_5 = 1;
  return 1;
 }

 FUNC_3(&VAR_4->hw, VAR_0, VAR_8);





 while (VAR_6->reg) {
  for (VAR_10 = 0; VAR_10 < VAR_6->array_len; VAR_10++) {
   bool VAR_12 = 0;

   switch (VAR_6->test_type) {
   case 139:
    VAR_12 = FUNC_4(VAR_4, VAR_5,
           VAR_6->reg + (VAR_10 * 0x40),
           VAR_6->mask,
           VAR_6->write);
    break;
   case 138:
    VAR_12 = FUNC_5(VAR_4, VAR_5,
            VAR_6->reg + (VAR_10 * 0x40),
            VAR_6->mask,
            VAR_6->write);
    break;
   case 134:
    FUNC_3(&VAR_4->hw,
      VAR_6->reg + (VAR_10 * 0x40),
      VAR_6->write);
    break;
   case 137:
    VAR_12 = FUNC_4(VAR_4, VAR_5,
           VAR_6->reg + (VAR_10 * 4),
           VAR_6->mask,
           VAR_6->write);
    break;
   case 135:
    VAR_12 = FUNC_4(VAR_4, VAR_5,
           VAR_6->reg + (VAR_10 * 8),
           VAR_6->mask,
           VAR_6->write);
    break;
   case 136:
    VAR_12 = FUNC_4(VAR_4, VAR_5,
           (VAR_6->reg + 4) + (VAR_10 * 8),
           VAR_6->mask,
           VAR_6->write);
    break;
   }
   if (VAR_12)
    return 1;
  }
  VAR_6++;
 }

 *VAR_5 = 0;
 return 0;
}
