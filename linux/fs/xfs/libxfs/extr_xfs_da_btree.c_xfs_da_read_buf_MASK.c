
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_daddr_t ;
typedef int xfs_dablk_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {TYPE_1__* i_mount; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf_map {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_2__ {int m_ddev_targp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_buf_map*) ;
 int FUNC_1 (struct xfs_buf*,int ) ;
 int FUNC_2 (struct xfs_inode*,int ,int ,int,struct xfs_buf_map**,int*) ;
 int FUNC_3 (TYPE_1__*,struct xfs_trans*,int ,struct xfs_buf_map*,int,int ,struct xfs_buf**,struct xfs_buf_ops const*) ;

int
FUNC_4(
 struct xfs_trans *VAR_3,
 struct xfs_inode *VAR_4,
 xfs_dablk_t VAR_5,
 xfs_daddr_t VAR_6,
 struct xfs_buf **VAR_7,
 int VAR_8,
 const struct xfs_buf_ops *VAR_9)
{
 struct xfs_buf *VAR_10;
 struct xfs_buf_map VAR_11;
 struct xfs_buf_map *VAR_12;
 int VAR_13;
 int VAR_14;

 *VAR_7 = ((void*)0);
 VAR_12 = &VAR_11;
 VAR_13 = 1;
 VAR_14 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_8,
    &VAR_12, &VAR_13);
 if (VAR_14) {

  if (VAR_14 == -1)
   VAR_14 = 0;
  goto out_free;
 }

 VAR_14 = FUNC_3(VAR_4->i_mount, VAR_3,
     VAR_4->i_mount->m_ddev_targp,
     VAR_12, VAR_13, 0, &VAR_10, VAR_9);
 if (VAR_14)
  goto out_free;

 if (VAR_8 == VAR_1)
  FUNC_1(VAR_10, VAR_0);
 else
  FUNC_1(VAR_10, VAR_2);
 *VAR_7 = VAR_10;
out_free:
 if (VAR_12 != &VAR_11)
  FUNC_0(VAR_12);

 return VAR_14;
}
