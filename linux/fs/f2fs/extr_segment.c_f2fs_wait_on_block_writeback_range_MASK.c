
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ block_t ;


 int FUNC_0 (struct inode*,scalar_t__) ;

void FUNC_1(struct inode *VAR_0, block_t VAR_1,
        block_t VAR_2)
{
 block_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, VAR_1 + VAR_3);
}
