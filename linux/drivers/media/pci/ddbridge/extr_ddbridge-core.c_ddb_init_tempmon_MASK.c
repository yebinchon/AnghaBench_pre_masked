
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int regmapid; } ;
struct ddb_link {TYPE_2__* dev; int temp_lock; TYPE_1__ ids; struct ddb_info* info; } ;
struct ddb_info {scalar_t__ type; int tempmon_irq; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ddb_link*,int) ;

__attribute__((used)) static int FUNC_3(struct ddb_link *VAR_1)
{
 const struct ddb_info *VAR_2 = VAR_1->info;

 if (!VAR_2->tempmon_irq)
  return 0;
 if (VAR_2->type == VAR_0)
  if (VAR_1->ids.regmapid < 0x00010002)
   return 0;
 FUNC_1(&VAR_1->temp_lock);
 FUNC_0(VAR_1->dev->dev, "init_tempmon\n");
 return FUNC_2(VAR_1, 1);
}
