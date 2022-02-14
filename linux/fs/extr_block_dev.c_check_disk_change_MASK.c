
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct block_device_operations* fops; } ;
struct block_device_operations {int (* revalidate_disk ) (struct gendisk*) ;} ;
struct block_device {struct gendisk* bd_disk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct gendisk*,unsigned int) ;
 int FUNC_1 (struct block_device*,int) ;
 int FUNC_2 (struct gendisk*) ;

int FUNC_3(struct block_device *VAR_2)
{
 struct gendisk *VAR_3 = VAR_2->bd_disk;
 const struct block_device_operations *VAR_4 = VAR_3->fops;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1 |
       VAR_0);
 if (!(VAR_5 & VAR_1))
  return 0;

 FUNC_1(VAR_2, 1);
 if (VAR_4->revalidate_disk)
  VAR_4->revalidate_disk(VAR_2->bd_disk);
 return 1;
}
