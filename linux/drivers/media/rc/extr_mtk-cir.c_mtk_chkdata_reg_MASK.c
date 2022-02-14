
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_ir {TYPE_1__* data; } ;
struct TYPE_2__ {int* regs; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct mtk_ir *VAR_1, u32 VAR_2)
{
 return VAR_1->data->regs[VAR_0] + 4 * VAR_2;
}
