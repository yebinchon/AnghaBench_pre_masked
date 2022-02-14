
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct inode*,int) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(struct inode *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7 & VAR_3)
  return -VAR_1;

 VAR_7 &= VAR_4 | VAR_5 | VAR_2;

 if (!VAR_7)
  return 0;

 if ((VAR_7 & VAR_2) && !FUNC_3(VAR_6))
  return -VAR_0;

 if (FUNC_0(VAR_6, VAR_7))
  return 0;

 VAR_8 = FUNC_4(VAR_6->i_sb, FUNC_2(VAR_6), VAR_7);

 if (!VAR_8)
  FUNC_1(VAR_6, VAR_7);

 return VAR_8;
}
