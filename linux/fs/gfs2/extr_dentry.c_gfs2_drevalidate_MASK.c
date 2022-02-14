
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ls_ops; } ;
struct gfs2_sbd {TYPE_2__ sd_lockstruct; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_3__ {int * lm_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct inode* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,int *,struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_9 (struct inode*) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_4, unsigned int VAR_5)
{
 struct dentry *VAR_6;
 struct gfs2_sbd *VAR_7;
 struct gfs2_inode *VAR_8;
 struct inode *VAR_9;
 struct gfs2_holder VAR_10;
 struct gfs2_inode *VAR_11 = ((void*)0);
 int VAR_12, VAR_13 = 0;
 int VAR_14 = 0;

 if (VAR_5 & VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4);
 VAR_7 = FUNC_1(FUNC_2(VAR_6));
 VAR_8 = FUNC_0(FUNC_2(VAR_6));
 VAR_9 = FUNC_2(VAR_4);

 if (VAR_9) {
  if (FUNC_9(VAR_9))
   goto out;
  VAR_11 = FUNC_0(VAR_9);
 }

 if (VAR_7->sd_lockstruct.ls_ops->lm_mount == ((void*)0)) {
  VAR_13 = 1;
  goto out;
 }

 VAR_14 = (FUNC_7(VAR_8->i_gl) != ((void*)0));
 if (!VAR_14) {
  VAR_12 = FUNC_8(VAR_8->i_gl, VAR_2, 0, &VAR_10);
  if (VAR_12)
   goto out;
 }

 VAR_12 = FUNC_5(FUNC_2(VAR_6), &VAR_4->d_name, VAR_11);
 VAR_13 = VAR_9 ? !VAR_12 : (VAR_12 == -VAR_1);

 if (!VAR_14)
  FUNC_6(&VAR_10);
out:
 FUNC_4(VAR_6);
 return VAR_13;
}
