
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_opflags; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*,struct inode*,int ,char*,size_t,int ) ;
 struct inode* FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int
FUNC_6(struct dentry *VAR_3,
     struct inode *VAR_4,
     char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 struct dentry *VAR_8 = FUNC_2(VAR_3);
 struct inode *VAR_9 = FUNC_1(VAR_8);

 if (!(VAR_9->i_opflags & VAR_2)) {
  VAR_7 = -VAR_1;
  goto out;
 }

 FUNC_4(VAR_9);
 VAR_7 = FUNC_0(VAR_8, VAR_9, VAR_0,
       VAR_5, VAR_6, 0);
 if (!VAR_7 && VAR_4)
  FUNC_3(VAR_4, VAR_9);
 FUNC_5(VAR_9);
out:
 return VAR_7;
}
