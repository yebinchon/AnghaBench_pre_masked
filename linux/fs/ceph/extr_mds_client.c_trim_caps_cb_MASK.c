
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_count; } ;
struct dentry {int dummy; } ;
struct ceph_inode_info {int i_ceph_lock; int i_filelock_ref; int i_cap_snaps; scalar_t__ i_flushing_caps; scalar_t__ i_dirty_caps; struct ceph_cap* i_auth_cap; } ;
struct ceph_cap {int issued; int implemented; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_inode_info*) ;
 int FUNC_1 (struct ceph_inode_info*,struct ceph_cap*) ;
 int FUNC_2 (struct ceph_inode_info*) ;
 int FUNC_3 (struct ceph_cap*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 struct ceph_inode_info* FUNC_6 (struct inode*) ;
 struct dentry* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*,struct inode*,struct ceph_cap*,int,...) ;
 int FUNC_10 (struct dentry*) ;
 scalar_t__ FUNC_11 (struct dentry*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_2, struct ceph_cap *VAR_3, void *VAR_4)
{
 int *VAR_5 = VAR_4;
 struct ceph_inode_info *VAR_6 = FUNC_6(VAR_2);
 int VAR_7, VAR_8, VAR_9, VAR_10;

 if (*VAR_5 <= 0)
  return -1;

 FUNC_13(&VAR_6->i_ceph_lock);
 VAR_10 = VAR_3->issued | VAR_3->implemented;
 VAR_7 = FUNC_2(VAR_6);
 VAR_8 = FUNC_0(VAR_6);
 VAR_9 = FUNC_1(VAR_6, VAR_3);

 FUNC_9("trim_caps_cb %p cap %p mine %s oissued %s used %s wanted %s\n",
      VAR_2, VAR_3, FUNC_5(VAR_10), FUNC_5(VAR_9),
      FUNC_5(VAR_7), FUNC_5(VAR_8));
 if (VAR_3 == VAR_6->i_auth_cap) {
  if (VAR_6->i_dirty_caps || VAR_6->i_flushing_caps ||
      !FUNC_12(&VAR_6->i_cap_snaps))
   goto out;
  if ((VAR_7 | VAR_8) & VAR_0)
   goto out;



  if (FUNC_4(&VAR_6->i_filelock_ref) > 0)
   goto out;
 }


 if (VAR_8 == 0 && VAR_7 == VAR_1 &&
     !(VAR_9 & VAR_1)) {
   VAR_7 = 0;
   VAR_9 = 0;
 }
 if ((VAR_7 | VAR_8) & ~VAR_9 & VAR_10)
  goto out;

 if (VAR_9) {

  FUNC_3(VAR_3, 1);
  (*VAR_5)--;
 } else {
  struct dentry *VAR_11;

  FUNC_14(&VAR_6->i_ceph_lock);
  VAR_11 = FUNC_7(VAR_2);
  if (VAR_11 && FUNC_11(VAR_11)) {
   int VAR_12;
   FUNC_10(VAR_11);
   FUNC_8(VAR_2);
   VAR_12 = FUNC_4(&VAR_2->i_count);
   if (VAR_12 == 1)
    (*VAR_5)--;
   FUNC_9("trim_caps_cb %p cap %p pruned, count now %d\n",
        VAR_2, VAR_3, VAR_12);
  } else {
   FUNC_10(VAR_11);
  }
  return 0;
 }

out:
 FUNC_14(&VAR_6->i_ceph_lock);
 return 0;
}
