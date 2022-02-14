
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int b_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct nilfs_bmap*) ;
 int FUNC_1 (struct nilfs_bmap*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3(struct nilfs_bmap *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_1);

 if (FUNC_2(FUNC_1(VAR_1), VAR_1->b_inode))
  VAR_2 = -VAR_0;
 return VAR_2;
}
