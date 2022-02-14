
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hd_struct {int dummy; } ;
struct gendisk {int dummy; } ;
struct disk_part_iter {int dummy; } ;
struct dasd_device {int features; TYPE_4__* block; int state; } ;
struct TYPE_8__ {TYPE_1__* bdev; struct gendisk* gdp; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {struct gendisk* bd_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct disk_part_iter*) ;
 int FUNC_2 (struct disk_part_iter*,struct gendisk*,int ) ;
 struct hd_struct* FUNC_3 (struct disk_part_iter*) ;
 TYPE_3__* FUNC_4 (struct gendisk*) ;
 int FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (struct hd_struct*) ;

__attribute__((used)) static int
FUNC_7(struct dasd_device * VAR_4)
{
 struct gendisk *VAR_5;
 struct disk_part_iter VAR_6;
 struct hd_struct *VAR_7;

 VAR_4->state = VAR_1;
 if (VAR_4->block) {
  FUNC_0(VAR_4->block);
  if ((VAR_4->features & VAR_0)) {
   VAR_5 = VAR_4->block->gdp;
   FUNC_5(&FUNC_4(VAR_5)->kobj, VAR_3);
   return 0;
  }
  VAR_5 = VAR_4->block->bdev->bd_disk;
  FUNC_2(&VAR_6, VAR_5, VAR_2);
  while ((VAR_7 = FUNC_3(&VAR_6)))
   FUNC_5(&FUNC_6(VAR_7)->kobj, VAR_3);
  FUNC_1(&VAR_6);
 }
 return 0;
}
