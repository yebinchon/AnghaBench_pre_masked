
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int nodeid; } ;
struct fuse_dirent {scalar_t__ namelen; int off; int name; } ;
struct fuse_direntplus {TYPE_1__ entry_out; struct fuse_dirent dirent; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct fuse_direntplus*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct file*,struct fuse_direntplus*,int ) ;
 int FUNC_2 (struct file*,struct dir_context*,struct fuse_dirent*) ;
 int FUNC_3 (struct file*,int ) ;
 int * FUNC_4 (int ,char,scalar_t__) ;

__attribute__((used)) static int FUNC_5(char *VAR_3, size_t VAR_4, struct file *VAR_5,
        struct dir_context *VAR_6, u64 VAR_7)
{
 struct fuse_direntplus *VAR_8;
 struct fuse_dirent *VAR_9;
 size_t VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 while (VAR_4 >= VAR_2) {
  VAR_8 = (struct fuse_direntplus *) VAR_3;
  VAR_9 = &VAR_8->dirent;
  VAR_10 = FUNC_0(VAR_8);

  if (!VAR_9->namelen || VAR_9->namelen > VAR_1)
   return -VAR_0;
  if (VAR_10 > VAR_4)
   break;
  if (FUNC_4(VAR_9->name, '/', VAR_9->namelen) != ((void*)0))
   return -VAR_0;

  if (!VAR_11) {






   VAR_11 = !FUNC_2(VAR_5, VAR_6, VAR_9);
   if (!VAR_11)
    VAR_6->pos = VAR_9->off;
  }

  VAR_3 += VAR_10;
  VAR_4 -= VAR_10;

  VAR_12 = FUNC_1(VAR_5, VAR_8, VAR_7);
  if (VAR_12)
   FUNC_3(VAR_5, VAR_8->entry_out.nodeid);
 }

 return 0;
}
