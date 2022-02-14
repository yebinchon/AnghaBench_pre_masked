
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct xfs_scrub {int tp; int mp; TYPE_1__* sm; } ;
struct TYPE_4__ {int tr_itruncate; } ;
struct TYPE_3__ {int sm_flags; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;

int
FUNC_3(
 struct xfs_scrub *VAR_1,
 uint VAR_2)
{
 if (VAR_1->sm->sm_flags & VAR_0)
  return FUNC_1(VAR_1->mp, &FUNC_0(VAR_1->mp)->tr_itruncate,
    VAR_2, 0, 0, &VAR_1->tp);

 return FUNC_2(VAR_1->mp, &VAR_1->tp);
}
