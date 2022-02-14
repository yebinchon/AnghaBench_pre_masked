
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int device_id; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_hw *VAR_2)
{
 u32 VAR_3;

 switch (VAR_2->device_id) {
 case 128:
 case 130:
 case 129:
 case 134:
 case 131:

  VAR_3 = FUNC_0(VAR_2, VAR_0);
  VAR_3 &= ~VAR_1;
  FUNC_1(VAR_2, VAR_0, VAR_3);
  break;
 case 133:
 case 132:

  VAR_3 = FUNC_0(VAR_2, VAR_0);
  VAR_3 |= VAR_1;
  FUNC_1(VAR_2, VAR_0, VAR_3);
  break;
 default:
  break;
 }
}
