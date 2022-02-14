
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
struct ksz_hw {int intr_set; scalar_t__ io; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct ksz_hw *VAR_1, uint VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->io + VAR_0);
 VAR_1->intr_set = VAR_3 | VAR_2;
 FUNC_1(VAR_1->intr_set, VAR_1->io + VAR_0);
}
