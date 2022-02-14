
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_11__ {scalar_t__ di_format; } ;
struct TYPE_12__ {TYPE_2__ i_d; TYPE_7__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef int xfs_ino_t ;
struct xfs_name {int len; int name; int type; } ;
struct xfs_da_args {int valuelen; int value; int inumber; int op_flags; int * trans; int whichfork; TYPE_3__* dp; int hashval; int filetype; int namelen; int name; int geo; } ;
struct TYPE_14__ {int i_mode; } ;
struct TYPE_13__ {TYPE_1__* m_dirnameops; int m_dir_geo; } ;
struct TYPE_10__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_8__* FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (struct xfs_da_args*) ;
 struct xfs_da_args* FUNC_5 (int,int ) ;
 int FUNC_6 (struct xfs_name*) ;
 int FUNC_7 (struct xfs_da_args*) ;
 int FUNC_8 (struct xfs_da_args*,int*) ;
 int FUNC_9 (struct xfs_da_args*,int*) ;
 int FUNC_10 (struct xfs_da_args*) ;
 int FUNC_11 (struct xfs_da_args*) ;
 int FUNC_12 (struct xfs_da_args*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int) ;
 int VAR_6 ;

int
FUNC_15(
 xfs_trans_t *VAR_7,
 xfs_inode_t *VAR_8,
 struct xfs_name *VAR_9,
 xfs_ino_t *VAR_10,
 struct xfs_name *VAR_11)
{
 struct xfs_da_args *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_0(FUNC_1(FUNC_2(VAR_8)->i_mode));
 FUNC_3(VAR_8->i_mount, VAR_6);
 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_1);
 VAR_12->geo = VAR_8->i_mount->m_dir_geo;
 VAR_12->name = VAR_9->name;
 VAR_12->namelen = VAR_9->len;
 VAR_12->filetype = VAR_9->type;
 VAR_12->hashval = VAR_8->i_mount->m_dirnameops->hashname(VAR_9);
 VAR_12->dp = VAR_8;
 VAR_12->whichfork = VAR_2;
 VAR_12->trans = VAR_7;
 VAR_12->op_flags = VAR_4;
 if (VAR_11)
  VAR_12->op_flags |= VAR_3;

 VAR_15 = FUNC_13(VAR_8);
 if (VAR_8->i_d.di_format == VAR_5) {
  VAR_13 = FUNC_12(VAR_12);
  goto out_check_rval;
 }

 VAR_13 = FUNC_8(VAR_12, &VAR_14);
 if (VAR_13)
  goto out_free;
 if (VAR_14) {
  VAR_13 = FUNC_7(VAR_12);
  goto out_check_rval;
 }

 VAR_13 = FUNC_9(VAR_12, &VAR_14);
 if (VAR_13)
  goto out_free;
 if (VAR_14)
  VAR_13 = FUNC_10(VAR_12);
 else
  VAR_13 = FUNC_11(VAR_12);

out_check_rval:
 if (VAR_13 == -VAR_0)
  VAR_13 = 0;
 if (!VAR_13) {
  *VAR_10 = VAR_12->inumber;
  if (VAR_11) {
   VAR_11->name = VAR_12->value;
   VAR_11->len = VAR_12->valuelen;
  }
 }
out_free:
 FUNC_14(VAR_8, VAR_15);
 FUNC_4(VAR_12);
 return VAR_13;
}
