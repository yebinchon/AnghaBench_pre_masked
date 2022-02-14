
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int perm_addr; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_1, u32 VAR_2, u8 *VAR_3,
     u32 VAR_4)
{
 if (FUNC_0(VAR_3, VAR_1->mac.perm_addr))
  return 0;

 return -VAR_0;
}
