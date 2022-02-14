
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int dummy; } ;
struct gfs2_inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int host; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_inode*) ;
 int FUNC_2 (struct file*,int ,size_t) ;
 int FUNC_3 (struct pipe_inode_info*,struct file*,int *,size_t,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct pipe_inode_info *VAR_0,
          struct file *VAR_1, loff_t *VAR_2,
          size_t VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_1->f_mapping->host);

 VAR_5 = FUNC_1(VAR_6);
 if (VAR_5)
  return (ssize_t)VAR_5;

 FUNC_2(VAR_1, *VAR_2, VAR_3);

 return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
