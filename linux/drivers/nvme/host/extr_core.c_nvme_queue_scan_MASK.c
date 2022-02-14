
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {scalar_t__ state; int scan_work; scalar_t__ tagset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct nvme_ctrl *VAR_2)
{



 if (VAR_2->state == VAR_0 && VAR_2->tagset)
  FUNC_0(VAR_1, &VAR_2->scan_work);
}
