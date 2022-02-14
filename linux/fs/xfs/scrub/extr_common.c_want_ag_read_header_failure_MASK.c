
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_scrub {TYPE_1__* sm; } ;
struct TYPE_2__ {unsigned int sm_type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_0(
 struct xfs_scrub *VAR_3,
 unsigned int VAR_4)
{

 if (VAR_3->sm->sm_type != VAR_0 &&
     VAR_3->sm->sm_type != VAR_1 &&
     VAR_3->sm->sm_type != VAR_2)
  return 1;





 if (VAR_3->sm->sm_type == VAR_4)
  return 1;
 return 0;
}
