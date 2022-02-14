
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct inode*,int ,int*) ;
 int FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct dentry *VAR_1, umode_t VAR_2)
{
 int VAR_3;
 struct inode *VAR_4 = FUNC_2(VAR_0, VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_4, 0);
  FUNC_1(VAR_4);
  FUNC_0(VAR_1, VAR_4);
 }
 return VAR_3;
}
