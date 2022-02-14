
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_scrub {int mp; TYPE_1__* sm; } ;
struct TYPE_2__ {int sm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline void FUNC_1(struct xfs_scrub *VAR_2)
{




 if (VAR_2->sm->sm_flags & (VAR_0 |
    VAR_1))
  FUNC_0(VAR_2->mp,
    "Corruption detected during scrub.");
}
