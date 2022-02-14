
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {scalar_t__ f_version; scalar_t__ f_pos; TYPE_1__* f_mapping; struct ceph_dir_file_info* private_data; } ;
struct TYPE_4__ {int flags; } ;
struct ceph_dir_file_info {int readdir_cache_idx; TYPE_2__ file_info; scalar_t__ dir_release_count; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_0 (char*,struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct ceph_dir_file_info*,scalar_t__) ;
 int FUNC_5 (struct ceph_dir_file_info*) ;

__attribute__((used)) static loff_t FUNC_6(struct file *VAR_3, loff_t VAR_4, int VAR_5)
{
 struct ceph_dir_file_info *VAR_6 = VAR_3->private_data;
 struct inode *VAR_7 = VAR_3->f_mapping->host;
 loff_t VAR_8;

 FUNC_1(VAR_7);
 VAR_8 = -VAR_1;
 switch (VAR_5) {
 case 130:
  VAR_4 += VAR_3->f_pos;
 case 128:
  break;
 case 129:
  VAR_8 = -VAR_2;
 default:
  goto out;
 }

 if (VAR_4 >= 0) {
  if (FUNC_4(VAR_6, VAR_4)) {
   FUNC_0("dir_llseek dropping %p content\n", VAR_3);
   FUNC_5(VAR_6);
  } else if (FUNC_3(VAR_4) && VAR_4 > VAR_3->f_pos) {


   VAR_6->dir_release_count = 0;
   VAR_6->readdir_cache_idx = -1;
  }

  if (VAR_4 != VAR_3->f_pos) {
   VAR_3->f_pos = VAR_4;
   VAR_3->f_version = 0;
   VAR_6->file_info.flags &= ~VAR_0;
  }
  VAR_8 = VAR_4;
 }
out:
 FUNC_2(VAR_7);
 return VAR_8;
}
