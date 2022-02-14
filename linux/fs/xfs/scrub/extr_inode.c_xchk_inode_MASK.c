
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xfs_scrub {TYPE_2__* ip; TYPE_1__* sm; } ;
struct xfs_dinode {int dummy; } ;
struct TYPE_7__ {int i_mode; } ;
struct TYPE_6__ {int i_ino; } ;
struct TYPE_5__ {int sm_flags; int sm_ino; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (struct xfs_scrub*,struct xfs_dinode*,int ) ;
 int FUNC_3 (struct xfs_scrub*,int ) ;
 int FUNC_4 (struct xfs_scrub*,int ) ;
 int FUNC_5 (struct xfs_scrub*,int ,struct xfs_dinode*) ;
 int FUNC_6 (TYPE_2__*,struct xfs_dinode*,int ) ;

int
FUNC_7(
 struct xfs_scrub *VAR_1)
{
 struct xfs_dinode VAR_2;
 int VAR_3 = 0;






 if (!VAR_1->ip) {
  FUNC_3(VAR_1, VAR_1->sm->sm_ino);
  return 0;
 }


 FUNC_6(VAR_1->ip, &VAR_2, 0);
 FUNC_2(VAR_1, &VAR_2, VAR_1->ip->i_ino);
 if (VAR_1->sm->sm_flags & VAR_0)
  goto out;






 if (FUNC_0(FUNC_1(VAR_1->ip)->i_mode))
  FUNC_4(VAR_1, VAR_1->ip->i_ino);

 FUNC_5(VAR_1, VAR_1->ip->i_ino, &VAR_2);
out:
 return VAR_3;
}
