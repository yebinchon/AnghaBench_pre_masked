
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmballoon {TYPE_1__* stats; } ;
typedef enum vmballoon_stat_general { ____Placeholder_vmballoon_stat_general } vmballoon_stat_general ;
struct TYPE_2__ {int * general_stat; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct vmballoon *VAR_0,
        enum vmballoon_stat_general VAR_1)
{
 if (FUNC_1())
  FUNC_0(&VAR_0->stats->general_stat[VAR_1]);
}
