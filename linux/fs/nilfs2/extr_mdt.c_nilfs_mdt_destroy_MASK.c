
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_mdt_info {struct nilfs_mdt_info* mi_bgl; } ;
struct inode {int dummy; } ;


 struct nilfs_mdt_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nilfs_mdt_info*) ;

void FUNC_2(struct inode *VAR_0)
{
 struct nilfs_mdt_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->mi_bgl);
 FUNC_1(VAR_1);
}
