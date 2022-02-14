
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file {int open_flags; } ;
struct fuse_dirent {int type; int ino; int namelen; int name; } ;
struct file {struct fuse_file* private_data; } ;
struct dir_context {int pos; } ;


 int VAR_0 ;
 int FUNC_0 (struct dir_context*,int ,int ,int ,int ) ;
 int FUNC_1 (struct file*,struct fuse_dirent*,int ) ;

__attribute__((used)) static bool FUNC_2(struct file *VAR_1, struct dir_context *VAR_2,
        struct fuse_dirent *VAR_3)
{
 struct fuse_file *VAR_4 = VAR_1->private_data;

 if (VAR_4->open_flags & VAR_0)
  FUNC_1(VAR_1, VAR_3, VAR_2->pos);

 return FUNC_0(VAR_2, VAR_3->name, VAR_3->namelen, VAR_3->ino,
   VAR_3->type);
}
