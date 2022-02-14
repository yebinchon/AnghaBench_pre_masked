
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_bdev; } ;
struct inode {int dummy; } ;
struct backing_dev_info {int * dev; } ;
struct TYPE_2__ {struct inode* bd_inode; } ;


 struct backing_dev_info* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0)
{
 struct inode *VAR_1 = VAR_0->s_bdev->bd_inode;
 struct backing_dev_info *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->dev == ((void*)0);
}
