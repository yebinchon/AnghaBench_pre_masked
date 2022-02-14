
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct xfs_scrub {int ilock_flags; int ip; TYPE_2__* mp; int flags; } ;
struct xfs_inode {int dummy; } ;
struct TYPE_7__ {TYPE_1__* m_quotainfo; } ;
struct TYPE_6__ {int qi_quotaofflock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct xfs_scrub*) ;
 int FUNC_4 (struct xfs_scrub*,struct xfs_inode*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;

int
FUNC_8(
 struct xfs_scrub *VAR_4,
 struct xfs_inode *VAR_5)
{
 uint VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_4->mp) || !FUNC_0(VAR_4->mp))
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 == 0)
  return -VAR_0;
 VAR_4->flags |= VAR_2;
 FUNC_2(&VAR_4->mp->m_quotainfo->qi_quotaofflock);
 if (!FUNC_7(VAR_4->mp, VAR_6))
  return -VAR_1;
 VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_4->ip = FUNC_6(VAR_4->mp, VAR_6);
 FUNC_5(VAR_4->ip, VAR_3);
 VAR_4->ilock_flags = VAR_3;
 return 0;
}
