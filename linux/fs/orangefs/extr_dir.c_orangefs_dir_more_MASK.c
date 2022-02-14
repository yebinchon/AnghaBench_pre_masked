
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_kernel_op_s {int dummy; } ;
struct orangefs_inode_s {int dummy; } ;
struct orangefs_dir {int error; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct orangefs_inode_s*,struct orangefs_dir*,struct dentry*,struct orangefs_kernel_op_s*) ;
 struct orangefs_kernel_op_s* FUNC_1 (int ) ;
 int FUNC_2 (struct orangefs_kernel_op_s*) ;
 int FUNC_3 (struct orangefs_dir*,struct orangefs_kernel_op_s*) ;

__attribute__((used)) static int FUNC_4(struct orangefs_inode_s *VAR_2,
    struct orangefs_dir *VAR_3, struct dentry *VAR_4)
{
 struct orangefs_kernel_op_s *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_1);
 if (!VAR_5) {
  VAR_3->error = -VAR_0;
  return -VAR_0;
 }
 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  VAR_3->error = VAR_6;
  goto out;
 }
 VAR_6 = FUNC_3(VAR_3, VAR_5);
 if (VAR_6) {
  VAR_3->error = VAR_6;
  goto out;
 }

 VAR_3->error = 0;
out:
 FUNC_2(VAR_5);
 return VAR_3->error;
}
