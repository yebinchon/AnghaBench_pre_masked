
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int d_name; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_glock {int dummy; } ;
struct file {int dummy; } ;
struct dentry {int i_mode; int d_name; } ;
struct TYPE_2__ {struct gfs2_glock* i_gl; } ;


 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int *) ;
 struct inode* FUNC_6 (struct inode*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct file*,struct inode*,int ) ;
 int FUNC_9 (struct gfs2_holder*) ;
 int FUNC_10 (struct gfs2_glock*,int ,int ,struct gfs2_holder*) ;
 struct inode* FUNC_11 (struct inode*,int *,int ) ;
 int VAR_2 ;
 int FUNC_12 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_13(struct inode *VAR_3, struct dentry *VAR_4,
        struct file *VAR_5)
{
 struct inode *VAR_6;
 struct dentry *VAR_7;
 struct gfs2_holder VAR_8;
 struct gfs2_glock *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_11(VAR_3, &VAR_4->d_name, 0);
 if (VAR_6 == ((void*)0)) {
  FUNC_5(VAR_4, ((void*)0));
  return ((void*)0);
 }
 if (FUNC_3(VAR_6))
  return FUNC_0(VAR_6);

 VAR_9 = FUNC_2(VAR_6)->i_gl;
 VAR_10 = FUNC_10(VAR_9, VAR_1, VAR_0, &VAR_8);
 if (VAR_10) {
  FUNC_12(VAR_6);
  return FUNC_1(VAR_10);
 }

 VAR_7 = FUNC_6(VAR_6, VAR_4);
 if (FUNC_3(VAR_7)) {
  FUNC_9(&VAR_8);
  return VAR_7;
 }
 if (VAR_5 && FUNC_4(VAR_6->i_mode))
  VAR_10 = FUNC_8(VAR_5, VAR_4, VAR_2);

 FUNC_9(&VAR_8);
 if (VAR_10) {
  FUNC_7(VAR_7);
  return FUNC_1(VAR_10);
 }
 return VAR_7;
}
