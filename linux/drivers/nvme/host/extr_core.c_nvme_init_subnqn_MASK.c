
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_subsystem {int subnqn; } ;
struct nvme_id_ctrl {int mn; int sn; int vid; int ssvid; int subnqn; } ;
struct nvme_ctrl {int quirks; scalar_t__ vs; int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,size_t,char*,int,int) ;
 int FUNC_6 (int ,int ,size_t) ;
 size_t FUNC_7 (int ,size_t) ;

__attribute__((used)) static void FUNC_8(struct nvme_subsystem *VAR_2, struct nvme_ctrl *VAR_3,
  struct nvme_id_ctrl *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 if(!(VAR_3->quirks & VAR_0)) {
  VAR_5 = FUNC_7(VAR_4->subnqn, VAR_1);
  if (VAR_5 > 0 && VAR_5 < VAR_1) {
   FUNC_6(VAR_2->subnqn, VAR_4->subnqn, VAR_1);
   return;
  }

  if (VAR_3->vs >= FUNC_0(1, 2, 1))
   FUNC_1(VAR_3->device, "missing or invalid SUBNQN field.\n");
 }


 VAR_6 = FUNC_5(VAR_2->subnqn, VAR_1,
   "nqn.2014.08.org.nvmexpress:%04x%04x",
   FUNC_2(VAR_4->vid), FUNC_2(VAR_4->ssvid));
 FUNC_3(VAR_2->subnqn + VAR_6, VAR_4->sn, sizeof(VAR_4->sn));
 VAR_6 += sizeof(VAR_4->sn);
 FUNC_3(VAR_2->subnqn + VAR_6, VAR_4->mn, sizeof(VAR_4->mn));
 VAR_6 += sizeof(VAR_4->mn);
 FUNC_4(VAR_2->subnqn + VAR_6, 0, sizeof(VAR_2->subnqn) - VAR_6);
}
