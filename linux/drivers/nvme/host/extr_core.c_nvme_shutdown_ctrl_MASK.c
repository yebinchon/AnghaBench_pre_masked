
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvme_ctrl {unsigned long shutdown_timeout; int device; TYPE_1__* ops; int ctrl_config; } ;
struct TYPE_2__ {int (* reg_write32 ) (struct nvme_ctrl*,int ,int ) ;int (* reg_read32 ) (struct nvme_ctrl*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nvme_ctrl*,int ,int ) ;
 int FUNC_4 (struct nvme_ctrl*,int ,int*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

int FUNC_6(struct nvme_ctrl *VAR_11)
{
 unsigned long VAR_12 = VAR_10 + (VAR_11->shutdown_timeout * VAR_2);
 u32 VAR_13;
 int VAR_14;

 VAR_11->ctrl_config &= ~VAR_3;
 VAR_11->ctrl_config |= VAR_4;

 VAR_14 = VAR_11->ops->reg_write32(VAR_11, VAR_7, VAR_11->ctrl_config);
 if (VAR_14)
  return VAR_14;

 while ((VAR_14 = VAR_11->ops->reg_read32(VAR_11, VAR_8, &VAR_13)) == 0) {
  if ((VAR_13 & VAR_6) == VAR_5)
   break;

  FUNC_2(100);
  if (FUNC_1(VAR_9))
   return -VAR_0;
  if (FUNC_5(VAR_10, VAR_12)) {
   FUNC_0(VAR_11->device,
    "Device shutdown incomplete; abort shutdown\n");
   return -VAR_1;
  }
 }

 return VAR_14;
}
