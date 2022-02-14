
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; int i_mode; int i_ctime; } ;
struct gfs2_inode {scalar_t__ i_entries; } ;
struct dentry {int dummy; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct dentry const*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct gfs2_inode*,struct dentry const*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct gfs2_inode *VAR_0,
        const struct dentry *VAR_1)
{
 struct inode *VAR_2 = FUNC_4(VAR_1);
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_6(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3->i_entries = 0;
 VAR_2->i_ctime = FUNC_3(VAR_2);
 if (FUNC_1(VAR_2->i_mode))
  FUNC_2(VAR_2);
 else
  FUNC_5(VAR_2);
 FUNC_8(VAR_2);
 if (VAR_2->i_nlink == 0)
  FUNC_7(VAR_2);
 return 0;
}
