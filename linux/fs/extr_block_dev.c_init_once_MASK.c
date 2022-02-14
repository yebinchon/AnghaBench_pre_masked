
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_fsfreeze_mutex; int * bd_bdi; int bd_holder_disks; int bd_list; int bd_mutex; } ;
struct bdev_inode {int vfs_inode; struct block_device bdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct block_device*,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct bdev_inode *VAR_2 = (struct bdev_inode *) VAR_1;
 struct block_device *VAR_3 = &VAR_2->bdev;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 FUNC_3(&VAR_3->bd_mutex);
 FUNC_0(&VAR_3->bd_list);



 VAR_3->bd_bdi = &VAR_0;
 FUNC_1(&VAR_2->vfs_inode);

 FUNC_3(&VAR_3->bd_fsfreeze_mutex);
}
