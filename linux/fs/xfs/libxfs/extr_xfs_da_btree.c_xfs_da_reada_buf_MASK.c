
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_daddr_t ;
typedef int xfs_dablk_t ;
struct xfs_inode {TYPE_1__* i_mount; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf_map {int bm_bn; } ;
struct TYPE_2__ {int m_ddev_targp; } ;


 int FUNC_0 (struct xfs_buf_map*) ;
 int FUNC_1 (int ,struct xfs_buf_map*,int,struct xfs_buf_ops const*) ;
 int FUNC_2 (struct xfs_inode*,int ,int ,int,struct xfs_buf_map**,int*) ;

int
FUNC_3(
 struct xfs_inode *VAR_0,
 xfs_dablk_t VAR_1,
 xfs_daddr_t VAR_2,
 int VAR_3,
 const struct xfs_buf_ops *VAR_4)
{
 struct xfs_buf_map VAR_5;
 struct xfs_buf_map *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = &VAR_5;
 VAR_7 = 1;
 VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
    &VAR_6, &VAR_7);
 if (VAR_8) {

  if (VAR_8 == -1)
   VAR_8 = 0;
  goto out_free;
 }

 VAR_2 = VAR_6[0].bm_bn;
 FUNC_1(VAR_0->i_mount->m_ddev_targp, VAR_6, VAR_7, VAR_4);

out_free:
 if (VAR_6 != &VAR_5)
  FUNC_0(VAR_6);

 return VAR_8;
}
