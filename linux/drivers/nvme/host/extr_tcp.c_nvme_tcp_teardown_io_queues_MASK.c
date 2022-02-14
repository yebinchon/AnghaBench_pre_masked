
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int queue_count; scalar_t__ tagset; } ;


 int FUNC_0 (scalar_t__,int ,struct nvme_ctrl*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int FUNC_3 (struct nvme_ctrl*) ;
 int FUNC_4 (struct nvme_ctrl*,int) ;
 int FUNC_5 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_6(struct nvme_ctrl *VAR_1,
  bool VAR_2)
{
 if (VAR_1->queue_count <= 1)
  return;
 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 if (VAR_1->tagset) {
  FUNC_0(VAR_1->tagset,
   VAR_0, VAR_1);
  FUNC_1(VAR_1->tagset);
 }
 if (VAR_2)
  FUNC_2(VAR_1);
 FUNC_4(VAR_1, VAR_2);
}
