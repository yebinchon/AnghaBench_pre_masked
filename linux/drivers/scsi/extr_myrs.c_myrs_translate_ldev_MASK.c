
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {unsigned int channel; unsigned int id; TYPE_2__* host; } ;
struct myrs_hba {TYPE_1__* ctlr_info; } ;
struct TYPE_4__ {unsigned int max_id; } ;
struct TYPE_3__ {unsigned int physchan_present; } ;



__attribute__((used)) static unsigned short FUNC_0(struct myrs_hba *VAR_0,
  struct scsi_device *VAR_1)
{
 unsigned short VAR_2;
 unsigned int VAR_3 =
  VAR_1->channel - VAR_0->ctlr_info->physchan_present;

 VAR_2 = VAR_1->id + VAR_3 * VAR_1->host->max_id;

 return VAR_2;
}
