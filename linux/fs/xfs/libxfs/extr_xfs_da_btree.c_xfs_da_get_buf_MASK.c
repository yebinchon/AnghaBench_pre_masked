
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_daddr_t ;
typedef int xfs_dablk_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {TYPE_1__* i_mount; } ;
struct xfs_buf_map {int dummy; } ;
struct xfs_buf {int b_error; } ;
struct TYPE_2__ {int m_ddev_targp; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_buf_map*) ;
 int FUNC_1 (struct xfs_inode*,int ,int ,int,struct xfs_buf_map**,int*) ;
 int FUNC_2 (struct xfs_trans*,struct xfs_buf*) ;
 struct xfs_buf* FUNC_3 (struct xfs_trans*,int ,struct xfs_buf_map*,int,int ) ;

int
FUNC_4(
 struct xfs_trans *VAR_1,
 struct xfs_inode *VAR_2,
 xfs_dablk_t VAR_3,
 xfs_daddr_t VAR_4,
 struct xfs_buf **VAR_5,
 int VAR_6)
{
 struct xfs_buf *VAR_7;
 struct xfs_buf_map VAR_8;
 struct xfs_buf_map *VAR_9;
 int VAR_10;
 int VAR_11;

 *VAR_5 = ((void*)0);
 VAR_9 = &VAR_8;
 VAR_10 = 1;
 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6,
    &VAR_9, &VAR_10);
 if (VAR_11) {

  if (VAR_11 == -1)
   VAR_11 = 0;
  goto out_free;
 }

 VAR_7 = FUNC_3(VAR_1, VAR_2->i_mount->m_ddev_targp,
        VAR_9, VAR_10, 0);
 VAR_11 = VAR_7 ? VAR_7->b_error : -VAR_0;
 if (VAR_11) {
  if (VAR_7)
   FUNC_2(VAR_1, VAR_7);
  goto out_free;
 }

 *VAR_5 = VAR_7;

out_free:
 if (VAR_9 != &VAR_8)
  FUNC_0(VAR_9);

 return VAR_11;
}
