
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int * hostdata; } ;
struct pmcraid_resource_entry {int * scsi_dev; } ;



__attribute__((used)) static void FUNC_0(struct scsi_device *VAR_0)
{
 struct pmcraid_resource_entry *VAR_1;

 VAR_1 = (struct pmcraid_resource_entry *)VAR_0->hostdata;

 if (VAR_1)
  VAR_1->scsi_dev = ((void*)0);

 VAR_0->hostdata = ((void*)0);
}
