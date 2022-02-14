
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns_ids {int eui64; int nguid; int uuid; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(struct nvme_ns_ids *VAR_0, struct nvme_ns_ids *VAR_1)
{
 return FUNC_1(&VAR_0->uuid, &VAR_1->uuid) &&
  FUNC_0(&VAR_0->nguid, &VAR_1->nguid, sizeof(VAR_0->nguid)) == 0 &&
  FUNC_0(&VAR_0->eui64, &VAR_1->eui64, sizeof(VAR_0->eui64)) == 0;
}
