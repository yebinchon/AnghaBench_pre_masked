
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct ceph_mds_reply_info_parsed {int dir_nr; struct ceph_mds_reply_dir_entry* dir_entries; scalar_t__ dir_end; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_2__ readdir; } ;
struct ceph_mds_request {unsigned int r_readdir_offset; char* r_path2; struct ceph_mds_reply_info_parsed r_reply_info; int r_dentry; struct inode* r_inode; TYPE_3__ r_args; int r_direct_mode; } ;
struct TYPE_10__ {TYPE_4__* in; } ;
struct ceph_mds_reply_dir_entry {size_t name_len; int name; TYPE_5__ inode; } ;
struct ceph_fs_client {int mdsc; TYPE_1__* mount_options; } ;
struct TYPE_9__ {int snapid; } ;
struct TYPE_6__ {int snapdir_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct ceph_mds_request*) ;
 int FUNC_2 (struct ceph_mds_request*) ;
 int VAR_8 ;
 int FUNC_3 (struct ceph_mds_request*,struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 struct ceph_fs_client* FUNC_5 (struct inode*) ;
 struct ceph_mds_request* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int *,struct ceph_mds_request*) ;
 int FUNC_8 (struct ceph_mds_request*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 struct inode* FUNC_12 (struct dentry*) ;
 int FUNC_13 (struct dentry*) ;
 int FUNC_14 (char*,struct dentry*,int ,int) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (int ,size_t,int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (char*,int ,size_t) ;
 int FUNC_22 (char*,int ) ;

__attribute__((used)) static int FUNC_23(struct dentry *VAR_9, char *VAR_10,
      struct dentry *VAR_11)
{
 struct inode *VAR_12 = FUNC_12(VAR_11);
 struct inode *VAR_13 = FUNC_12(VAR_9);
 struct ceph_fs_client *VAR_14 = FUNC_5(VAR_12);
 struct ceph_mds_request *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 unsigned VAR_17 = 2;
 int VAR_18 = -VAR_4;

 if (FUNC_4(VAR_12) != FUNC_4(VAR_13))
  goto out;
 if (FUNC_9(VAR_12) == VAR_3) {
  if (FUNC_9(VAR_13) == VAR_1) {
   FUNC_22(VAR_10, VAR_14->mount_options->snapdir_name);
   VAR_18 = 0;
  }
  goto out;
 }
 if (FUNC_9(VAR_13) != VAR_3)
  goto out;

 while (1) {
  struct ceph_mds_reply_info_parsed *VAR_19;
  struct ceph_mds_reply_dir_entry *VAR_20;
  int VAR_21;

  VAR_15 = FUNC_6(VAR_14->mdsc, VAR_0,
            VAR_8);
  if (FUNC_1(VAR_15)) {
   VAR_18 = FUNC_2(VAR_15);
   VAR_15 = ((void*)0);
   goto out;
  }
  VAR_18 = FUNC_3(VAR_15, VAR_12);
  if (VAR_18)
   goto out;

  VAR_15->r_direct_mode = VAR_8;
  VAR_15->r_readdir_offset = VAR_17;
  VAR_15->r_args.readdir.flags =
    FUNC_11(VAR_2);
  if (VAR_16) {
   VAR_15->r_path2 = VAR_16;
   VAR_16 = ((void*)0);
  }

  VAR_15->r_inode = VAR_13;
  FUNC_15(VAR_13);
  VAR_15->r_dentry = FUNC_13(VAR_9);

  FUNC_16(VAR_13);
  VAR_18 = FUNC_7(VAR_14->mdsc, ((void*)0), VAR_15);
  FUNC_17(VAR_13);

  if (VAR_18 < 0)
   goto out;

  VAR_19 = &VAR_15->r_reply_info;
  for (VAR_21 = 0; VAR_21 < VAR_19->dir_nr; VAR_21++) {
   VAR_20 = VAR_19->dir_entries + VAR_21;
   FUNC_0(!VAR_20->inode.in);
   if (FUNC_9(VAR_12) ==
       FUNC_20(VAR_20->inode.in->snapid)) {
    FUNC_21(VAR_10, VAR_20->name, VAR_20->name_len);
    VAR_10[VAR_20->name_len] = '\0';
    VAR_18 = 0;
    goto out;
   }
  }

  if (VAR_19->dir_end)
   break;

  FUNC_0(VAR_19->dir_nr <= 0);
  VAR_20 = VAR_19->dir_entries + (VAR_19->dir_nr - 1);
  VAR_17 += VAR_19->dir_nr;
  VAR_16 = FUNC_19(VAR_20->name, VAR_20->name_len, VAR_7);
  if (!VAR_16) {
   VAR_18 = -VAR_6;
   goto out;
  }

  FUNC_8(VAR_15);
  VAR_15 = ((void*)0);
 }
 VAR_18 = -VAR_5;
out:
 if (VAR_15)
  FUNC_8(VAR_15);
 FUNC_18(VAR_16);
 FUNC_14("get_snap_name %p ino %llx.%llx err=%d\n",
      VAR_11, FUNC_10(VAR_12), VAR_18);
 return VAR_18;
}
