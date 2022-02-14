
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct igb_reg_test {scalar_t__ reg; scalar_t__ array_len; int test_type; scalar_t__ reg_offset; int write; int mask; } ;
struct TYPE_3__ {int type; } ;
struct e1000_hw {scalar_t__ hw_addr; TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;

 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;





 int FUNC_2 (int *,char*,scalar_t__,scalar_t__) ;






 scalar_t__ FUNC_3 (int ) ;
 struct igb_reg_test* VAR_1 ;
 struct igb_reg_test* VAR_2 ;
 struct igb_reg_test* VAR_3 ;
 struct igb_reg_test* VAR_4 ;
 struct igb_reg_test* VAR_5 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct igb_adapter *VAR_6, u64 *VAR_7)
{
 struct e1000_hw *VAR_8 = &VAR_6->hw;
 struct igb_reg_test *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14;

 switch (VAR_6->hw.mac.type) {
 case 129:
 case 128:
  VAR_9 = VAR_5;
  VAR_14 = 0x7FEFF3FF;
  break;
 case 131:
 case 130:
  VAR_9 = VAR_4;
  VAR_14 = 0x7FEFF3FF;
  break;
 case 132:
  VAR_9 = VAR_3;
  VAR_14 = 0x7FEFF3FF;
  break;
 case 133:
  VAR_9 = VAR_2;
  VAR_14 = 0x7FFFF3FF;
  break;
 default:
  VAR_9 = VAR_1;
  VAR_14 = 0x7FFFF3FF;
  break;
 }






 VAR_11 = FUNC_3(VAR_0);
 VAR_10 = (FUNC_3(VAR_0) & VAR_14);
 FUNC_4(VAR_0, VAR_14);
 VAR_12 = FUNC_3(VAR_0) & VAR_14;
 if (VAR_10 != VAR_12) {
  FUNC_2(&VAR_6->pdev->dev,
   "failed STATUS register test got: 0x%08X expected: 0x%08X\n",
   VAR_12, VAR_10);
  *VAR_7 = 1;
  return 1;
 }

 FUNC_4(VAR_0, VAR_11);




 while (VAR_9->reg) {
  for (VAR_13 = 0; VAR_13 < VAR_9->array_len; VAR_13++) {
   switch (VAR_9->test_type) {
   case 139:
    FUNC_0(VAR_9->reg +
      (VAR_13 * VAR_9->reg_offset),
      VAR_9->mask,
      VAR_9->write);
    break;
   case 138:
    FUNC_1(VAR_9->reg +
      (VAR_13 * VAR_9->reg_offset),
      VAR_9->mask,
      VAR_9->write);
    break;
   case 134:
    FUNC_5(VAR_9->write,
        (VAR_6->hw.hw_addr + VAR_9->reg)
     + (VAR_13 * VAR_9->reg_offset));
    break;
   case 137:
    FUNC_0(VAR_9->reg + (VAR_13 * 4),
      VAR_9->mask,
      VAR_9->write);
    break;
   case 135:
    FUNC_0(VAR_9->reg + (VAR_13 * 8),
      VAR_9->mask,
      VAR_9->write);
    break;
   case 136:
    FUNC_0((VAR_9->reg + 4) + (VAR_13 * 8),
      VAR_9->mask,
      VAR_9->write);
    break;
   }
  }
  VAR_9++;
 }

 *VAR_7 = 0;
 return 0;
}
