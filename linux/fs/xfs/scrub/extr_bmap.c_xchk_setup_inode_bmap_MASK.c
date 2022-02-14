
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_scrub {int ilock_flags; int ip; TYPE_1__* sm; } ;
struct xfs_inode {int dummy; } ;
struct TYPE_5__ {int i_mapping; int i_mode; } ;
struct TYPE_4__ {scalar_t__ sm_type; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct xfs_scrub*,struct xfs_inode*) ;
 int FUNC_5 (struct xfs_scrub*,int ) ;
 int FUNC_6 (int ,int) ;

int
FUNC_7(
 struct xfs_scrub *VAR_4,
 struct xfs_inode *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (VAR_6)
  goto out;

 VAR_4->ilock_flags = VAR_1 | VAR_2;
 FUNC_6(VAR_4->ip, VAR_4->ilock_flags);






 if (FUNC_0(FUNC_1(VAR_4->ip)->i_mode) &&
     VAR_4->sm->sm_type == VAR_3) {
  FUNC_3(FUNC_1(VAR_4->ip));
  VAR_6 = FUNC_2(FUNC_1(VAR_4->ip)->i_mapping);
  if (VAR_6)
   goto out;
 }


 VAR_6 = FUNC_5(VAR_4, 0);
 if (VAR_6)
  goto out;
 VAR_4->ilock_flags |= VAR_0;
 FUNC_6(VAR_4->ip, VAR_0);

out:

 return VAR_6;
}
