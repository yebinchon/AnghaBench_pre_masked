
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
typedef unsigned int loff_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, loff_t VAR_1, unsigned VAR_2)
{
 if (FUNC_1(FUNC_0(VAR_0->i_sb)))
  return 1;

 if (VAR_1 + VAR_2 <= 0x7fffffffULL)
  return 1;


 return 2;
}
