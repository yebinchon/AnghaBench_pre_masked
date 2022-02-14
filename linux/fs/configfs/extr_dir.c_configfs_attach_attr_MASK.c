
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_fop; scalar_t__ i_size; } ;
struct dentry {int d_fsdata; } ;
struct configfs_dirent {int s_type; struct dentry* s_dentry; struct configfs_attribute* s_element; } ;
struct configfs_attribute {int ca_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_2 (struct dentry*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct configfs_dirent*) ;
 int FUNC_4 (struct configfs_dirent*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct configfs_dirent * VAR_7, struct dentry * VAR_8)
{
 struct configfs_attribute * VAR_9 = VAR_7->s_element;
 struct inode *VAR_10;

 FUNC_6(&VAR_5);
 VAR_8->d_fsdata = FUNC_3(VAR_7);
 VAR_7->s_dentry = VAR_8;
 FUNC_7(&VAR_5);

 VAR_10 = FUNC_2(VAR_8, (VAR_9->ca_mode & VAR_2) | VAR_3);
 if (FUNC_0(VAR_10)) {
  FUNC_4(VAR_7);
  return FUNC_1(VAR_10);
 }
 if (VAR_7->s_type & VAR_0) {
  VAR_10->i_size = 0;
  VAR_10->i_fop = &VAR_4;
 } else {
  VAR_10->i_size = VAR_1;
  VAR_10->i_fop = &VAR_6;
 }
 FUNC_5(VAR_8, VAR_10);
 return 0;
}
