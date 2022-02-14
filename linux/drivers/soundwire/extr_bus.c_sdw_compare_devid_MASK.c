
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdw_slave_id {scalar_t__ unique_id; scalar_t__ mfg_id; scalar_t__ part_id; scalar_t__ class_id; } ;
struct TYPE_2__ {scalar_t__ unique_id; scalar_t__ mfg_id; scalar_t__ part_id; scalar_t__ class_id; } ;
struct sdw_slave {TYPE_1__ id; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sdw_slave *VAR_1, struct sdw_slave_id VAR_2)
{
 if (VAR_1->id.unique_id != VAR_2.unique_id ||
     VAR_1->id.mfg_id != VAR_2.mfg_id ||
     VAR_1->id.part_id != VAR_2.part_id ||
     VAR_1->id.class_id != VAR_2.class_id)
  return -VAR_0;

 return 0;
}
