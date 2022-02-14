
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int flags; int cmd_mask; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct nvdimm* FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_4)
{
 struct nvdimm *VAR_5 = FUNC_1(VAR_4);

 if (!VAR_5->cmd_mask ||
     !FUNC_0(VAR_3, &VAR_5->cmd_mask)) {
  if (FUNC_0(VAR_2, &VAR_5->flags))
   return -VAR_1;
  else
   return -VAR_0;
 }

 return 0;
}
