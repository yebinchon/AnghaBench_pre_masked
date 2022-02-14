
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {int dummy; } ;
struct dasd_device {TYPE_2__* discipline; TYPE_1__* block; } ;
typedef int fmode_t ;
struct TYPE_4__ {int owner; } ;
struct TYPE_3__ {int open_count; } ;


 int FUNC_0 (int *) ;
 struct dasd_device* FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gendisk *VAR_0, fmode_t VAR_1)
{
 struct dasd_device *VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->block->open_count);
  FUNC_3(VAR_2->discipline->owner);
  FUNC_2(VAR_2);
 }
}
