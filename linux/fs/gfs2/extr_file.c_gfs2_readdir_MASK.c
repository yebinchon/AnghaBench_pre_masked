
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {int f_ra; TYPE_1__* f_mapping; } ;
struct dir_context {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct dir_context*,int *) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct dir_context *VAR_2)
{
 struct inode *VAR_3 = VAR_1->f_mapping->host;
 struct gfs2_inode *VAR_4 = FUNC_0(VAR_3);
 struct gfs2_holder VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_4->i_gl, VAR_0, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_2, &VAR_1->f_ra);

 FUNC_2(&VAR_5);

 return VAR_6;
}
