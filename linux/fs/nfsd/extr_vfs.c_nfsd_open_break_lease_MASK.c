
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct inode*,unsigned int) ;

int FUNC_1(struct inode *VAR_5, int VAR_6)
{
 unsigned int VAR_7;

 if (VAR_6 & VAR_0)
  return 0;
 VAR_7 = (VAR_6 & VAR_1) ? VAR_4 : VAR_3;
 return FUNC_0(VAR_5, VAR_7 | VAR_2);
}
