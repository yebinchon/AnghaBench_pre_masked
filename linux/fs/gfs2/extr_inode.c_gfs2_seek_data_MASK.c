
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {TYPE_2__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {struct inode* host; } ;
struct TYPE_3__ {int s_maxbytes; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct gfs2_holder*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,struct gfs2_holder*) ;
 int VAR_1 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (struct file*,scalar_t__,int ) ;

loff_t FUNC_7(struct file *VAR_2, loff_t VAR_3)
{
 struct inode *VAR_4 = VAR_2->f_mapping->host;
 struct gfs2_inode *VAR_5 = FUNC_0(VAR_4);
 struct gfs2_holder VAR_6;
 loff_t VAR_7;

 FUNC_3(VAR_4);
 VAR_7 = FUNC_2(VAR_5->i_gl, VAR_0, 0, &VAR_6);
 if (!VAR_7)
  VAR_7 = FUNC_5(VAR_4, VAR_3, &VAR_1);
 FUNC_1(&VAR_6);
 FUNC_4(VAR_4);

 if (VAR_7 < 0)
  return VAR_7;
 return FUNC_6(VAR_2, VAR_7, VAR_4->i_sb->s_maxbytes);
}
