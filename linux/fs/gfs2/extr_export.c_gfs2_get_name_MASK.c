
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct gfs2_inode {int i_gl; int i_no_formal_ino; int i_no_addr; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_4__ {int actor; } ;
struct TYPE_3__ {int no_formal_ino; int no_addr; } ;
struct get_name_filldir {char* name; TYPE_2__ ctx; TYPE_1__ inum; } ;
struct file_ra_state {int start; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_3 (struct inode*,TYPE_2__*,struct file_ra_state*) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_4, char *VAR_5,
    struct dentry *VAR_6)
{
 struct inode *VAR_7 = FUNC_2(VAR_4);
 struct inode *VAR_8 = FUNC_2(VAR_6);
 struct gfs2_inode *VAR_9, *VAR_10;
 struct get_name_filldir VAR_11 = {
  .ctx.actor = VAR_3,
  .name = VAR_5
 };
 struct gfs2_holder VAR_12;
 int VAR_13;
 struct file_ra_state VAR_14 = { .start = 0 };

 if (!VAR_7)
  return -VAR_0;

 if (!FUNC_1(VAR_7->i_mode) || !VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_7);
 VAR_10 = FUNC_0(VAR_8);

 *VAR_5 = 0;
 VAR_11.inum.no_addr = VAR_10->i_no_addr;
 VAR_11.inum.no_formal_ino = VAR_10->i_no_formal_ino;

 VAR_13 = FUNC_5(VAR_9->i_gl, VAR_2, 0, &VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_7, &VAR_11.ctx, &VAR_14);

 FUNC_4(&VAR_12);

 if (!VAR_13 && !*VAR_5)
  VAR_13 = -VAR_1;

 return VAR_13;
}
