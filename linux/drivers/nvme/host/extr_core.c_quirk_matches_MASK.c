
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_id_ctrl {int fr; int mn; int vid; } ;
struct nvme_core_quirk_entry {scalar_t__ vid; int fr; int mn; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_2(const struct nvme_id_ctrl *VAR_0,
     const struct nvme_core_quirk_entry *VAR_1)
{
 return VAR_1->vid == FUNC_0(VAR_0->vid) &&
  FUNC_1(VAR_0->mn, VAR_1->mn, sizeof(VAR_0->mn)) &&
  FUNC_1(VAR_0->fr, VAR_1->fr, sizeof(VAR_0->fr));
}
