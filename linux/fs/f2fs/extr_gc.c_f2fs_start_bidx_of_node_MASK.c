
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ block_t ;


 unsigned int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_0 ;

block_t FUNC_2(unsigned int VAR_1, struct inode *VAR_2)
{
 unsigned int VAR_3 = 2 * VAR_0 + 4;
 unsigned int VAR_4;

 if (VAR_1 == 0)
  return 0;

 if (VAR_1 <= 2) {
  VAR_4 = VAR_1 - 1;
 } else if (VAR_1 <= VAR_3) {
  int VAR_5 = (VAR_1 - 4) / (VAR_0 + 1);
  VAR_4 = VAR_1 - 2 - VAR_5;
 } else {
  int VAR_6 = (VAR_1 - VAR_3 - 3) / (VAR_0 + 1);
  VAR_4 = VAR_1 - 5 - VAR_6;
 }
 return VAR_4 * FUNC_0(VAR_2) + FUNC_1(VAR_2);
}
