
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_shadow_map {int frozen_btnodes; int frozen_data; int frozen_buffers; } ;
struct nilfs_mdt_info {struct nilfs_shadow_map* mi_shadow; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;
 struct nilfs_mdt_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct inode*) ;

int FUNC_4(struct inode *VAR_0,
          struct nilfs_shadow_map *VAR_1)
{
 struct nilfs_mdt_info *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->frozen_buffers);
 FUNC_2(&VAR_1->frozen_data);
 FUNC_3(&VAR_1->frozen_data, VAR_0);
 FUNC_2(&VAR_1->frozen_btnodes);
 FUNC_3(&VAR_1->frozen_btnodes, VAR_0);
 VAR_2->mi_shadow = VAR_1;
 return 0;
}
