
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RxDesc {int PSize; int status; int size; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct RxDesc *VAR_1)
{
 VAR_1->PSize = 0x0;
 VAR_1->addr = FUNC_0(0xdeadbeef);
 VAR_1->size &= FUNC_0(VAR_0);
 FUNC_1();
 VAR_1->status = 0x0;
}
