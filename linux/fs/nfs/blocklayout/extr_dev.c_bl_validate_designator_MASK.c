
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int designator_type; int designator_len; int code_set; } ;
struct pnfs_block_volume {TYPE_1__ scsi; } ;


 int VAR_0 ;




 int FUNC_0 (char*,int ,int,int) ;

__attribute__((used)) static bool
FUNC_1(struct pnfs_block_volume *VAR_1)
{
 switch (VAR_1->scsi.designator_type) {
 case 131:
  if (VAR_1->scsi.code_set != VAR_0)
   return 0;

  if (VAR_1->scsi.designator_len != 8 &&
      VAR_1->scsi.designator_len != 10 &&
      VAR_1->scsi.designator_len != 16)
   return 0;

  return 1;
 case 130:
  if (VAR_1->scsi.code_set != VAR_0)
   return 0;

  if (VAR_1->scsi.designator_len != 8 &&
      VAR_1->scsi.designator_len != 16)
   return 0;

  return 1;
 case 128:
 case 129:
  FUNC_0("pNFS: unsupported designator "
   "(code set %d, type %d, len %d.\n",
   VAR_1->scsi.code_set,
   VAR_1->scsi.designator_type,
   VAR_1->scsi.designator_len);
  return 0;
 default:
  FUNC_0("pNFS: invalid designator "
   "(code set %d, type %d, len %d.\n",
   VAR_1->scsi.code_set,
   VAR_1->scsi.designator_type,
   VAR_1->scsi.designator_len);
  return 0;
 }
}
