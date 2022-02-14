
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct csio_scsi_level_data {int level; int lnode; int rnode; int oslun; } ;
struct csio_ioreq {int lnode; int rnode; } ;
struct TYPE_2__ {int lun; } ;






 struct scsi_cmnd* FUNC_0 (struct csio_ioreq*) ;

__attribute__((used)) static bool
FUNC_1(struct csio_ioreq *VAR_0, struct csio_scsi_level_data *VAR_1)
{
 struct scsi_cmnd *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1->level) {
 case 129:
  if (VAR_2 == ((void*)0))
   return 0;

  return ((VAR_0->lnode == VAR_1->lnode) &&
   (VAR_0->rnode == VAR_1->rnode) &&
   ((uint64_t)VAR_2->device->lun == VAR_1->oslun));

 case 128:
  return ((VAR_0->lnode == VAR_1->lnode) &&
    (VAR_0->rnode == VAR_1->rnode));
 case 130:
  return (VAR_0->lnode == VAR_1->lnode);
 case 131:
  return 1;
 default:
  return 0;
 }
}
