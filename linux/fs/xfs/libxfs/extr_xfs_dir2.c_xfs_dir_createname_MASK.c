
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xfs_ino_t ;
typedef int xfs_extlen_t ;
struct xfs_trans {int t_mountp; } ;
struct xfs_name {int type; int len; int name; } ;
struct TYPE_6__ {scalar_t__ di_format; } ;
struct xfs_inode {TYPE_2__ i_d; TYPE_3__* i_mount; } ;
struct xfs_da_args {int op_flags; struct xfs_trans* trans; int whichfork; int total; struct xfs_inode* dp; scalar_t__ inumber; int hashval; int filetype; int namelen; int name; int geo; } ;
struct TYPE_8__ {int i_mode; } ;
struct TYPE_7__ {TYPE_1__* m_dirnameops; int m_dir_geo; } ;
struct TYPE_5__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct xfs_inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_13 (int ,scalar_t__) ;
 int VAR_7 ;

int
FUNC_14(
 struct xfs_trans *VAR_8,
 struct xfs_inode *VAR_9,
 struct xfs_name *VAR_10,
 xfs_ino_t VAR_11,
 xfs_extlen_t VAR_12)
{
 struct xfs_da_args *VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_0(FUNC_1(FUNC_2(VAR_9)->i_mode));

 if (VAR_11) {
  VAR_14 = FUNC_13(VAR_8->t_mountp, VAR_11);
  if (VAR_14)
   return VAR_14;
  FUNC_3(VAR_9->i_mount, VAR_7);
 }

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->geo = VAR_9->i_mount->m_dir_geo;
 VAR_13->name = VAR_10->name;
 VAR_13->namelen = VAR_10->len;
 VAR_13->filetype = VAR_10->type;
 VAR_13->hashval = VAR_9->i_mount->m_dirnameops->hashname(VAR_10);
 VAR_13->inumber = VAR_11;
 VAR_13->dp = VAR_9;
 VAR_13->total = VAR_12;
 VAR_13->whichfork = VAR_2;
 VAR_13->trans = VAR_8;
 VAR_13->op_flags = VAR_3 | VAR_5;
 if (!VAR_11)
  VAR_13->op_flags |= VAR_4;

 if (VAR_9->i_d.di_format == VAR_6) {
  VAR_14 = FUNC_12(VAR_13);
  goto out_free;
 }

 VAR_14 = FUNC_8(VAR_13, &VAR_15);
 if (VAR_14)
  goto out_free;
 if (VAR_15) {
  VAR_14 = FUNC_7(VAR_13);
  goto out_free;
 }

 VAR_14 = FUNC_9(VAR_13, &VAR_15);
 if (VAR_14)
  goto out_free;
 if (VAR_15)
  VAR_14 = FUNC_10(VAR_13);
 else
  VAR_14 = FUNC_11(VAR_13);

out_free:
 FUNC_4(VAR_13);
 return VAR_14;
}
