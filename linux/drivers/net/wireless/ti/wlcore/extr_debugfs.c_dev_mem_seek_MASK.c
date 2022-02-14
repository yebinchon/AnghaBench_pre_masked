
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int,int) ;

__attribute__((used)) static loff_t FUNC_1(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{

 if (VAR_2 % 4)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
