
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int admin_q; scalar_t__ admin_tagset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,struct nvme_ctrl*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct nvme_ctrl*,int) ;
 int FUNC_5 (struct nvme_ctrl*,int ) ;

__attribute__((used)) static void FUNC_6(struct nvme_ctrl *VAR_1,
  bool VAR_2)
{
 FUNC_0(VAR_1->admin_q);
 FUNC_5(VAR_1, 0);
 if (VAR_1->admin_tagset) {
  FUNC_1(VAR_1->admin_tagset,
   VAR_0, VAR_1);
  FUNC_2(VAR_1->admin_tagset);
 }
 if (VAR_2)
  FUNC_3(VAR_1->admin_q);
 FUNC_4(VAR_1, VAR_2);
}
