
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; int hw_max_sectors; } ;
struct se_device {int queue_depth; TYPE_1__ dev_attrib; scalar_t__ export_count; } ;


 scalar_t__ FUNC_0 (char*,char*,...) ;

void FUNC_1(
 struct se_device *VAR_0,
 char *VAR_1,
 int *VAR_2)
{
 *VAR_2 += FUNC_0(VAR_1 + *VAR_2, "Status: ");
 if (VAR_0->export_count)
  *VAR_2 += FUNC_0(VAR_1 + *VAR_2, "ACTIVATED");
 else
  *VAR_2 += FUNC_0(VAR_1 + *VAR_2, "DEACTIVATED");

 *VAR_2 += FUNC_0(VAR_1 + *VAR_2, "  Max Queue Depth: %d", VAR_0->queue_depth);
 *VAR_2 += FUNC_0(VAR_1 + *VAR_2, "  SectorSize: %u  HwMaxSectors: %u\n",
  VAR_0->dev_attrib.block_size,
  VAR_0->dev_attrib.hw_max_sectors);
 *VAR_2 += FUNC_0(VAR_1 + *VAR_2, "        ");
}
