
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;

__attribute__((used)) static void
FUNC_4(struct ixgbe_hw *VAR_3, ixgbe_link_speed VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3, VAR_0);

 switch (VAR_4) {
 case 129:
  VAR_5 |= (VAR_2 | VAR_1);
  break;
 case 128:
  VAR_5 &= ~VAR_1;
  VAR_5 |= VAR_2;
  break;
 default:
  FUNC_3(VAR_3, "Invalid fixed module speed\n");
  return;
 }

 FUNC_2(VAR_3, VAR_0, VAR_5);
 FUNC_1(VAR_3);
}
