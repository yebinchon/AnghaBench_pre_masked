
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int mdsc; int client; } ;
struct file_system_type {int dummy; } ;
struct dentry {int mdsc; int client; } ;
struct ceph_options {int dummy; } ;
struct ceph_mount_options {int dummy; } ;
struct ceph_fs_client {int mdsc; int client; } ;


 struct super_block* FUNC_0 (struct super_block*) ;
 struct super_block* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int VAR_0 ;
 struct super_block* FUNC_3 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_4 (struct super_block*,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*) ;
 struct super_block* FUNC_7 (struct super_block*) ;
 struct super_block* FUNC_8 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_9 (struct super_block*,struct super_block*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 struct super_block* FUNC_12 (struct ceph_mount_options*,struct ceph_options*) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (struct super_block*) ;
 int FUNC_15 (struct super_block*) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (struct ceph_mount_options**,struct ceph_options**,int,void*,char const*) ;
 struct super_block* FUNC_18 (struct file_system_type*,int (*) (struct super_block*,void*),int ,int,struct super_block*) ;

__attribute__((used)) static struct dentry *FUNC_19(struct file_system_type *VAR_3,
         int VAR_4, const char *VAR_5, void *VAR_6)
{
 struct super_block *VAR_7;
 struct ceph_fs_client *VAR_8;
 struct dentry *VAR_9;
 int VAR_10;
 int (*VAR_11)(struct super_block *, void *) = FUNC_4;
 struct ceph_mount_options *VAR_12 = ((void*)0);
 struct ceph_options *VAR_13 = ((void*)0);

 FUNC_16("ceph_mount\n");




 VAR_10 = FUNC_17(&VAR_12, &VAR_13, VAR_4, VAR_6, VAR_5);
 if (VAR_10 < 0) {
  VAR_9 = FUNC_1(VAR_10);
  goto out_final;
 }


 VAR_8 = FUNC_12(VAR_12, VAR_13);
 if (FUNC_2(VAR_8)) {
  VAR_9 = FUNC_0(VAR_8);
  goto out_final;
 }

 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10 < 0) {
  VAR_9 = FUNC_1(VAR_10);
  goto out;
 }

 if (FUNC_10(VAR_8->client, VAR_0))
  VAR_11 = ((void*)0);
 VAR_7 = FUNC_18(VAR_3, VAR_11, VAR_2, VAR_4, VAR_8);
 if (FUNC_2(VAR_7)) {
  VAR_9 = FUNC_0(VAR_7);
  goto out;
 }

 if (FUNC_8(VAR_7) != VAR_8) {
  FUNC_15(VAR_8);
  VAR_8 = FUNC_8(VAR_7);
  FUNC_16("get_sb got existing client %p\n", VAR_8);
 } else {
  FUNC_16("get_sb using new client %p\n", VAR_8);
  VAR_10 = FUNC_9(VAR_7, VAR_8);
  if (VAR_10 < 0) {
   VAR_9 = FUNC_1(VAR_10);
   goto out_splat;
  }
 }

 VAR_9 = FUNC_7(VAR_8);
 if (FUNC_2(VAR_9))
  goto out_splat;
 FUNC_16("root %p inode %p ino %llx.%llx\n", VAR_9,
      FUNC_13(VAR_9), FUNC_11(FUNC_13(VAR_9)));
 return VAR_9;

out_splat:
 FUNC_5(VAR_8->mdsc);
 FUNC_14(VAR_7);
 goto out_final;

out:
 FUNC_15(VAR_8);
out_final:
 FUNC_16("ceph_mount fail %ld\n", FUNC_3(VAR_9));
 return VAR_9;
}
