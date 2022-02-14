
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prcmu_fw_version {int dummy; } ;
struct TYPE_2__ {struct prcmu_fw_version version; scalar_t__ valid; } ;


 TYPE_1__ VAR_0 ;

struct prcmu_fw_version *FUNC_0(void)
{
 return VAR_0.valid ? &VAR_0.version : ((void*)0);
}
