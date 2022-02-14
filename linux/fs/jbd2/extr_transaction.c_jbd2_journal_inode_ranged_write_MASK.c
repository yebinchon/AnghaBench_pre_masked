
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jbd2_inode {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct jbd2_inode*,int,scalar_t__,scalar_t__) ;

int FUNC_1(handle_t *VAR_2,
  struct jbd2_inode *VAR_3, loff_t VAR_4, loff_t VAR_5)
{
 return FUNC_0(VAR_2, VAR_3,
   VAR_1 | VAR_0, VAR_4,
   VAR_4 + VAR_5 - 1);
}
