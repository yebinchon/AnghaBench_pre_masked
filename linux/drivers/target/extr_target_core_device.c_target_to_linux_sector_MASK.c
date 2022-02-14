
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
typedef int sector_t ;



sector_t FUNC_0(struct se_device *VAR_0, sector_t VAR_1)
{
 switch (VAR_0->dev_attrib.block_size) {
 case 4096:
  return VAR_1 << 3;
 case 2048:
  return VAR_1 << 2;
 case 1024:
  return VAR_1 << 1;
 default:
  return VAR_1;
 }
}
