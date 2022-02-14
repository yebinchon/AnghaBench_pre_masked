
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int mr_lock; } ;
struct TYPE_6__ {int di_size; int di_gid; int di_uid; } ;
struct inode {int i_mapping; TYPE_3__* i_sb; int i_rwsem; int i_mode; int i_gid; int i_uid; int i_state; int i_ino; } ;
struct xfs_inode {TYPE_5__ i_lock; TYPE_4__* i_mount; int d_ops; TYPE_1__ i_d; int i_ino; struct inode i_vnode; } ;
typedef int gfp_t ;
struct TYPE_9__ {int m_nondir_inode_ops; int m_dir_inode_ops; } ;
struct TYPE_8__ {TYPE_2__* s_type; } ;
struct TYPE_7__ {int i_mutex_dir_key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct inode*,struct xfs_inode*) ;
 int VAR_2 ;
 int FUNC_11 (int ) ;
 int VAR_3 ;
 int FUNC_12 (int ) ;

void
FUNC_13(
 struct xfs_inode *VAR_4)
{
 struct inode *VAR_5 = &VAR_4->i_vnode;
 gfp_t VAR_6;

 VAR_5->i_ino = VAR_4->i_ino;
 VAR_5->i_state = VAR_0;

 FUNC_6(VAR_5);

 FUNC_4(VAR_5);

 VAR_5->i_uid = FUNC_12(VAR_4->i_d.di_uid);
 VAR_5->i_gid = FUNC_11(VAR_4->i_d.di_gid);

 FUNC_3(VAR_5, VAR_4->i_d.di_size);
 FUNC_10(VAR_5, VAR_4);

 if (FUNC_0(VAR_5->i_mode)) {






  FUNC_7(&VAR_5->i_rwsem,
      &VAR_5->i_sb->s_type->i_mutex_dir_key);
  FUNC_7(&VAR_4->i_lock.mr_lock, &VAR_2);
  VAR_4->d_ops = VAR_4->i_mount->m_dir_inode_ops;
 } else {
  VAR_4->d_ops = VAR_4->i_mount->m_nondir_inode_ops;
  FUNC_7(&VAR_4->i_lock.mr_lock, &VAR_3);
 }






 VAR_6 = FUNC_8(VAR_5->i_mapping);
 FUNC_9(VAR_5->i_mapping, (VAR_6 & ~(VAR_1)));





 if (!FUNC_1(VAR_4)) {
  FUNC_5(VAR_5);
  FUNC_2(VAR_5);
 }
}
