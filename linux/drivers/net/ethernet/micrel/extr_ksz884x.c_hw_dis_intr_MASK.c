
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {scalar_t__ io; int intr_set; int intr_mask; int intr_blocked; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct ksz_hw *VAR_1)
{
 VAR_1->intr_blocked = VAR_1->intr_mask;
 FUNC_1(0, VAR_1->io + VAR_0);
 VAR_1->intr_set = FUNC_0(VAR_1->io + VAR_0);
}
