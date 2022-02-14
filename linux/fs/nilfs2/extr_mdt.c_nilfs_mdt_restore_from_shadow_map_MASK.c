
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_shadow_map {int bmap_store; int frozen_btnodes; int frozen_data; } ;
struct nilfs_mdt_info {int mi_sem; scalar_t__ mi_palloc_cache; struct nilfs_shadow_map* mi_shadow; } ;
struct nilfs_inode_info {int i_bmap; int i_btnode_cache; } ;
struct inode {int * i_mapping; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 struct nilfs_mdt_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct inode *VAR_0)
{
 struct nilfs_mdt_info *VAR_1 = FUNC_1(VAR_0);
 struct nilfs_inode_info *VAR_2 = FUNC_0(VAR_0);
 struct nilfs_shadow_map *VAR_3 = VAR_1->mi_shadow;

 FUNC_2(&VAR_1->mi_sem);

 if (VAR_1->mi_palloc_cache)
  FUNC_6(VAR_0);

 FUNC_4(VAR_0->i_mapping, 1);
 FUNC_5(VAR_0->i_mapping, &VAR_3->frozen_data);

 FUNC_4(&VAR_2->i_btnode_cache, 1);
 FUNC_5(&VAR_2->i_btnode_cache, &VAR_3->frozen_btnodes);

 FUNC_3(VAR_2->i_bmap, &VAR_3->bmap_store);

 FUNC_7(&VAR_1->mi_sem);
}
