
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_ir {TYPE_1__* data; } ;
struct TYPE_2__ {int * regs; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mtk_ir*,int ) ;
 int FUNC_1 (struct mtk_ir*,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mtk_ir *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_1->data->regs[VAR_0]);
 FUNC_1(VAR_1, VAR_3 & ~VAR_2, VAR_1->data->regs[VAR_0]);
}
