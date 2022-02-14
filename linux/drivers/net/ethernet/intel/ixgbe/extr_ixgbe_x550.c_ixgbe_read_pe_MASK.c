
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ,int ,int *) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 s32 VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0, VAR_3);
 if (VAR_4)
  FUNC_0(VAR_1, "port expander access failed with %d\n", VAR_4);
 return VAR_4;
}
