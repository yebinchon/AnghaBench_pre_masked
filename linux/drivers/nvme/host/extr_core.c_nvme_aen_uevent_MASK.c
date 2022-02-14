
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvme_ctrl {TYPE_1__* device; scalar_t__ aen_result; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,char**) ;

__attribute__((used)) static void FUNC_3(struct nvme_ctrl *VAR_2)
{
 char *VAR_3[2] = { ((void*)0), ((void*)0) };
 u32 VAR_4 = VAR_2->aen_result;

 VAR_2->aen_result = 0;
 if (!VAR_4)
  return;

 VAR_3[0] = FUNC_0(VAR_0, "NVME_AEN=%#08x", VAR_4);
 if (!VAR_3[0])
  return;
 FUNC_2(&VAR_2->device->kobj, VAR_1, VAR_3);
 FUNC_1(VAR_3[0]);
}
