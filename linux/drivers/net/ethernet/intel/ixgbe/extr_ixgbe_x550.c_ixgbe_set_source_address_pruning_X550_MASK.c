
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_hw *VAR_2,
        bool VAR_3,
        unsigned int VAR_4)
{
 u64 VAR_5;


 if (VAR_4 > 63)
  return;

 VAR_5 = (u64)FUNC_0(VAR_2, VAR_1);
 VAR_5 |= (u64)FUNC_0(VAR_2, VAR_0) << 32;

 if (VAR_3)
  VAR_5 |= (1ULL << VAR_4);
 else
  VAR_5 &= ~(1ULL << VAR_4);

 FUNC_1(VAR_2, VAR_1, (u32)VAR_5);
 FUNC_1(VAR_2, VAR_0, (u32)(VAR_5 >> 32));
}
