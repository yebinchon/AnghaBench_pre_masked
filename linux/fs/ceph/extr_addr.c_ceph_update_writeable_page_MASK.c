
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct ceph_snap_context {scalar_t__ seq; } ;
struct ceph_inode_info {int i_cap_wq; struct ceph_snap_context* i_head_snapc; } ;
struct ceph_fs_client {int mount_state; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct file*,struct page*) ;
 struct ceph_snap_context* FUNC_3 (struct ceph_snap_context*) ;
 struct ceph_inode_info* FUNC_4 (struct inode*) ;
 struct ceph_fs_client* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct ceph_snap_context*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct inode*,struct ceph_snap_context*) ;
 int FUNC_10 (char*,struct page*,...) ;
 struct inode* FUNC_11 (struct file*) ;
 struct ceph_snap_context* FUNC_12 (struct inode*,int *,int *) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 struct ceph_snap_context* FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*,int *) ;
 int FUNC_19 (struct page*,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_20(struct file *VAR_7,
       loff_t VAR_8, unsigned VAR_9,
       struct page *VAR_10)
{
 struct inode *VAR_11 = FUNC_11(VAR_7);
 struct ceph_fs_client *VAR_12 = FUNC_5(VAR_11);
 struct ceph_inode_info *VAR_13 = FUNC_4(VAR_11);
 loff_t VAR_14 = VAR_8 & VAR_5;
 int VAR_15 = VAR_8 & ~VAR_5;
 int VAR_16 = VAR_15 + VAR_9;
 loff_t VAR_17;
 int VAR_18;
 struct ceph_snap_context *VAR_19, *VAR_20;

 if (FUNC_1(VAR_12->mount_state) == VAR_0) {
  FUNC_10(" page %p forced umount\n", VAR_10);
  FUNC_15(VAR_10);
  return -VAR_3;
 }

retry_locked:

 FUNC_17(VAR_10);

 VAR_19 = FUNC_14(VAR_10);
 if (VAR_19 && VAR_19 != VAR_13->i_head_snapc) {




  VAR_20 = FUNC_12(VAR_11, ((void*)0), ((void*)0));
  if (VAR_19->seq > VAR_20->seq) {
   FUNC_6(VAR_20);
   FUNC_10(" page %p snapc %p not current or oldest\n",
        VAR_10, VAR_19);




   VAR_19 = FUNC_3(VAR_19);
   FUNC_15(VAR_10);
   FUNC_7(VAR_11);
   VAR_18 = FUNC_16(VAR_13->i_cap_wq,
          FUNC_9(VAR_11, VAR_19));
   FUNC_6(VAR_19);
   if (VAR_18 == -VAR_4)
    return VAR_18;
   return -VAR_1;
  }
  FUNC_6(VAR_20);


  FUNC_10(" page %p snapc %p not current, but oldest\n",
       VAR_10, VAR_19);
  if (!FUNC_8(VAR_10))
   goto retry_locked;
  VAR_18 = FUNC_18(VAR_10, ((void*)0));
  if (VAR_18 < 0)
   goto fail_unlock;
  goto retry_locked;
 }

 if (FUNC_0(VAR_10)) {
  FUNC_10(" page %p already uptodate\n", VAR_10);
  return 0;
 }


 if (VAR_15 == 0 && VAR_9 == VAR_6)
  return 0;


 VAR_17 = FUNC_13(VAR_11);

 if (VAR_14 >= VAR_17 ||
     (VAR_15 == 0 && (VAR_8+VAR_9) >= VAR_17 &&
      VAR_16 - VAR_15 != VAR_6)) {
  FUNC_10(" zeroing %p 0 - %d and %d - %d\n",
       VAR_10, VAR_15, VAR_16, (int)VAR_6);
  FUNC_19(VAR_10,
       0, VAR_15,
       VAR_16, VAR_6);
  return 0;
 }


 VAR_18 = FUNC_2(VAR_7, VAR_10);
 if (VAR_18 < 0) {
  if (VAR_18 == -VAR_2)
   return -VAR_1;
  goto fail_unlock;
 }
 goto retry_locked;
fail_unlock:
 FUNC_15(VAR_10);
 return VAR_18;
}
