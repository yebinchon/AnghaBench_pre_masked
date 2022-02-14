
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {scalar_t__ raid_level; scalar_t__ offload_config; scalar_t__ offload_to_be_enabled; scalar_t__ queue_depth; scalar_t__ ioaccel_handle; int scsi3addr; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct hpsa_scsi_dev_t *VAR_0,
 struct hpsa_scsi_dev_t *VAR_1)
{




 if (VAR_0->raid_level != VAR_1->raid_level)
  return 1;
 if (VAR_0->offload_config != VAR_1->offload_config)
  return 1;
 if (VAR_0->offload_to_be_enabled != VAR_1->offload_to_be_enabled)
  return 1;
 if (!FUNC_0(VAR_0->scsi3addr))
  if (VAR_0->queue_depth != VAR_1->queue_depth)
   return 1;
 if (VAR_0->ioaccel_handle != VAR_1->ioaccel_handle)
  return 1;
 return 0;
}
