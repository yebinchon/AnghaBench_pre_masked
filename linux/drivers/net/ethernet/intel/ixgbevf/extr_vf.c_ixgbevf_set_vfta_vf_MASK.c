
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int*,int*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_5, u32 VAR_6, u32 VAR_7,
          bool VAR_8)
{
 u32 VAR_9[2];
 s32 VAR_10;

 VAR_9[0] = VAR_1;
 VAR_9[1] = VAR_6;

 VAR_9[0] |= VAR_8 << VAR_2;

 VAR_10 = FUNC_1(VAR_5, VAR_9, VAR_9,
      FUNC_0(VAR_9));
 if (VAR_10)
  goto mbx_err;


 VAR_9[0] &= ~VAR_4;
 VAR_9[0] &= ~(0xFF << VAR_2);

 if (VAR_9[0] != (VAR_1 | VAR_3))
  VAR_10 = VAR_0;

mbx_err:
 return VAR_10;
}
