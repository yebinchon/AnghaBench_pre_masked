
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_mode; int i_ino; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; struct ceph_dir_file_info* private_data; } ;
struct dir_context {int pos; } ;
struct TYPE_6__ {int len; int name; } ;
struct dentry {TYPE_3__ d_name; int d_sb; int d_lock; } ;
struct ceph_readdir_cache_control {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct ceph_dir_file_info {int readdir_cache_idx; scalar_t__ dir_release_count; TYPE_2__ file_info; } ;
struct ceph_dentry_info {int offset; int lease_shared_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct ceph_dentry_info*) ;
 struct dentry* FUNC_3 (struct dentry*,int,struct ceph_readdir_cache_control*) ;
 struct ceph_dentry_info* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct ceph_readdir_cache_control*) ;
 int FUNC_6 (int ,int ) ;
 struct inode* FUNC_7 (struct dentry*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dir_context*,int ,int ,int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct dentry*) ;
 scalar_t__ FUNC_14 (int,int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct ceph_dir_file_info*,int ,int ,scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct file *VAR_2, struct dir_context *VAR_3,
       int VAR_4)
{
 struct ceph_dir_file_info *VAR_5 = VAR_2->private_data;
 struct dentry *VAR_6 = VAR_2->f_path.dentry;
 struct inode *VAR_7 = FUNC_7(VAR_6);
 struct dentry *VAR_8, *VAR_9 = ((void*)0);
 struct ceph_dentry_info *VAR_10;
 struct ceph_readdir_cache_control VAR_11 = {};
 u64 VAR_12 = 0;
 int VAR_13 = 0;

 FUNC_12("__dcache_readdir %p v%u at %llx\n", VAR_7, (unsigned)VAR_4, VAR_3->pos);


 if (VAR_3->pos > 2) {
  u64 VAR_14 = FUNC_11(FUNC_16(VAR_7), sizeof(struct dentry *));
  while (VAR_14 > 0) {
   u64 VAR_15 = VAR_14 >> 1;
   VAR_8 = FUNC_3(VAR_6, VAR_12 + VAR_15,
        &VAR_11);
   if (!VAR_8) {

    VAR_12 = 0;
    break;
   }
   if (FUNC_0(VAR_8)) {
    VAR_13 = FUNC_1(VAR_8);
    goto out;
   }
   VAR_10 = FUNC_4(VAR_8);
   FUNC_18(&VAR_8->d_lock);
   if (FUNC_14(VAR_10->offset, VAR_3->pos) < 0) {
    VAR_12 += VAR_15 + 1;
    VAR_14 -= VAR_15 + 1;
   } else {
    VAR_14 = VAR_15;
   }
   FUNC_19(&VAR_8->d_lock);
   FUNC_13(VAR_8);
  }

  FUNC_12("__dcache_readdir %p cache idx %llu\n", VAR_7, VAR_12);
 }


 for (;;) {
  bool VAR_16 = 0;
  VAR_8 = FUNC_3(VAR_6, VAR_12++, &VAR_11);
  if (!VAR_8) {
   VAR_5->file_info.flags |= VAR_0;
   VAR_13 = 0;
   break;
  }
  if (FUNC_0(VAR_8)) {
   VAR_13 = FUNC_1(VAR_8);
   goto out;
  }

  FUNC_18(&VAR_8->d_lock);
  VAR_10 = FUNC_4(VAR_8);
  if (FUNC_9(VAR_8) ||
      FUNC_8(VAR_8) ||
      VAR_10->lease_shared_gen != VAR_4) {
   FUNC_19(&VAR_8->d_lock);
   FUNC_13(VAR_8);
   VAR_13 = -VAR_1;
   goto out;
  }
  if (FUNC_14(VAR_3->pos, VAR_10->offset) <= 0) {
   FUNC_2(VAR_10);
   VAR_16 = 1;
  }
  FUNC_19(&VAR_8->d_lock);

  if (VAR_16) {
   FUNC_12(" %llx dentry %p %pd %p\n", VAR_10->offset,
        VAR_8, VAR_8, FUNC_7(VAR_8));
   VAR_3->pos = VAR_10->offset;
   if (!FUNC_10(VAR_3, VAR_8->d_name.name,
          VAR_8->d_name.len,
          FUNC_6(VAR_8->d_sb,
        FUNC_7(VAR_8)->i_ino),
          FUNC_7(VAR_8)->i_mode >> 12)) {
    FUNC_13(VAR_8);
    VAR_13 = 0;
    break;
   }
   VAR_3->pos++;

   if (VAR_9)
    FUNC_13(VAR_9);
   VAR_9 = VAR_8;
  } else {
   FUNC_13(VAR_8);
  }
 }
out:
 FUNC_5(&VAR_11);
 if (VAR_9) {
  int VAR_17;
  VAR_10 = FUNC_4(VAR_9);
  VAR_17 = FUNC_17(VAR_5, VAR_9->d_name.name, VAR_9->d_name.len,
           FUNC_15(VAR_10->offset) + 1);
  if (VAR_17 < 0)
   VAR_13 = VAR_17;
  FUNC_13(VAR_9);

  if (VAR_5->readdir_cache_idx >= 0) {
   VAR_5->readdir_cache_idx = -1;
   VAR_5->dir_release_count = 0;
  }
 }
 return VAR_13;
}
