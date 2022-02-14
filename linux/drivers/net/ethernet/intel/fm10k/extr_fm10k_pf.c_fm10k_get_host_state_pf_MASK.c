
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm10k_hw*,int*) ;
 int FUNC_1 (struct fm10k_hw*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct fm10k_hw *VAR_2, bool *VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (!(VAR_4 & VAR_1))
  return 0;


 return FUNC_0(VAR_2, VAR_3);
}
