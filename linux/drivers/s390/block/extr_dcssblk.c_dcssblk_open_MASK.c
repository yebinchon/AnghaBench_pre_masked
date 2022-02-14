
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcssblk_dev_info {int use_count; } ;
struct block_device {int bd_block_size; TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct dcssblk_dev_info* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct dcssblk_dev_info *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->bd_disk->private_data;
 if (((void*)0) == VAR_3) {
  VAR_4 = -VAR_0;
  goto out;
 }
 FUNC_0(&VAR_3->use_count);
 VAR_1->bd_block_size = 4096;
 VAR_4 = 0;
out:
 return VAR_4;
}
