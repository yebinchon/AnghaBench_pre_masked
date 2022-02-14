
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ hostdata; TYPE_1__* host; } ;
struct lpfc_vport {TYPE_2__* phba; } ;
struct lpfc_rport_data {int dummy; } ;
struct lpfc_device_data {struct lpfc_rport_data* rport_data; } ;
struct TYPE_4__ {scalar_t__ cfg_fof; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;



__attribute__((used)) static struct lpfc_rport_data *
FUNC_0(struct scsi_device *VAR_0)
{
 struct lpfc_vport *VAR_1 = (struct lpfc_vport *)VAR_0->host->hostdata;

 if (VAR_1->phba->cfg_fof)
  return ((struct lpfc_device_data *)VAR_0->hostdata)->rport_data;
 else
  return (struct lpfc_rport_data *)VAR_0->hostdata;
}
