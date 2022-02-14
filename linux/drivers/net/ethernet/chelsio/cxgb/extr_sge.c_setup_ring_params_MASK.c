
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct adapter {scalar_t__ regs; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct adapter *VAR_0, u64 VAR_1,
         u32 VAR_2, int VAR_3,
         int VAR_4, int VAR_5)
{
 FUNC_0((u32)VAR_1, VAR_0->regs + VAR_3);
 FUNC_0(VAR_1 >> 32, VAR_0->regs + VAR_4);
 FUNC_0(VAR_2, VAR_0->regs + VAR_5);
}
