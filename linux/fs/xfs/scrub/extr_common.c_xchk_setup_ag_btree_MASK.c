
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_scrub {int sa; TYPE_1__* sm; struct xfs_mount* mp; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {int dummy; } ;
struct TYPE_2__ {int sm_agno; } ;


 int FUNC_0 (struct xfs_scrub*,int ,int *) ;
 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_scrub*,struct xfs_inode*) ;

int
FUNC_3(
 struct xfs_scrub *VAR_0,
 struct xfs_inode *VAR_1,
 bool VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_0->mp;
 int VAR_4;







 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_0->sm->sm_agno, &VAR_0->sa);
}
