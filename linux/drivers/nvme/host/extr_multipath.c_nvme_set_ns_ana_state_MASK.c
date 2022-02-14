
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns {scalar_t__ ana_grpid; } ;
struct nvme_ctrl {int dummy; } ;
struct nvme_ana_group_desc {int grpid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_ana_group_desc*,struct nvme_ns*) ;

__attribute__((used)) static int FUNC_2(struct nvme_ctrl *VAR_1,
  struct nvme_ana_group_desc *VAR_2, void *VAR_3)
{
 struct nvme_ns *VAR_4 = VAR_3;

 if (VAR_4->ana_grpid == FUNC_0(VAR_2->grpid)) {
  FUNC_1(VAR_2, VAR_4);
  return -VAR_0;
 }

 return 0;
}
