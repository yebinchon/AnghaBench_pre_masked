
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct file {struct ceph_file_info* private_data; } ;
struct ceph_inode_info {scalar_t__ i_inline_version; int i_ceph_lock; } ;
struct ceph_file_info {int fmode; } ;
struct ceph_cap_flush {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ceph_inode_info*,int ,struct ceph_cap_flush**) ;
 int FUNC_2 (struct inode*,int) ;
 struct ceph_cap_flush* FUNC_3 () ;
 int FUNC_4 (struct ceph_cap_flush*) ;
 int FUNC_5 (struct file*,int ,int,scalar_t__,int*,int *) ;
 struct ceph_inode_info* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct ceph_inode_info*,int) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct file*,int *) ;
 int FUNC_10 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct inode*,scalar_t__,scalar_t__) ;
 struct inode* FUNC_12 (struct file*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static long FUNC_18(struct file *VAR_11, int VAR_12,
    loff_t VAR_13, loff_t VAR_14)
{
 struct ceph_file_info *VAR_15 = VAR_11->private_data;
 struct inode *VAR_16 = FUNC_12(VAR_11);
 struct ceph_inode_info *VAR_17 = FUNC_6(VAR_16);
 struct ceph_cap_flush *VAR_18;
 int VAR_19, VAR_20 = 0;
 int VAR_21;
 int VAR_22 = 0;
 loff_t VAR_23 = 0;
 loff_t VAR_24;

 if (VAR_12 != (VAR_9 | VAR_10))
  return -VAR_7;

 if (!FUNC_0(VAR_16->i_mode))
  return -VAR_7;

 VAR_18 = FUNC_3();
 if (!VAR_18)
  return -VAR_6;

 FUNC_14(VAR_16);

 if (FUNC_8(VAR_16) != VAR_5) {
  VAR_22 = -VAR_8;
  goto unlock;
 }

 if (VAR_17->i_inline_version != VAR_4) {
  VAR_22 = FUNC_9(VAR_11, ((void*)0));
  if (VAR_22 < 0)
   goto unlock;
 }

 VAR_24 = FUNC_13(VAR_16);


 if (VAR_13 >= VAR_24)
  goto unlock;
 if ((VAR_13 + VAR_14) > VAR_24)
  VAR_14 = VAR_24 - VAR_13;

 if (VAR_15->fmode & VAR_3)
  VAR_19 = VAR_0 | VAR_1;
 else
  VAR_19 = VAR_0;

 VAR_22 = FUNC_5(VAR_11, VAR_2, VAR_19, VAR_23, &VAR_20, ((void*)0));
 if (VAR_22 < 0)
  goto unlock;

 FUNC_11(VAR_16, VAR_13, VAR_14);
 VAR_22 = FUNC_10(VAR_16, VAR_13, VAR_14);

 if (!VAR_22) {
  FUNC_16(&VAR_17->i_ceph_lock);
  VAR_17->i_inline_version = VAR_4;
  VAR_21 = FUNC_1(VAR_17, VAR_2,
            &VAR_18);
  FUNC_17(&VAR_17->i_ceph_lock);
  if (VAR_21)
   FUNC_2(VAR_16, VAR_21);
 }

 FUNC_7(VAR_17, VAR_20);
unlock:
 FUNC_15(VAR_16);
 FUNC_4(VAR_18);
 return VAR_22;
}
