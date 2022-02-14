
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {unsigned long cmd_mask; } ;



unsigned long FUNC_0(struct nvdimm *VAR_0)
{
 return VAR_0->cmd_mask;
}
