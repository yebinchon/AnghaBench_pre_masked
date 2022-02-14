
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct inode {int dummy; } ;
struct file_lock {int fl_flags; scalar_t__ fl_type; int fl_owner; } ;
struct file {TYPE_1__* f_mapping; } ;
struct ceph_inode_info {int i_ceph_flags; int i_ceph_lock; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ceph_inode_info* FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,scalar_t__,struct inode*,int,int,struct file_lock*) ;
 int FUNC_5 (char*,...) ;
 struct inode* FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*,struct file_lock*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct file *VAR_13, int VAR_14, struct file_lock *VAR_15)
{
 struct inode *VAR_16 = FUNC_6(VAR_13);
 struct ceph_inode_info *VAR_17 = FUNC_3(VAR_16);
 int VAR_18 = 0;
 u16 VAR_19 = VAR_6;
 u8 VAR_20 = 0;
 u8 VAR_21;

 if (!(VAR_15->fl_flags & VAR_9))
  return -VAR_8;

 if (FUNC_2(VAR_13->f_mapping->host) && VAR_15->fl_type != VAR_11)
  return -VAR_8;

 FUNC_5("ceph_lock, fl_owner: %p\n", VAR_15->fl_owner);


 if (FUNC_0(VAR_14))
  VAR_19 = VAR_5;
 else if (FUNC_1(VAR_14))
  VAR_20 = 1;

 FUNC_8(&VAR_17->i_ceph_lock);
 if (VAR_17->i_ceph_flags & VAR_0) {
  VAR_18 = -VAR_7;
 }
 FUNC_9(&VAR_17->i_ceph_lock);
 if (VAR_18 < 0) {
  if (VAR_19 == VAR_6 && VAR_11 == VAR_15->fl_type)
   FUNC_7(VAR_13, VAR_15, ((void*)0));
  return VAR_18;
 }

 if (VAR_10 == VAR_15->fl_type)
  VAR_21 = VAR_3;
 else if (VAR_12 == VAR_15->fl_type)
  VAR_21 = VAR_1;
 else
  VAR_21 = VAR_4;

 VAR_18 = FUNC_4(VAR_2, VAR_19, VAR_16, VAR_21, VAR_20, VAR_15);
 if (!VAR_18) {
  if (VAR_19 == VAR_6) {
   FUNC_5("mds locked, locking locally\n");
   VAR_18 = FUNC_7(VAR_13, VAR_15, ((void*)0));
   if (VAR_18) {



    FUNC_4(VAR_2, VAR_19, VAR_16,
        VAR_4, 0, VAR_15);
    FUNC_5("got %d on posix_lock_file, undid lock\n",
         VAR_18);
   }
  }
 }
 return VAR_18;
}
