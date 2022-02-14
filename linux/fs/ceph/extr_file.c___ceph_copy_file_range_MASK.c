
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct inode {scalar_t__ i_sb; int i_mapping; } ;
struct file {int dummy; } ;
struct ceph_object_locator {void* pool_ns; int pool; } ;
struct ceph_object_id {int dummy; } ;
struct TYPE_4__ {int snap; int ino; } ;
struct TYPE_6__ {scalar_t__ stripe_unit; int stripe_count; size_t object_size; int pool_ns; int pool_id; } ;
struct ceph_inode_info {int i_ceph_lock; int i_inline_version; TYPE_1__ i_vino; TYPE_3__ i_layout; } ;
struct ceph_fs_client {TYPE_2__* client; } ;
struct ceph_cap_flush {int dummy; } ;
typedef int ssize_t ;
typedef size_t loff_t ;
struct TYPE_5__ {int osdc; int fsid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (struct ceph_inode_info*,int ,struct ceph_cap_flush**) ;
 int FUNC_1 (struct inode*,int) ;
 struct ceph_cap_flush* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,size_t,size_t,scalar_t__*,scalar_t__*,size_t*) ;
 int FUNC_4 (struct ceph_inode_info*,int,int *) ;
 int FUNC_5 (struct ceph_cap_flush*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 struct ceph_inode_info* FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*,size_t) ;
 struct ceph_fs_client* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ceph_object_id*) ;
 int FUNC_11 (struct ceph_object_id*,char*,int ,scalar_t__) ;
 int FUNC_12 (int *,int ,int ,struct ceph_object_id*,struct ceph_object_locator*,int,struct ceph_object_id*,struct ceph_object_locator*,int,int ) ;
 scalar_t__ FUNC_13 (struct inode*,size_t) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (struct ceph_fs_client*,int ) ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (struct file*,size_t*,struct file*,size_t*,size_t,unsigned int) ;
 int FUNC_18 (char*,...) ;
 struct inode* FUNC_19 (struct file*) ;
 int FUNC_20 (struct file*) ;
 int FUNC_21 (struct file*,size_t,size_t) ;
 int FUNC_22 (struct file*,int*,struct file*,size_t,int*) ;
 size_t FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (int ,size_t,size_t) ;
 int FUNC_26 (struct inode*,struct inode*,size_t,size_t,size_t) ;
 int FUNC_27 (struct ceph_inode_info*,int,struct ceph_inode_info*,int) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static ssize_t FUNC_30(struct file *VAR_15, loff_t VAR_16,
          struct file *VAR_17, loff_t VAR_18,
          size_t VAR_19, unsigned int VAR_20)
{
 struct inode *VAR_21 = FUNC_19(VAR_15);
 struct inode *VAR_22 = FUNC_19(VAR_17);
 struct ceph_inode_info *VAR_23 = FUNC_7(VAR_21);
 struct ceph_inode_info *VAR_24 = FUNC_7(VAR_22);
 struct ceph_cap_flush *VAR_25;
 struct ceph_fs_client *VAR_26 = FUNC_9(VAR_21);
 struct ceph_object_locator VAR_27, VAR_28;
 struct ceph_object_id VAR_29, VAR_30;
 loff_t VAR_31 = 0, VAR_32;
 ssize_t VAR_33 = -VAR_8;
 u64 VAR_34, VAR_35, VAR_36, VAR_37;
 u32 VAR_38, VAR_39, VAR_40;
 int VAR_41 = 0, VAR_42 = 0, VAR_43, VAR_44;
 bool VAR_45 = 0;

 if (VAR_21->i_sb != VAR_22->i_sb) {
  struct ceph_fs_client *VAR_46 = FUNC_9(VAR_22);

  if (FUNC_6(&VAR_26->client->fsid,
          &VAR_46->client->fsid)) {
   FUNC_18("Copying files across clusters: src: %pU dst: %pU\n",
        &VAR_26->client->fsid, &VAR_46->client->fsid);
   return -VAR_12;
  }
 }
 if (FUNC_14(VAR_22) != VAR_2)
  return -VAR_11;
 if (FUNC_15(VAR_26, VAR_13))
  return -VAR_10;






 if ((VAR_23->i_layout.stripe_unit != VAR_24->i_layout.stripe_unit) ||
     (VAR_23->i_layout.stripe_count != 1) ||
     (VAR_24->i_layout.stripe_count != 1) ||
     (VAR_23->i_layout.object_size != VAR_24->i_layout.object_size)) {
  FUNC_18("Invalid src/dst files layout\n");
  return -VAR_10;
 }

 if (VAR_19 < VAR_23->i_layout.object_size)
  return -VAR_10;

 VAR_25 = FUNC_2();
 if (!VAR_25)
  return -VAR_9;


 VAR_33 = FUNC_21(VAR_15, VAR_16, (VAR_16 + VAR_19));
 if (VAR_33 < 0) {
  FUNC_18("failed to write src file (%zd)\n", VAR_33);
  goto out;
 }
 VAR_33 = FUNC_21(VAR_17, VAR_18, (VAR_18 + VAR_19));
 if (VAR_33 < 0) {
  FUNC_18("failed to write dst file (%zd)\n", VAR_33);
  goto out;
 }






 VAR_43 = FUNC_22(VAR_15, &VAR_41,
        VAR_17, (VAR_18 + VAR_19), &VAR_42);
 if (VAR_43 < 0) {
  FUNC_18("get_rd_wr_caps returned %d\n", VAR_43);
  VAR_33 = -VAR_10;
  goto out;
 }

 VAR_33 = FUNC_26(VAR_21, VAR_22, VAR_16, VAR_18, VAR_19);
 if (VAR_33 < 0)
  goto out_caps;

 VAR_32 = FUNC_23(VAR_22);
 VAR_31 = VAR_18 + VAR_19;


 VAR_33 = FUNC_25(VAR_22->i_mapping,
         VAR_18 >> VAR_14,
         VAR_31 >> VAR_14);
 if (VAR_33 < 0) {
  FUNC_18("Failed to invalidate inode pages (%zd)\n", VAR_33);
  VAR_33 = 0;
 }
 VAR_27.pool = VAR_23->i_layout.pool_id;
 VAR_27.pool_ns = FUNC_16(VAR_23->i_layout.pool_ns);
 VAR_28.pool = VAR_24->i_layout.pool_id;
 VAR_28.pool_ns = FUNC_16(VAR_24->i_layout.pool_ns);

 FUNC_3(&VAR_23->i_layout, VAR_16,
          VAR_23->i_layout.object_size,
          &VAR_34, &VAR_36, &VAR_38);
 FUNC_3(&VAR_24->i_layout, VAR_18,
          VAR_24->i_layout.object_size,
          &VAR_35, &VAR_37, &VAR_39);

 if (VAR_36 != VAR_37) {
  VAR_33 = -VAR_10;
  goto out_caps;
 }






 if (VAR_36) {




  FUNC_27(VAR_23, VAR_41, VAR_24, VAR_42);
  VAR_33 = FUNC_17(VAR_15, &VAR_16, VAR_17,
           &VAR_18, VAR_38, VAR_20);
  if (VAR_33 < 0) {
   FUNC_18("do_splice_direct returned %d\n", VAR_43);
   goto out;
  }
  VAR_19 -= VAR_33;
  VAR_43 = FUNC_22(VAR_15, &VAR_41,
         VAR_17, (VAR_18 + VAR_19), &VAR_42);
  if (VAR_43 < 0)
   goto out;
  VAR_43 = FUNC_26(VAR_21, VAR_22,
          VAR_16, VAR_18, VAR_19);
  if (VAR_43 < 0)
   goto out_caps;
 }
 VAR_40 = VAR_23->i_layout.object_size;
 while (VAR_19 >= VAR_40) {
  FUNC_3(&VAR_23->i_layout, VAR_16,
           VAR_40, &VAR_34,
           &VAR_36, &VAR_38);
  FUNC_3(&VAR_24->i_layout, VAR_18,
           VAR_40, &VAR_35,
           &VAR_37, &VAR_39);
  FUNC_10(&VAR_29);
  FUNC_11(&VAR_29, "%llx.%08llx",
    VAR_23->i_vino.ino, VAR_34);
  FUNC_10(&VAR_30);
  FUNC_11(&VAR_30, "%llx.%08llx",
    VAR_24->i_vino.ino, VAR_35);

  VAR_43 = FUNC_12(
   &VAR_26->client->osdc,
   VAR_23->i_vino.snap, 0,
   &VAR_29, &VAR_27,
   VAR_5 |
   VAR_4,
   &VAR_30, &VAR_28,
   VAR_5 |
   VAR_3, 0);
  if (VAR_43) {
   FUNC_18("ceph_osdc_copy_from returned %d\n", VAR_43);
   if (!VAR_33)
    VAR_33 = VAR_43;
   goto out_caps;
  }
  VAR_19 -= VAR_40;
  VAR_16 += VAR_40;
  VAR_18 += VAR_40;
  VAR_33 += VAR_40;
 }

 if (VAR_19)

  VAR_45 = 1;

 FUNC_20(VAR_17);
 FUNC_24(VAR_22);

 if (VAR_31 > VAR_32) {
  int VAR_47 = 0;


  if (FUNC_13(VAR_22, VAR_31))
   VAR_47 |= VAR_7;
  if (FUNC_8(VAR_22, VAR_31))
   VAR_47 |= VAR_6;
  if (VAR_47)
   FUNC_4(VAR_24, VAR_47, ((void*)0));
 }

 FUNC_28(&VAR_24->i_ceph_lock);
 VAR_24->i_inline_version = VAR_1;
 VAR_44 = FUNC_0(VAR_24, VAR_0, &VAR_25);
 FUNC_29(&VAR_24->i_ceph_lock);
 if (VAR_44)
  FUNC_1(VAR_22, VAR_44);

out_caps:
 FUNC_27(VAR_23, VAR_41, VAR_24, VAR_42);

 if (VAR_45) {
  VAR_43 = FUNC_17(VAR_15, &VAR_16, VAR_17,
           &VAR_18, VAR_19, VAR_20);
  if (VAR_43 < 0) {
   FUNC_18("do_splice_direct returned %d\n", VAR_43);
   goto out;
  }
  VAR_19 -= VAR_43;
  VAR_33 += VAR_43;
 }

out:
 FUNC_5(VAR_25);

 return VAR_33;
}
