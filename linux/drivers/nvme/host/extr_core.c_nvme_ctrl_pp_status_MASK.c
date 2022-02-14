
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvme_ctrl {int ctrl_config; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* reg_read32 ) (struct nvme_ctrl*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nvme_ctrl*,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct nvme_ctrl *VAR_3)
{

 u32 VAR_4;

 if (VAR_3->ops->reg_read32(VAR_3, VAR_2, &VAR_4))
  return 0;

 if (VAR_4 == ~0)
  return 0;

 return ((VAR_3->ctrl_config & VAR_0) && (VAR_4 & VAR_1));
}
