
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_mcc_wrb {unsigned long tag0; int tag1; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct be_mcc_wrb *VAR_0, unsigned long VAR_1)
{
 VAR_0->tag0 = VAR_1 & 0xFFFFFFFF;
 VAR_0->tag1 = FUNC_0(VAR_1);
}
