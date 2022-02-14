
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct RxDesc {int PSize; void* status; void* size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct RxDesc *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_4->size) & VAR_3;

 VAR_4->PSize = 0x0;
 VAR_4->size = FUNC_0((VAR_5 & VAR_2) | VAR_6);
 FUNC_2();
 VAR_4->status = FUNC_0(VAR_1 | VAR_0);
}
