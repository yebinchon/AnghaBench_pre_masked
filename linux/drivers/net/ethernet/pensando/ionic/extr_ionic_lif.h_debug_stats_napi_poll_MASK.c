
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * work_done_cntr; int poll_count; } ;
struct ionic_qcq {TYPE_1__ napi_stats; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ionic_qcq *VAR_1,
      unsigned int VAR_2)
{
 VAR_1->napi_stats.poll_count++;

 if (VAR_2 > (VAR_0 - 1))
  VAR_2 = VAR_0 - 1;

 VAR_1->napi_stats.work_done_cntr[VAR_2]++;
}
