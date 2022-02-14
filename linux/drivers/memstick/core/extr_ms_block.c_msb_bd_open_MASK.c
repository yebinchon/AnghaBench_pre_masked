
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int usage_count; scalar_t__ card; } ;
struct gendisk {struct msb_data* private_data; } ;
struct block_device {struct gendisk* bd_disk; } ;
typedef int fmode_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_1, fmode_t VAR_2)
{
 struct gendisk *VAR_3 = VAR_1->bd_disk;
 struct msb_data *VAR_4 = VAR_3->private_data;

 FUNC_0("block device open");

 FUNC_1(&VAR_0);

 if (VAR_4 && VAR_4->card)
  VAR_4->usage_count++;

 FUNC_2(&VAR_0);
 return 0;
}
