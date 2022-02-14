
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nvme_ctrl {int device; } ;


 int VAR_0 ;
 struct nvme_ctrl* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct nvme_ctrl* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct nvme_ctrl *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);

 FUNC_0(VAR_3->device, "ANATT timeout, resetting controller.\n");
 FUNC_2(VAR_3);
}
