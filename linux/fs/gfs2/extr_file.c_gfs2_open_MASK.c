
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;
struct gfs2_inode {int i_gl; TYPE_1__ i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct file {int dummy; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_2);
 struct gfs2_holder VAR_5;
 int VAR_6;
 bool VAR_7 = 0;

 if (FUNC_1(VAR_4->i_inode.i_mode)) {
  VAR_6 = FUNC_3(VAR_4->i_gl, VAR_1, VAR_0,
        &VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_7 = 1;
 }

 VAR_6 = FUNC_4(VAR_2, VAR_3);

 if (VAR_7)
  FUNC_2(&VAR_5);

 return VAR_6;
}
