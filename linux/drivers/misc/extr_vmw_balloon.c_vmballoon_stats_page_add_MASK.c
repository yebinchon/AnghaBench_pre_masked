
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmballoon {TYPE_1__* stats; } ;
typedef enum vmballoon_stat_page { ____Placeholder_vmballoon_stat_page } vmballoon_stat_page ;
typedef enum vmballoon_page_size_type { ____Placeholder_vmballoon_page_size_type } vmballoon_page_size_type ;
struct TYPE_2__ {int ** page_stat; } ;


 int FUNC_0 (unsigned int,int *) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct vmballoon *VAR_0,
         enum vmballoon_stat_page VAR_1,
         enum vmballoon_page_size_type VAR_2,
         unsigned int VAR_3)
{
 if (FUNC_1())
  FUNC_0(VAR_3, &VAR_0->stats->page_stat[VAR_1][VAR_2]);
}
