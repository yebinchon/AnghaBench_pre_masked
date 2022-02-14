
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_mount_options {int max_readdir_bytes; int max_readdir; } ;
struct TYPE_7__ {void* max_bytes; void* max_entries; } ;
struct TYPE_8__ {TYPE_3__ readdir; } ;
struct ceph_mds_reply_info_parsed {int dir_buf_size; void* dir_entries; } ;
struct ceph_mds_request {int r_num_caps; TYPE_4__ r_args; TYPE_2__* r_mdsc; struct ceph_mds_reply_info_parsed r_reply_info; } ;
struct ceph_mds_reply_dir_entry {int dummy; } ;
struct ceph_inode_info {int i_files; int i_subdirs; int i_ceph_lock; } ;
struct TYPE_6__ {TYPE_1__* fsc; } ;
struct TYPE_5__ {struct ceph_mount_options* mount_options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ceph_mds_request *VAR_4,
        struct inode *VAR_5)
{
 struct ceph_inode_info *VAR_6 = FUNC_1(VAR_5);
 struct ceph_mds_reply_info_parsed *VAR_7 = &VAR_4->r_reply_info;
 struct ceph_mount_options *VAR_8 = VAR_4->r_mdsc->fsc->mount_options;
 size_t VAR_9 = sizeof(struct ceph_mds_reply_dir_entry);
 int VAR_10, VAR_11;

 FUNC_6(&VAR_6->i_ceph_lock);
 VAR_11 = VAR_6->i_files + VAR_6->i_subdirs;
 FUNC_7(&VAR_6->i_ceph_lock);
 VAR_11 = FUNC_4(VAR_11, 1);
 VAR_11 = FUNC_5(VAR_11, VAR_8->max_readdir);

 VAR_10 = FUNC_3(VAR_9 * VAR_11);
 while (VAR_10 >= 0) {
  VAR_7->dir_entries = (void*)FUNC_0(VAR_1 |
            VAR_3,
            VAR_10);
  if (VAR_7->dir_entries)
   break;
  VAR_10--;
 }
 if (!VAR_7->dir_entries)
  return -VAR_0;

 VAR_11 = (VAR_2 << VAR_10) / VAR_9;
 VAR_11 = FUNC_5(VAR_11, VAR_8->max_readdir);

 VAR_7->dir_buf_size = VAR_2 << VAR_10;
 VAR_4->r_num_caps = VAR_11 + 1;
 VAR_4->r_args.readdir.max_entries = FUNC_2(VAR_11);
 VAR_4->r_args.readdir.max_bytes = FUNC_2(VAR_8->max_readdir_bytes);
 return 0;
}
