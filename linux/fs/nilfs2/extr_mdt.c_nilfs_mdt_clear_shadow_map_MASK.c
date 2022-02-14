
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_shadow_map {int frozen_btnodes; int frozen_data; } ;
struct nilfs_mdt_info {int mi_sem; struct nilfs_shadow_map* mi_shadow; } ;
struct inode {int dummy; } ;


 struct nilfs_mdt_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nilfs_shadow_map*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_0)
{
 struct nilfs_mdt_info *VAR_1 = FUNC_0(VAR_0);
 struct nilfs_shadow_map *VAR_2 = VAR_1->mi_shadow;

 FUNC_1(&VAR_1->mi_sem);
 FUNC_2(VAR_2);
 FUNC_3(&VAR_2->frozen_data, 0);
 FUNC_3(&VAR_2->frozen_btnodes, 0);
 FUNC_4(&VAR_1->mi_sem);
}
