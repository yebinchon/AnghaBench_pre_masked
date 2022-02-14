
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ksz_hw {int intr_mask; int intr_blocked; } ;


 int FUNC_0 (struct ksz_hw*,int ) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_0, u32 VAR_1)
{
 VAR_0->intr_mask |= VAR_1;

 if (!VAR_0->intr_blocked)
  FUNC_0(VAR_0, VAR_0->intr_mask);
}
