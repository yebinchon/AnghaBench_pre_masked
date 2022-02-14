
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct jme_adapter {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct jme_adapter*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct jme_adapter *VAR_0, u32 VAR_1, u32 VAR_2)
{



 FUNC_1(VAR_0, "REG WRITE FLUSH", VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_0->regs + VAR_1);
 FUNC_0(VAR_0->regs + VAR_1);
 FUNC_1(VAR_0, "VAL AFTER WRITE", FUNC_0(VAR_0->regs + VAR_1), VAR_1);
}
