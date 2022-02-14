
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ns {scalar_t__ disk; } ;
struct nvme_ctrl {int dummy; } ;


 int FUNC_0 (struct nvme_ctrl*,unsigned int) ;
 struct nvme_ns* FUNC_1 (struct nvme_ctrl*,unsigned int) ;
 int FUNC_2 (struct nvme_ns*) ;
 int FUNC_3 (struct nvme_ns*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nvme_ctrl *VAR_0, unsigned VAR_1)
{
 struct nvme_ns *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  if (VAR_2->disk && FUNC_4(VAR_2->disk))
   FUNC_2(VAR_2);
  FUNC_3(VAR_2);
 } else
  FUNC_0(VAR_0, VAR_1);
}
