
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct ceph_file_info* private_data; } ;
struct ceph_rw_context {int dummy; } ;
struct ceph_fs_client {TYPE_1__* mount_options; } ;
struct ceph_file_info {int dummy; } ;
struct address_space {int host; } ;
struct TYPE_4__ {scalar_t__ i_inline_version; } ;
struct TYPE_3__ {int rsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ceph_rw_context* FUNC_0 (struct ceph_file_info*) ;
 int FUNC_1 (struct inode*,struct list_head*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 struct ceph_fs_client* FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,struct address_space*,struct list_head*,unsigned int*) ;
 int FUNC_5 (char*,struct inode*,struct file*,int,...) ;
 struct inode* FUNC_6 (struct file*) ;
 int FUNC_7 (struct list_head*) ;
 int FUNC_8 (struct inode*,struct ceph_rw_context*,struct list_head*,int) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_3, struct address_space *VAR_4,
     struct list_head *VAR_5, unsigned VAR_6)
{
 struct inode *VAR_7 = FUNC_6(VAR_3);
 struct ceph_fs_client *VAR_8 = FUNC_3(VAR_7);
 struct ceph_file_info *VAR_9 = VAR_3->private_data;
 struct ceph_rw_context *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (FUNC_2(VAR_7)->i_inline_version != VAR_0)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_4->host, VAR_4, VAR_5,
      &VAR_6);

 if (VAR_11 == 0)
  goto out;

 VAR_10 = FUNC_0(VAR_9);
 VAR_12 = VAR_8->mount_options->rsize >> VAR_2;
 FUNC_5("readpages %p file %p ctx %p nr_pages %d max %d\n",
      VAR_7, VAR_3, VAR_10, VAR_6, VAR_12);
 while (!FUNC_7(VAR_5)) {
  VAR_11 = FUNC_8(VAR_7, VAR_10, VAR_5, VAR_12);
  if (VAR_11 < 0)
   goto out;
 }
out:
 FUNC_1(VAR_7, VAR_5);

 FUNC_5("readpages %p file %p ret %d\n", VAR_7, VAR_3, VAR_11);
 return VAR_11;
}
