
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct file {struct ceph_file_info* private_data; } ;
struct ceph_inode_info {int i_cap_wq; } ;
struct TYPE_2__ {int fmode; int rw_contexts; } ;
struct ceph_file_info {int fmode; int rw_contexts; int dir_info; int last_name; scalar_t__ last_readdir; TYPE_1__ file_info; } ;
struct ceph_dir_file_info {int fmode; int rw_contexts; int dir_info; int last_name; scalar_t__ last_readdir; TYPE_1__ file_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ceph_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ceph_inode_info*,int ) ;
 int FUNC_5 (char*,struct inode*,struct file*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct ceph_file_info*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct inode *VAR_2, struct file *VAR_3)
{
 struct ceph_inode_info *VAR_4 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_2->i_mode)) {
  struct ceph_dir_file_info *VAR_5 = VAR_3->private_data;
  FUNC_5("release inode %p dir file %p\n", VAR_2, VAR_3);
  FUNC_1(!FUNC_8(&VAR_5->file_info.rw_contexts));

  FUNC_4(VAR_4, VAR_5->file_info.fmode);

  if (VAR_5->last_readdir)
   FUNC_3(VAR_5->last_readdir);
  FUNC_6(VAR_5->last_name);
  FUNC_6(VAR_5->dir_info);
  FUNC_7(VAR_0, VAR_5);
 } else {
  struct ceph_file_info *VAR_6 = VAR_3->private_data;
  FUNC_5("release inode %p regular file %p\n", VAR_2, VAR_3);
  FUNC_1(!FUNC_8(&VAR_6->rw_contexts));

  FUNC_4(VAR_4, VAR_6->fmode);
  FUNC_7(VAR_1, VAR_6);
 }


 FUNC_9(&VAR_4->i_cap_wq);
 return 0;
}
