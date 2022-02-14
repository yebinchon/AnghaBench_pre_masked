
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_scrub {TYPE_1__* sm; } ;
struct xfs_btree_cur {int dummy; } ;
struct TYPE_2__ {int sm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_scrub*,int,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct xfs_btree_cur*,int ) ;

bool
FUNC_3(
 struct xfs_scrub *VAR_3,
 int *VAR_4,
 struct xfs_btree_cur **VAR_5)
{

 if (FUNC_1(VAR_3->sm))
  return 0;

 if (*VAR_4 == 0)
  return 1;

 if (VAR_5) {

  if (!*VAR_5)
   return 0;


  FUNC_2(*VAR_5, VAR_0);
  *VAR_5 = ((void*)0);
 }

 VAR_3->sm->sm_flags |= VAR_1;
 FUNC_0(VAR_3, *VAR_4, VAR_2);





 *VAR_4 = 0;
 return 0;
}
