
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_6__ {int mnt; } ;
struct fs_struct {int lock; TYPE_2__ pwd; } ;
struct fd {TYPE_3__* file; } ;
struct TYPE_8__ {struct fs_struct* fs; } ;
struct TYPE_5__ {int mnt; } ;
struct TYPE_7__ {TYPE_1__ f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfsmount* FUNC_0 (int ) ;
 TYPE_4__* VAR_2 ;
 struct fd FUNC_1 (int) ;
 int FUNC_2 (struct fd) ;
 struct vfsmount* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct vfsmount *FUNC_6(int VAR_3)
{
 struct vfsmount *VAR_4;

 if (VAR_3 == VAR_0) {
  struct fs_struct *VAR_5 = VAR_2->fs;
  FUNC_4(&VAR_5->lock);
  VAR_4 = FUNC_3(VAR_5->pwd.mnt);
  FUNC_5(&VAR_5->lock);
 } else {
  struct fd VAR_6 = FUNC_1(VAR_3);
  if (!VAR_6.file)
   return FUNC_0(-VAR_1);
  VAR_4 = FUNC_3(VAR_6.file->f_path.mnt);
  FUNC_2(VAR_6);
 }
 return VAR_4;
}
