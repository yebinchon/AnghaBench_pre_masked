
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_mount_info {TYPE_1__* parsed; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int caps; } ;
struct TYPE_3__ {int lsm_opts; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct super_block*,int ,unsigned long,unsigned long*) ;

int FUNC_2(struct super_block *VAR_2, struct dentry *VAR_3,
   struct nfs_mount_info *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = 0, VAR_7 = 0;
 if (FUNC_0(VAR_2)->caps & VAR_0)
  VAR_6 |= VAR_1;

 VAR_5 = FUNC_1(VAR_2, VAR_4->parsed->lsm_opts,
      VAR_6, &VAR_7);
 if (VAR_5)
  goto err;

 if (FUNC_0(VAR_2)->caps & VAR_0 &&
  !(VAR_7 & VAR_1))
  FUNC_0(VAR_2)->caps &= ~VAR_0;
err:
 return VAR_5;
}
