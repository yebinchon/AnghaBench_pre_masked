
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; int i_flags; int i_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (struct super_block*,unsigned long,int ,int ,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct inode*) ;

struct inode *FUNC_6(struct super_block *VAR_8, struct dentry *VAR_9)
{
 struct inode *VAR_10 = FUNC_1(VAR_9);
 struct inode *VAR_11;

 if (!FUNC_2(VAR_9))
  return FUNC_0(-VAR_2);

 VAR_11 = FUNC_3(VAR_8, (unsigned long) VAR_10, VAR_7,
       VAR_6, VAR_10);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 if (!(VAR_11->i_state & VAR_3)) {

  FUNC_4(VAR_11);
  return FUNC_0(-VAR_0);
 }

 VAR_11->i_mode = VAR_5;
 VAR_11->i_flags = VAR_4;
 FUNC_5(VAR_11);

 return VAR_11;
}
