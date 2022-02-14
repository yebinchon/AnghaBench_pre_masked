
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_instr_queue {TYPE_1__* request_list; } ;
struct TYPE_2__ {int reqtype; void* buf; } ;



__attribute__((used)) static inline void
FUNC_0(struct octeon_instr_queue *VAR_0,
        int VAR_1, void *VAR_2, int VAR_3)
{
 VAR_0->request_list[VAR_1].buf = VAR_2;
 VAR_0->request_list[VAR_1].reqtype = VAR_3;
}
