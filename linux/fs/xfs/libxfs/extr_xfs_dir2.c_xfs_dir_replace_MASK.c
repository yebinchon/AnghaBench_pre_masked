
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_ino_t ;
typedef int xfs_extlen_t ;
struct xfs_trans {int t_mountp; } ;
struct xfs_name {int type; int len; int name; } ;
struct TYPE_7__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_3__ i_d; TYPE_2__* i_mount; } ;
struct xfs_da_args {struct xfs_trans* trans; int whichfork; int total; struct xfs_inode* dp; int inumber; int hashval; int filetype; int namelen; int name; int geo; } ;
struct TYPE_8__ {int i_mode; } ;
struct TYPE_6__ {TYPE_1__* m_dirnameops; int m_dir_geo; } ;
struct TYPE_5__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct xfs_inode*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct xfs_da_args*) ;
 struct xfs_da_args* FUNC_4 (int,int ) ;
 int FUNC_5 (struct xfs_name*) ;
 int FUNC_6 (struct xfs_da_args*) ;
 int FUNC_7 (struct xfs_da_args*,int*) ;
 int FUNC_8 (struct xfs_da_args*,int*) ;
 int FUNC_9 (struct xfs_da_args*) ;
 int FUNC_10 (struct xfs_da_args*) ;
 int FUNC_11 (struct xfs_da_args*) ;
 int FUNC_12 (int ,int ) ;

int
FUNC_13(
 struct xfs_trans *VAR_4,
 struct xfs_inode *VAR_5,
 struct xfs_name *VAR_6,
 xfs_ino_t VAR_7,
 xfs_extlen_t VAR_8)
{
 struct xfs_da_args *VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_0(FUNC_1(FUNC_2(VAR_5)->i_mode));

 VAR_10 = FUNC_12(VAR_4->t_mountp, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->geo = VAR_5->i_mount->m_dir_geo;
 VAR_9->name = VAR_6->name;
 VAR_9->namelen = VAR_6->len;
 VAR_9->filetype = VAR_6->type;
 VAR_9->hashval = VAR_5->i_mount->m_dirnameops->hashname(VAR_6);
 VAR_9->inumber = VAR_7;
 VAR_9->dp = VAR_5;
 VAR_9->total = VAR_8;
 VAR_9->whichfork = VAR_2;
 VAR_9->trans = VAR_4;

 if (VAR_5->i_d.di_format == VAR_3) {
  VAR_10 = FUNC_11(VAR_9);
  goto out_free;
 }

 VAR_10 = FUNC_7(VAR_9, &VAR_11);
 if (VAR_10)
  goto out_free;
 if (VAR_11) {
  VAR_10 = FUNC_6(VAR_9);
  goto out_free;
 }

 VAR_10 = FUNC_8(VAR_9, &VAR_11);
 if (VAR_10)
  goto out_free;
 if (VAR_11)
  VAR_10 = FUNC_9(VAR_9);
 else
  VAR_10 = FUNC_10(VAR_9);
out_free:
 FUNC_3(VAR_9);
 return VAR_10;
}
