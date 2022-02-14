
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_mount_info {TYPE_1__* cloned; } ;
struct dentry {int dummy; } ;
struct TYPE_10__ {int caps; TYPE_3__* nfs_client; } ;
struct TYPE_9__ {scalar_t__ i_op; } ;
struct TYPE_8__ {TYPE_2__* rpc_ops; } ;
struct TYPE_7__ {scalar_t__ dir_inode_ops; } ;
struct TYPE_6__ {int sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct super_block*) ;
 unsigned long VAR_2 ;
 TYPE_4__* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,struct super_block*,unsigned long,unsigned long*) ;

int FUNC_3(struct super_block *VAR_3, struct dentry *VAR_4,
     struct nfs_mount_info *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7 = 0, VAR_8 = 0;


 if (FUNC_1(VAR_4)->i_op != FUNC_0(VAR_3)->nfs_client->rpc_ops->dir_inode_ops)
  return -VAR_0;

 if (FUNC_0(VAR_3)->caps & VAR_1)
  VAR_7 |= VAR_2;

 VAR_6 = FUNC_2(VAR_5->cloned->sb, VAR_3, VAR_7,
   &VAR_8);
 if (VAR_6)
  return VAR_6;

 if (FUNC_0(VAR_3)->caps & VAR_1 &&
  !(VAR_8 & VAR_2))
  FUNC_0(VAR_3)->caps &= ~VAR_1;
 return 0;
}
