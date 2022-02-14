
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_rspq {int intr_params; } ;
struct TYPE_2__ {unsigned int* timer_val; } ;
struct adapter {TYPE_1__ sge; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(const struct adapter *VAR_1,
          const struct sge_rspq *VAR_2)
{
 unsigned int VAR_3 = VAR_2->intr_params >> 1;

 return VAR_3 < VAR_0 ? VAR_1->sge.timer_val[VAR_3] : 0;
}
