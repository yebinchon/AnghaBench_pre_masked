
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmballoon {TYPE_1__* stats; } ;
typedef enum vmballoon_op_stat_type { ____Placeholder_vmballoon_op_stat_type } vmballoon_op_stat_type ;
struct TYPE_2__ {int ** ops; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct vmballoon *VAR_0, unsigned int VAR_1,
       enum vmballoon_op_stat_type VAR_2)
{
 if (FUNC_1())
  FUNC_0(&VAR_0->stats->ops[VAR_1][VAR_2]);
}
