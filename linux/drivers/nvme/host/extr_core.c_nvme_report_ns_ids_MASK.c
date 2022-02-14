
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns_ids {int nguid; int eui64; } ;
struct nvme_id_ns {int nguid; int eui64; } ;
struct nvme_ctrl {scalar_t__ vs; int device; } ;


 scalar_t__ FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct nvme_ns_ids*,int ,int) ;
 int FUNC_4 (struct nvme_ctrl*,unsigned int,struct nvme_ns_ids*) ;

__attribute__((used)) static int FUNC_5(struct nvme_ctrl *VAR_0, unsigned int VAR_1,
  struct nvme_id_ns *VAR_2, struct nvme_ns_ids *VAR_3)
{
 int VAR_4 = 0;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));

 if (VAR_0->vs >= FUNC_0(1, 1, 0))
  FUNC_2(VAR_3->eui64, VAR_2->eui64, sizeof(VAR_2->eui64));
 if (VAR_0->vs >= FUNC_0(1, 2, 0))
  FUNC_2(VAR_3->nguid, VAR_2->nguid, sizeof(VAR_2->nguid));
 if (VAR_0->vs >= FUNC_0(1, 3, 0)) {



  VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_3);
  if (VAR_4)
   FUNC_1(VAR_0->device,
     "Identify Descriptors failed (%d)\n", VAR_4);
 }
 return VAR_4;
}
