
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enic {TYPE_1__* cq; } ;
struct TYPE_2__ {unsigned int interrupt_offset; } ;


 size_t FUNC_0 (struct enic*,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct enic *VAR_0,
 unsigned int VAR_1)
{
 return VAR_0->cq[FUNC_0(VAR_0, VAR_1)].interrupt_offset;
}
