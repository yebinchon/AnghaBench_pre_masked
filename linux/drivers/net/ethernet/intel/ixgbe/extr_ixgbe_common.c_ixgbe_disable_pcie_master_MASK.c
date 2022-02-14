
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; int flags; } ;
struct ixgbe_hw {int hw_addr; TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static s32 FUNC_8(struct ixgbe_hw *VAR_10)
{
 u32 VAR_11, VAR_12;
 u16 VAR_13;


 FUNC_1(VAR_10, VAR_0, VAR_1);


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  if (FUNC_0(VAR_10, VAR_0) & VAR_1)
   break;
  FUNC_7(100, 120);
 }
 if (VAR_11 >= VAR_6) {
  FUNC_2(VAR_10, "GIO disable did not set - requesting resets\n");
  goto gio_disable_fail;
 }


 if (!(FUNC_0(VAR_10, VAR_7) & VAR_8) ||
     FUNC_5(VAR_10->hw_addr))
  return 0;


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  FUNC_6(100);
  if (!(FUNC_0(VAR_10, VAR_7) & VAR_8))
   return 0;
 }
 FUNC_2(VAR_10, "GIO Master Disable bit didn't clear - requesting resets\n");
gio_disable_fail:
 VAR_10->mac.flags |= VAR_3;

 if (VAR_10->mac.type >= VAR_9)
  return 0;





 VAR_12 = FUNC_3(VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  FUNC_6(100);
  VAR_13 = FUNC_4(VAR_10, VAR_4);
  if (FUNC_5(VAR_10->hw_addr))
   return 0;
  if (!(VAR_13 & VAR_5))
   return 0;
 }

 FUNC_2(VAR_10, "PCIe transaction pending bit also did not clear.\n");
 return VAR_2;
}
