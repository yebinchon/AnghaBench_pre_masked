
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns_ids {int eui64; int nguid; int uuid; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct nvme_ns_ids *VAR_0)
{
 return !FUNC_1(&VAR_0->uuid) ||
  FUNC_0(VAR_0->nguid, 0, sizeof(VAR_0->nguid)) ||
  FUNC_0(VAR_0->eui64, 0, sizeof(VAR_0->eui64));
}
