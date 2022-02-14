
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* block; } ;
struct block_device {int bd_mutex; int bd_inode; int bd_disk; } ;
typedef int loff_t ;
struct TYPE_2__ {int gdp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct block_device *VAR_3)
{
 struct dasd_device *VAR_4;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_4 = FUNC_1(VAR_3->bd_disk);
 if (!VAR_4)
  return -VAR_2;

 FUNC_2(VAR_4);

 FUNC_6(&VAR_3->bd_mutex);
 FUNC_5(VAR_3->bd_inode,
       (loff_t)FUNC_4(VAR_4->block->gdp) << 9);
 FUNC_7(&VAR_3->bd_mutex);
 FUNC_3(VAR_4);
 return 0;
}
