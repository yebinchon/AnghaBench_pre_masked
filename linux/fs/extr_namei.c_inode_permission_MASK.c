
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*,int) ;
 int FUNC_4 (int ,struct inode*,int) ;
 int FUNC_5 (struct inode*,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct inode *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3->i_sb, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (FUNC_6(VAR_4 & VAR_2)) {



  if (FUNC_1(VAR_3))
   return -VAR_1;






  if (FUNC_0(VAR_3))
   return -VAR_0;
 }

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_5(VAR_3, VAR_4);
}
