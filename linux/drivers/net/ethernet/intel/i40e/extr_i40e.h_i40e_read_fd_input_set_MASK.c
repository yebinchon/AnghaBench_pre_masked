
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct i40e_pf {int hw; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline u64 FUNC_2(struct i40e_pf *VAR_0, u16 VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_1(&VAR_0->hw, FUNC_0(VAR_1, 1));
 VAR_2 <<= 32;
 VAR_2 += FUNC_1(&VAR_0->hw, FUNC_0(VAR_1, 0));

 return VAR_2;
}
