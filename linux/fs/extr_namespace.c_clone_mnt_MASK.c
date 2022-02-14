
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_mounts; int s_active; } ;
struct TYPE_2__ {int mnt_flags; int mnt_root; struct super_block* mnt_sb; } ;
struct mount {int mnt_expire; struct mount* mnt_master; int mnt_slave; int mnt_share; int mnt_slave_list; int mnt_instance; struct mount* mnt_parent; TYPE_1__ mnt; int mnt_mountpoint; scalar_t__ mnt_group_id; int mnt_devname; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mount* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mount*) ;
 scalar_t__ FUNC_3 (struct mount*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mount* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (struct mount*) ;
 int FUNC_13 (struct mount*) ;
 int FUNC_14 (struct mount*) ;
 int FUNC_15 () ;

__attribute__((used)) static struct mount *FUNC_16(struct mount *VAR_9, struct dentry *VAR_10,
     int VAR_11)
{
 struct super_block *VAR_12 = VAR_9->mnt.mnt_sb;
 struct mount *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_4(VAR_9->mnt_devname);
 if (!VAR_13)
  return FUNC_1(-VAR_5);

 if (VAR_11 & (VAR_4 | VAR_2 | VAR_3))
  VAR_13->mnt_group_id = 0;
 else
  VAR_13->mnt_group_id = VAR_9->mnt_group_id;

 if ((VAR_11 & VAR_1) && !VAR_13->mnt_group_id) {
  VAR_14 = FUNC_12(VAR_13);
  if (VAR_14)
   goto out_free;
 }

 VAR_13->mnt.mnt_flags = VAR_9->mnt.mnt_flags;
 VAR_13->mnt.mnt_flags &= ~(VAR_8|VAR_7|VAR_6);

 FUNC_5(&VAR_12->s_active);
 VAR_13->mnt.mnt_sb = VAR_12;
 VAR_13->mnt.mnt_root = FUNC_6(VAR_10);
 VAR_13->mnt_mountpoint = VAR_13->mnt.mnt_root;
 VAR_13->mnt_parent = VAR_13;
 FUNC_11();
 FUNC_9(&VAR_13->mnt_instance, &VAR_12->s_mounts);
 FUNC_15();

 if ((VAR_11 & VAR_4) ||
     ((VAR_11 & VAR_3) && FUNC_2(VAR_9))) {
  FUNC_8(&VAR_13->mnt_slave, &VAR_9->mnt_slave_list);
  VAR_13->mnt_master = VAR_9;
  FUNC_0(VAR_13);
 } else if (!(VAR_11 & VAR_2)) {
  if ((VAR_11 & VAR_1) || FUNC_2(VAR_9))
   FUNC_8(&VAR_13->mnt_share, &VAR_9->mnt_share);
  if (FUNC_3(VAR_9))
   FUNC_8(&VAR_13->mnt_slave, &VAR_9->mnt_slave);
  VAR_13->mnt_master = VAR_9->mnt_master;
 } else {
  FUNC_0(VAR_13);
 }
 if (VAR_11 & VAR_1)
  FUNC_14(VAR_13);



 if (VAR_11 & VAR_0) {
  if (!FUNC_10(&VAR_9->mnt_expire))
   FUNC_8(&VAR_13->mnt_expire, &VAR_9->mnt_expire);
 }

 return VAR_13;

 out_free:
 FUNC_13(VAR_13);
 FUNC_7(VAR_13);
 return FUNC_1(VAR_14);
}
