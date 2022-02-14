
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct respQ_e {scalar_t__ GenerationBit; } ;
struct respQ {size_t cidx; scalar_t__ genbit; struct respQ_e* entries; } ;
struct adapter {TYPE_1__* sge; } ;
struct TYPE_2__ {struct respQ respQ; } ;



__attribute__((used)) static inline int FUNC_0(const struct adapter *VAR_0)
{
 const struct respQ *VAR_1 = &VAR_0->sge->respQ;
 const struct respQ_e *VAR_2 = &VAR_1->entries[VAR_1->cidx];

 return VAR_2->GenerationBit == VAR_1->genbit;
}
