
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_tx_desc {int dummy; } ;
struct i40e_ring {int count; scalar_t__ desc; } ;
typedef int __le32 ;


 int FUNC_0 (int volatile) ;

__attribute__((used)) static inline u32 FUNC_1(struct i40e_ring *VAR_0)
{
 void *VAR_1 = (struct i40e_tx_desc *)VAR_0->desc + VAR_0->count;

 return FUNC_0(*(volatile __le32 *)VAR_1);
}
