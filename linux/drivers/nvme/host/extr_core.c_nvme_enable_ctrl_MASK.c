
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {int page_size; unsigned int ctrl_config; int cap; TYPE_1__* ops; int device; } ;
struct TYPE_2__ {int (* reg_read64 ) (struct nvme_ctrl*,int ,int *) ;int (* reg_write32 ) (struct nvme_ctrl*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct nvme_ctrl*,int ,int) ;
 int FUNC_3 (struct nvme_ctrl*,int ,int *) ;
 int FUNC_4 (struct nvme_ctrl*,int ,int) ;

int FUNC_5(struct nvme_ctrl *VAR_10)
{





 unsigned VAR_11, VAR_12 = 12;
 int VAR_13;

 VAR_13 = VAR_10->ops->reg_read64(VAR_10, VAR_8, &VAR_10->cap);
 if (VAR_13) {
  FUNC_1(VAR_10->device, "Reading CAP failed (%d)\n", VAR_13);
  return VAR_13;
 }
 VAR_11 = FUNC_0(VAR_10->cap) + 12;

 if (VAR_12 < VAR_11) {
  FUNC_1(VAR_10->device,
   "Minimum device page size %u too large for host (%u)\n",
   1 << VAR_11, 1 << VAR_12);
  return -VAR_0;
 }

 VAR_10->page_size = 1 << VAR_12;

 VAR_10->ctrl_config = VAR_2;
 VAR_10->ctrl_config |= (VAR_12 - 12) << VAR_6;
 VAR_10->ctrl_config |= VAR_1 | VAR_7;
 VAR_10->ctrl_config |= VAR_5 | VAR_4;
 VAR_10->ctrl_config |= VAR_3;

 VAR_13 = VAR_10->ops->reg_write32(VAR_10, VAR_9, VAR_10->ctrl_config);
 if (VAR_13)
  return VAR_13;
 return FUNC_2(VAR_10, VAR_10->cap, 1);
}
