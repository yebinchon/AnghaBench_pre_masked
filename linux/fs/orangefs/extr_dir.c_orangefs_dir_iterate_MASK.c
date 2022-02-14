
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orangefs_inode_s {int dummy; } ;
struct orangefs_dir {int error; scalar_t__ token; scalar_t__ end; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {struct orangefs_dir* private_data; TYPE_1__ f_path; } ;
struct dir_context {scalar_t__ pos; } ;
struct dentry {int d_inode; } ;


 int VAR_0 ;
 struct orangefs_inode_s* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct file*,struct dir_context*) ;
 int FUNC_2 (struct file*,struct dir_context*) ;
 int FUNC_3 (struct orangefs_inode_s*,struct orangefs_dir*,struct dentry*,struct dir_context*) ;
 int FUNC_4 (struct orangefs_inode_s*,struct orangefs_dir*,struct dentry*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4,
    struct dir_context *VAR_5)
{
 struct orangefs_inode_s *VAR_6;
 struct orangefs_dir *VAR_7;
 struct dentry *VAR_8;
 int VAR_9;

 VAR_8 = VAR_4->f_path.dentry;
 VAR_6 = FUNC_0(VAR_8->d_inode);
 VAR_7 = VAR_4->private_data;

 if (VAR_7->error)
  return VAR_7->error;

 if (VAR_5->pos == 0) {
  if (!FUNC_1(VAR_4, VAR_5))
   return 0;
  VAR_5->pos++;
 }
 if (VAR_5->pos == 1) {
  if (!FUNC_2(VAR_4, VAR_5))
   return 0;
  VAR_5->pos = 1 << VAR_3;
 }





 if ((VAR_5->pos & VAR_2) == 0)
  return -VAR_0;

 VAR_9 = 0;





 while (VAR_7->token != VAR_1 &&
     VAR_5->pos > VAR_7->end) {
  VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_8);
  if (VAR_9)
   return VAR_9;
 }
 if (VAR_7->token == VAR_1 && VAR_5->pos > VAR_7->end)
  return -VAR_0;


 if (VAR_5->pos < VAR_7->end) {
  VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_5);
  if (VAR_9)
   return VAR_9;
 }


 if (VAR_7->token != VAR_1) {
  VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_5);
 }

 return VAR_9;
}
