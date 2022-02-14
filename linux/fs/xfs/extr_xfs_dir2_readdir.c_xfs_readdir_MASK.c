
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_5__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_1__ i_d; TYPE_2__* i_mount; } ;
struct xfs_da_args {struct xfs_trans* trans; int geo; struct xfs_inode* dp; int * member_0; } ;
struct dir_context {int dummy; } ;
struct TYPE_7__ {int i_mode; } ;
struct TYPE_6__ {int m_dir_geo; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct xfs_inode*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct xfs_inode*) ;
 int FUNC_6 (struct xfs_da_args*,struct dir_context*) ;
 int FUNC_7 (struct xfs_da_args*,int*) ;
 int FUNC_8 (struct xfs_da_args*,struct dir_context*,size_t) ;
 int FUNC_9 (struct xfs_da_args*,struct dir_context*) ;
 int VAR_2 ;

int
FUNC_10(
 struct xfs_trans *VAR_3,
 struct xfs_inode *VAR_4,
 struct dir_context *VAR_5,
 size_t VAR_6)
{
 struct xfs_da_args VAR_7 = { ((void*)0) };
 int VAR_8;
 int VAR_9;

 FUNC_5(VAR_4);

 if (FUNC_3(VAR_4->i_mount))
  return -VAR_0;

 FUNC_0(FUNC_1(FUNC_2(VAR_4)->i_mode));
 FUNC_4(VAR_4->i_mount, VAR_2);

 VAR_7.dp = VAR_4;
 VAR_7.geo = VAR_4->i_mount->m_dir_geo;
 VAR_7.trans = VAR_3;

 if (VAR_4->i_d.di_format == VAR_1)
  VAR_8 = FUNC_9(&VAR_7, VAR_5);
 else if ((VAR_8 = FUNC_7(&VAR_7, &VAR_9)))
  ;
 else if (VAR_9)
  VAR_8 = FUNC_6(&VAR_7, VAR_5);
 else
  VAR_8 = FUNC_8(&VAR_7, VAR_5, VAR_6);

 return VAR_8;
}
