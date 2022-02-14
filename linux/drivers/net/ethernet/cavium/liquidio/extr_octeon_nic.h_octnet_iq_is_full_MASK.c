
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct octeon_device {TYPE_1__** instr_queue; } ;
struct TYPE_2__ {int max_count; int instr_pending; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct octeon_device *VAR_0, u32 VAR_1)
{
 return ((u32)FUNC_0(&VAR_0->instr_queue[VAR_1]->instr_pending)
  >= (VAR_0->instr_queue[VAR_1]->max_count - 2));
}
