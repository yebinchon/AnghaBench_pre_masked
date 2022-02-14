
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_ctrl {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvme_ctrl*,struct request*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline bool FUNC_2(struct nvme_ctrl *VAR_1, struct request *VAR_2,
  bool VAR_3)
{
 if (FUNC_1(VAR_1->state == VAR_0))
  return 1;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
