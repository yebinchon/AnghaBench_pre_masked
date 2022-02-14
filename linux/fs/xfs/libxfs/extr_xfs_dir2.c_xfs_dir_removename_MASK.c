
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
struct xfs_trans {int dummy; } ;
struct xfs_name {int type; int len; int name; } ;
struct TYPE_6__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_2__ i_d; TYPE_3__* i_mount; } ;
struct xfs_da_args {struct xfs_trans* trans; int whichfork; int total; struct xfs_inode* dp; int inumber; int hashval; int filetype; int namelen; int name; int geo; } ;
struct TYPE_8__ {int i_mode; } ;
struct TYPE_7__ {TYPE_1__* m_dirnameops; int m_dir_geo; } ;
struct TYPE_5__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct xfs_inode*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct xfs_da_args*) ;
 struct xfs_da_args* FUNC_5 (int,int ) ;
 int FUNC_6 (struct xfs_name*) ;
 int FUNC_7 (struct xfs_da_args*) ;
 int FUNC_8 (struct xfs_da_args*,int*) ;
 int FUNC_9 (struct xfs_da_args*,int*) ;
 int FUNC_10 (struct xfs_da_args*) ;
 int FUNC_11 (struct xfs_da_args*) ;
 int FUNC_12 (struct xfs_da_args*) ;
 int VAR_4 ;

int
FUNC_13(
 struct xfs_trans *VAR_5,
 struct xfs_inode *VAR_6,
 struct xfs_name *VAR_7,
 xfs_ino_t VAR_8,
 xfs_extlen_t VAR_9)
{
 struct xfs_da_args *VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_0(FUNC_1(FUNC_2(VAR_6)->i_mode));
 FUNC_3(VAR_6->i_mount, VAR_4);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->geo = VAR_6->i_mount->m_dir_geo;
 VAR_10->name = VAR_7->name;
 VAR_10->namelen = VAR_7->len;
 VAR_10->filetype = VAR_7->type;
 VAR_10->hashval = VAR_6->i_mount->m_dirnameops->hashname(VAR_7);
 VAR_10->inumber = VAR_8;
 VAR_10->dp = VAR_6;
 VAR_10->total = VAR_9;
 VAR_10->whichfork = VAR_2;
 VAR_10->trans = VAR_5;

 if (VAR_6->i_d.di_format == VAR_3) {
  VAR_11 = FUNC_12(VAR_10);
  goto out_free;
 }

 VAR_11 = FUNC_8(VAR_10, &VAR_12);
 if (VAR_11)
  goto out_free;
 if (VAR_12) {
  VAR_11 = FUNC_7(VAR_10);
  goto out_free;
 }

 VAR_11 = FUNC_9(VAR_10, &VAR_12);
 if (VAR_11)
  goto out_free;
 if (VAR_12)
  VAR_11 = FUNC_10(VAR_10);
 else
  VAR_11 = FUNC_11(VAR_10);
out_free:
 FUNC_4(VAR_10);
 return VAR_11;
}
