
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {int quirks; int cap; int ctrl_config; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reg_write32 ) (struct nvme_ctrl*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_ctrl*,int ,int) ;
 int FUNC_2 (struct nvme_ctrl*,int ,int ) ;

int FUNC_3(struct nvme_ctrl *VAR_5)
{
 int VAR_6;

 VAR_5->ctrl_config &= ~VAR_1;
 VAR_5->ctrl_config &= ~VAR_0;

 VAR_6 = VAR_5->ops->reg_write32(VAR_5, VAR_4, VAR_5->ctrl_config);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->quirks & VAR_3)
  FUNC_0(VAR_2);

 return FUNC_1(VAR_5, VAR_5->cap, 0);
}
