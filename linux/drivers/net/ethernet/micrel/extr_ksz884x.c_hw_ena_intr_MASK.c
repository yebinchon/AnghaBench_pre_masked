
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int intr_mask; scalar_t__ intr_blocked; } ;


 int FUNC_0 (struct ksz_hw*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ksz_hw *VAR_0)
{
 VAR_0->intr_blocked = 0;
 FUNC_0(VAR_0, VAR_0->intr_mask);
}
