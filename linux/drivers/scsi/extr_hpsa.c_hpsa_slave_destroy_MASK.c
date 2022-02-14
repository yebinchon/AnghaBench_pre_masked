
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hpsa_scsi_dev_t* hostdata; } ;
struct hpsa_scsi_dev_t {int was_removed; } ;



__attribute__((used)) static void FUNC_0(struct scsi_device *VAR_0)
{
 struct hpsa_scsi_dev_t *VAR_1 = ((void*)0);

 VAR_1 = VAR_0->hostdata;

 if (VAR_1)
  VAR_1->was_removed = 1;
}
