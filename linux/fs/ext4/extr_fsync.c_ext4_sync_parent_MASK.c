
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct dentry {int d_parent; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*,int ) ;
 scalar_t__ FUNC_4 (struct inode*,int ) ;
 struct inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1)
{
 struct dentry *VAR_2 = ((void*)0);
 struct inode *VAR_3;
 int VAR_4 = 0;

 if (!FUNC_4(VAR_1, VAR_0))
  return 0;
 VAR_1 = FUNC_5(VAR_1);
 while (FUNC_4(VAR_1, VAR_0)) {
  FUNC_3(VAR_1, VAR_0);
  VAR_2 = FUNC_0(VAR_1);
  if (!VAR_2)
   break;
  VAR_3 = FUNC_5(FUNC_1(VAR_2->d_parent));
  FUNC_2(VAR_2);
  if (!VAR_3)
   break;
  FUNC_6(VAR_1);
  VAR_1 = VAR_3;







  VAR_4 = FUNC_8(VAR_1->i_mapping);
  if (VAR_4)
   break;
  VAR_4 = FUNC_7(VAR_1, 1);
  if (VAR_4)
   break;
 }
 FUNC_6(VAR_1);
 return VAR_4;
}
