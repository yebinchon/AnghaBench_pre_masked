
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ tagged_supported; struct Scsi_Host* host; } ;
struct Scsi_Host {scalar_t__ can_queue; scalar_t__* hostdata; } ;
typedef int adpt_hba ;


 int FUNC_0 (struct scsi_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct scsi_device * VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->host;
 adpt_hba* VAR_2;

 VAR_2 = (adpt_hba *) VAR_1->hostdata[0];

 if (VAR_1->can_queue && VAR_0->tagged_supported) {
  FUNC_0(VAR_0,
    VAR_1->can_queue - 1);
 }
 return 0;
}
