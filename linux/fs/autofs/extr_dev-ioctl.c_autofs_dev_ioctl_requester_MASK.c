
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {int dentry; } ;
struct file {int dummy; } ;
struct autofs_sb_info {int fs_lock; TYPE_1__* sb; } ;
struct autofs_info {int gid; int uid; } ;
struct TYPE_4__ {int uid; int gid; } ;
struct autofs_dev_ioctl {TYPE_2__ requester; int path; } ;
typedef int dev_t ;
struct TYPE_3__ {int s_dev; } ;


 int VAR_0 ;
 struct autofs_info* FUNC_0 (int ) ;
 int FUNC_1 (struct path*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct path*,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct path*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2,
          struct autofs_sb_info *VAR_3,
          struct autofs_dev_ioctl *VAR_4)
{
 struct autofs_info *VAR_5;
 struct path VAR_6;
 dev_t VAR_7;
 int VAR_8 = -VAR_0;



 VAR_7 = VAR_3->sb->s_dev;

 VAR_4->requester.uid = VAR_4->requester.gid = -1;

 VAR_8 = FUNC_3(VAR_4->path, &VAR_6, VAR_1, &VAR_7);
 if (VAR_8)
  goto out;

 VAR_5 = FUNC_0(VAR_6.dentry);
 if (VAR_5) {
  VAR_8 = 0;
  FUNC_1(&VAR_6, 0);
  FUNC_7(&VAR_3->fs_lock);
  VAR_4->requester.uid =
   FUNC_5(FUNC_2(), VAR_5->uid);
  VAR_4->requester.gid =
   FUNC_4(FUNC_2(), VAR_5->gid);
  FUNC_8(&VAR_3->fs_lock);
 }
 FUNC_6(&VAR_6);
out:
 return VAR_8;
}
