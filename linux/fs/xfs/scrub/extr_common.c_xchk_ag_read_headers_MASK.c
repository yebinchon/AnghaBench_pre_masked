
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_scrub {int tp; struct xfs_mount* mp; } ;
struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct xfs_scrub*,int ) ;
 int FUNC_1 (struct xfs_mount*,int ,int ,int ,struct xfs_buf**) ;
 int FUNC_2 (struct xfs_mount*,int ,int ,struct xfs_buf**) ;
 int FUNC_3 (struct xfs_mount*,int ,int ,struct xfs_buf**) ;

int
FUNC_4(
 struct xfs_scrub *VAR_3,
 xfs_agnumber_t VAR_4,
 struct xfs_buf **VAR_5,
 struct xfs_buf **VAR_6,
 struct xfs_buf **VAR_7)
{
 struct xfs_mount *VAR_8 = VAR_3->mp;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_8, VAR_3->tp, VAR_4, VAR_5);
 if (VAR_9 && FUNC_0(VAR_3, VAR_2))
  goto out;

 VAR_9 = FUNC_1(VAR_8, VAR_3->tp, VAR_4, 0, VAR_6);
 if (VAR_9 && FUNC_0(VAR_3, VAR_0))
  goto out;

 VAR_9 = FUNC_2(VAR_8, VAR_3->tp, VAR_4, VAR_7);
 if (VAR_9 && FUNC_0(VAR_3, VAR_1))
  goto out;
 VAR_9 = 0;
out:
 return VAR_9;
}
