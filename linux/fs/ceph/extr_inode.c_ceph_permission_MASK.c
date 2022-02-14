
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int ,int) ;
 int FUNC_1 (struct inode*,int) ;

int FUNC_2(struct inode *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 & VAR_2)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_3, VAR_0, 0);

 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 return VAR_5;
}
