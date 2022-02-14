
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inode {int dummy; } ;
struct file_lock {int fl_flags; int fl_type; int fl_file; } ;
struct file {int dummy; } ;
struct ceph_inode_info {int i_ceph_flags; int i_ceph_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_13 ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,struct inode*,int,int,struct file_lock*) ;
 int FUNC_3 (char*,int) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*,struct file_lock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct file *VAR_14, int VAR_15, struct file_lock *VAR_16)
{
 struct inode *VAR_17 = FUNC_4(VAR_14);
 struct ceph_inode_info *VAR_18 = FUNC_1(VAR_17);
 int VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21;

 if (!(VAR_16->fl_flags & VAR_9))
  return -VAR_7;

 if (VAR_16->fl_type & VAR_13)
  return -VAR_8;

 FUNC_3("ceph_flock, fl_file: %p\n", VAR_16->fl_file);

 FUNC_6(&VAR_18->i_ceph_lock);
 if (VAR_18->i_ceph_flags & VAR_0) {
  VAR_19 = -VAR_6;
 }
 FUNC_7(&VAR_18->i_ceph_lock);
 if (VAR_19 < 0) {
  if (VAR_11 == VAR_16->fl_type)
   FUNC_5(VAR_14, VAR_16);
  return VAR_19;
 }

 if (FUNC_0(VAR_15))
  VAR_20 = 1;

 if (VAR_10 == VAR_16->fl_type)
  VAR_21 = VAR_3;
 else if (VAR_12 == VAR_16->fl_type)
  VAR_21 = VAR_1;
 else
  VAR_21 = VAR_4;

 VAR_19 = FUNC_2(VAR_2, VAR_5,
    VAR_17, VAR_21, VAR_20, VAR_16);
 if (!VAR_19) {
  VAR_19 = FUNC_5(VAR_14, VAR_16);
  if (VAR_19) {
   FUNC_2(VAR_2,
       VAR_5,
       VAR_17, VAR_4, 0, VAR_16);
   FUNC_3("got %d on locks_lock_file_wait, undid lock\n", VAR_19);
  }
 }
 return VAR_19;
}
