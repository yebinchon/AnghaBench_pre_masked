
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sdw_slave_id {int sdw_version; int unique_id; int mfg_id; int part_id; int class_id; } ;
struct sdw_bus {int dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int,...) ;

void FUNC_2(struct sdw_bus *VAR_0,
     u64 VAR_1, struct sdw_slave_id *VAR_2)
{
 FUNC_1(VAR_0->dev, "SDW Slave Addr: %llx\n", VAR_1);
 VAR_2->sdw_version = (VAR_1 >> 44) & FUNC_0(3, 0);
 VAR_2->unique_id = (VAR_1 >> 40) & FUNC_0(3, 0);
 VAR_2->mfg_id = (VAR_1 >> 24) & FUNC_0(15, 0);
 VAR_2->part_id = (VAR_1 >> 8) & FUNC_0(15, 0);
 VAR_2->class_id = VAR_1 & FUNC_0(7, 0);

 FUNC_1(VAR_0->dev,
  "SDW Slave class_id %x, part_id %x, mfg_id %x, unique_id %x, version %x\n",
    VAR_2->class_id, VAR_2->part_id, VAR_2->mfg_id,
    VAR_2->unique_id, VAR_2->sdw_version);
}
