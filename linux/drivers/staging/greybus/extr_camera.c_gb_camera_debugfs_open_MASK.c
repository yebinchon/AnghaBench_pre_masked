
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gb_camera_debugfs_entry {int name; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {void* private_data; TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_iname; } ;


 unsigned int FUNC_0 (struct gb_camera_debugfs_entry*) ;
 struct gb_camera_debugfs_entry* VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  const struct gb_camera_debugfs_entry *VAR_4 =
   &VAR_0[VAR_3];

  if (!FUNC_1(VAR_2->f_path.dentry->d_iname, VAR_4->name)) {
   VAR_2->private_data = (void *)VAR_4;
   break;
  }
 }

 return 0;
}
