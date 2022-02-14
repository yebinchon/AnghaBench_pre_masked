
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int t_mountp; } ;
typedef TYPE_2__ xfs_trans_t ;
struct TYPE_11__ {int i_ino; TYPE_1__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
struct xfs_da_args {TYPE_2__* trans; TYPE_3__* dp; int geo; } ;
struct TYPE_12__ {int i_mode; } ;
struct TYPE_9__ {int m_dir_geo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct xfs_da_args*) ;
 struct xfs_da_args* FUNC_4 (int,int ) ;
 int FUNC_5 (struct xfs_da_args*,int ) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(
 xfs_trans_t *VAR_2,
 xfs_inode_t *VAR_3,
 xfs_inode_t *VAR_4)
{
 struct xfs_da_args *VAR_5;
 int VAR_6;

 FUNC_0(FUNC_1(FUNC_2(VAR_3)->i_mode));
 VAR_6 = FUNC_6(VAR_2->t_mountp, VAR_4->i_ino);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->geo = VAR_3->i_mount->m_dir_geo;
 VAR_5->dp = VAR_3;
 VAR_5->trans = VAR_2;
 VAR_6 = FUNC_5(VAR_5, VAR_4->i_ino);
 FUNC_3(VAR_5);
 return VAR_6;
}
