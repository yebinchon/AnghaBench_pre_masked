
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mfg_id; scalar_t__ part_id; } ;
struct sdw_slave {TYPE_1__ id; } ;
struct sdw_driver {struct sdw_device_id* id_table; } ;
struct sdw_device_id {scalar_t__ mfg_id; scalar_t__ part_id; } ;



__attribute__((used)) static const struct sdw_device_id *
FUNC_0(struct sdw_slave *VAR_0, struct sdw_driver *VAR_1)
{
 const struct sdw_device_id *VAR_2 = VAR_1->id_table;

 while (VAR_2 && VAR_2->mfg_id) {
  if (VAR_0->id.mfg_id == VAR_2->mfg_id &&
      VAR_0->id.part_id == VAR_2->part_id)
   return VAR_2;
  VAR_2++;
 }

 return ((void*)0);
}
