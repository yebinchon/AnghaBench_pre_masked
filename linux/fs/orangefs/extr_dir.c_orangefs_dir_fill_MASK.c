
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_inode_s {int dummy; } ;
struct orangefs_dir_part {struct orangefs_dir_part* next; scalar_t__ len; } ;
struct orangefs_dir {int error; struct orangefs_dir_part* part; } ;
struct dir_context {int pos; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct orangefs_dir_part*,struct dir_context*) ;

__attribute__((used)) static int FUNC_1(struct orangefs_inode_s *VAR_3,
    struct orangefs_dir *VAR_4, struct dentry *VAR_5,
    struct dir_context *VAR_6)
{
 struct orangefs_dir_part *VAR_7;
 size_t VAR_8;

 VAR_8 = ((VAR_6->pos & VAR_1) >> VAR_2) - 1;

 VAR_7 = VAR_4->part;
 while (VAR_7->next && VAR_8) {
  VAR_8--;
  VAR_7 = VAR_7->next;
 }

 if (VAR_8) {
  VAR_4->error = -VAR_0;
  return -VAR_0;
 }

 while (VAR_7 && VAR_7->len) {
  int VAR_9;
  VAR_9 = FUNC_0(VAR_7, VAR_6);
  if (VAR_9 < 0) {
   VAR_4->error = VAR_9;
   return VAR_9;
  } else if (VAR_9 == 0) {

   break;
  } else {



   VAR_6->pos = (VAR_6->pos & VAR_1) +
       (1 << VAR_2);
   VAR_7 = VAR_7->next;
  }
 }
 return 0;
}
