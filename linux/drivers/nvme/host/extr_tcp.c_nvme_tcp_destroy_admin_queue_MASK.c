
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int admin_tagset; int fabrics_q; int admin_q; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int FUNC_3 (struct nvme_ctrl*,int ) ;

__attribute__((used)) static void FUNC_4(struct nvme_ctrl *VAR_0, bool VAR_1)
{
 FUNC_3(VAR_0, 0);
 if (VAR_1) {
  FUNC_0(VAR_0->admin_q);
  FUNC_0(VAR_0->fabrics_q);
  FUNC_1(VAR_0->admin_tagset);
 }
 FUNC_2(VAR_0);
}
