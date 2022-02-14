
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_agino_t ;
struct TYPE_3__ {struct xfs_btree_cur* fino_cur; struct xfs_btree_cur* ino_cur; } ;
struct xfs_scrub {TYPE_1__ sa; TYPE_2__* sm; } ;
struct xfs_inobt_rec_incore {scalar_t__ ir_freecount; } ;
struct xfs_btree_cur {int dummy; } ;
struct TYPE_4__ {scalar_t__ sm_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xfs_scrub*,struct xfs_btree_cur*,int ) ;
 int FUNC_1 (struct xfs_scrub*,int*,struct xfs_btree_cur**) ;
 int FUNC_2 (struct xfs_btree_cur*,int ,int ,int*) ;

__attribute__((used)) static inline void
FUNC_3(
 struct xfs_scrub *VAR_1,
 struct xfs_inobt_rec_incore *VAR_2,
 xfs_agino_t VAR_3)
{
 struct xfs_btree_cur **VAR_4;
 bool VAR_5;
 int VAR_6;

 if (VAR_1->sm->sm_type == VAR_0)
  VAR_4 = &VAR_1->sa.ino_cur;
 else
  VAR_4 = &VAR_1->sa.fino_cur;
 if (!(*VAR_4))
  return;
 VAR_6 = FUNC_2(*VAR_4, VAR_3, VAR_3, &VAR_5);
 if (!FUNC_1(VAR_1, &VAR_6, VAR_4))
  return;
 if (((VAR_2->ir_freecount > 0 && !VAR_5) ||
      (VAR_2->ir_freecount == 0 && VAR_5)))
  FUNC_0(VAR_1, *VAR_4, 0);
}
