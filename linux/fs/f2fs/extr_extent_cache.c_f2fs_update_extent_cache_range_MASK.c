
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnode_of_data {int inode; } ;
typedef int pgoff_t ;
typedef int block_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;

void FUNC_2(struct dnode_of_data *VAR_0,
    pgoff_t VAR_1, block_t VAR_2, unsigned int VAR_3)

{
 if (!FUNC_0(VAR_0->inode))
  return;

 FUNC_1(VAR_0->inode, VAR_1, VAR_2, VAR_3);
}
