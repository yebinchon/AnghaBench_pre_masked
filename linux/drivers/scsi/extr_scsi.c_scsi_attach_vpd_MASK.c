
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_vpd {int len; int* data; } ;
struct scsi_device {int vpd_pg83; int vpd_pg80; } ;


 int FUNC_0 (struct scsi_vpd*) ;
 int FUNC_1 (struct scsi_device*) ;
 struct scsi_vpd* FUNC_2 (struct scsi_device*,int ) ;
 int FUNC_3 (struct scsi_device*,int,int *) ;

void FUNC_4(struct scsi_device *VAR_0)
{
 int VAR_1;
 struct scsi_vpd *VAR_2;

 if (!FUNC_1(VAR_0))
  return;


 VAR_2 = FUNC_2(VAR_0, 0);
 if (!VAR_2)
  return;

 for (VAR_1 = 4; VAR_1 < VAR_2->len; VAR_1++) {
  if (VAR_2->data[VAR_1] == 0x80)
   FUNC_3(VAR_0, 0x80, &VAR_0->vpd_pg80);
  if (VAR_2->data[VAR_1] == 0x83)
   FUNC_3(VAR_0, 0x83, &VAR_0->vpd_pg83);
 }
 FUNC_0(VAR_2);
}
