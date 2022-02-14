
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {TYPE_1__* ops; int subsystem; } ;
struct TYPE_2__ {int (* reg_write32 ) (struct nvme_ctrl*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_ctrl*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct nvme_ctrl *VAR_2)
{
 if (!VAR_2->subsystem)
  return -VAR_0;
 return VAR_2->ops->reg_write32(VAR_2, VAR_1, 0x4E564D65);
}
