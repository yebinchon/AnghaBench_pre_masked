
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sm_ftl {int readonly; int zone_count; int smallpagenand; int zone_size; int max_lba; int block_size; int cylinders; int heads; int sectors; } ;
struct mtd_info {int size; scalar_t__ type; int writesize; int erasesize; scalar_t__ oobsize; } ;
struct TYPE_3__ {int size; int cyl; int head; int sec; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct sm_ftl *VAR_7, struct mtd_info *VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_8->size / (1024 * 1024);

 VAR_7->readonly = VAR_8->type == VAR_1;


 VAR_7->zone_count = 1;
 VAR_7->smallpagenand = 0;

 switch (VAR_10) {
 case 1:

  VAR_7->zone_size = 256;
  VAR_7->max_lba = 250;
  VAR_7->block_size = 8 * VAR_3;
  VAR_7->smallpagenand = 1;

  break;
 case 2:

  if (VAR_8->writesize == VAR_5) {
   VAR_7->zone_size = 512;
   VAR_7->max_lba = 500;
   VAR_7->block_size = 8 * VAR_3;
   VAR_7->smallpagenand = 1;

  } else {

   if (!VAR_7->readonly)
    return -VAR_0;

   VAR_7->zone_size = 256;
   VAR_7->max_lba = 250;
   VAR_7->block_size = 16 * VAR_3;
  }
  break;
 case 4:

  VAR_7->zone_size = 512;
  VAR_7->max_lba = 500;
  VAR_7->block_size = 16 * VAR_3;
  break;
 case 8:

  VAR_7->zone_size = 1024;
  VAR_7->max_lba = 1000;
  VAR_7->block_size = 16 * VAR_3;
 }



 if (VAR_10 >= 16) {
  VAR_7->zone_count = VAR_10 / 16;
  VAR_7->zone_size = 1024;
  VAR_7->max_lba = 1000;
  VAR_7->block_size = 32 * VAR_3;
 }


 if (VAR_8->erasesize > VAR_7->block_size)
  return -VAR_0;

 if (VAR_8->writesize > VAR_3)
  return -VAR_0;

 if (VAR_7->smallpagenand && VAR_8->oobsize < VAR_4)
  return -VAR_0;

 if (!VAR_7->smallpagenand && VAR_8->oobsize < VAR_2)
  return -VAR_0;


 if (!FUNC_1(VAR_8))
  return -VAR_0;


 for (VAR_9 = 0 ; VAR_9 < FUNC_0(VAR_6) ; VAR_9++) {
  if (VAR_6[VAR_9].size == VAR_10) {
   VAR_7->cylinders = VAR_6[VAR_9].cyl;
   VAR_7->heads = VAR_6[VAR_9].head;
   VAR_7->sectors = VAR_6[VAR_9].sec;
   return 0;
  }
 }

 FUNC_2("media has unknown size : %dMiB", VAR_10);
 VAR_7->cylinders = 985;
 VAR_7->heads = 33;
 VAR_7->sectors = 63;
 return 0;
}
