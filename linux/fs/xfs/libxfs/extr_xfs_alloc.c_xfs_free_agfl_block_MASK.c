
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
struct xfs_trans {int t_mountp; } ;
struct xfs_owner_info {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfs_buf* FUNC_0 (int ,struct xfs_trans*,int ,int ) ;
 int FUNC_1 (struct xfs_trans*,struct xfs_buf*,int ,int ,int,struct xfs_owner_info*,int ) ;
 int FUNC_2 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_3(
 struct xfs_trans *VAR_2,
 xfs_agnumber_t VAR_3,
 xfs_agblock_t VAR_4,
 struct xfs_buf *VAR_5,
 struct xfs_owner_info *VAR_6)
{
 int VAR_7;
 struct xfs_buf *VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_3, VAR_4, 1, VAR_6,
       VAR_1);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_0(VAR_2->t_mountp, VAR_2, VAR_3, VAR_4);
 if (!VAR_8)
  return -VAR_0;
 FUNC_2(VAR_2, VAR_8);

 return 0;
}
