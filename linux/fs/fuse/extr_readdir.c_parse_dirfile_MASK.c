
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_dirent {scalar_t__ namelen; int off; int name; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct fuse_dirent*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct file*,struct dir_context*,struct fuse_dirent*) ;
 int * FUNC_2 (int ,char,scalar_t__) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, size_t VAR_4, struct file *VAR_5,
    struct dir_context *VAR_6)
{
 while (VAR_4 >= VAR_2) {
  struct fuse_dirent *VAR_7 = (struct fuse_dirent *) VAR_3;
  size_t VAR_8 = FUNC_0(VAR_7);
  if (!VAR_7->namelen || VAR_7->namelen > VAR_1)
   return -VAR_0;
  if (VAR_8 > VAR_4)
   break;
  if (FUNC_2(VAR_7->name, '/', VAR_7->namelen) != ((void*)0))
   return -VAR_0;

  if (!FUNC_1(VAR_5, VAR_6, VAR_7))
   break;

  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;
  VAR_6->pos = VAR_7->off;
 }

 return 0;
}
