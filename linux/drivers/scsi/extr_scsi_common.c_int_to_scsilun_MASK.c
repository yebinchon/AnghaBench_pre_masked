
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_lun {int* scsi_lun; } ;
typedef int lun ;


 int FUNC_0 (int*,int ,int) ;

void FUNC_1(u64 VAR_0, struct scsi_lun *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->scsi_lun, 0, sizeof(VAR_1->scsi_lun));

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_0); VAR_2 += 2) {
  VAR_1->scsi_lun[VAR_2] = (VAR_0 >> 8) & 0xFF;
  VAR_1->scsi_lun[VAR_2+1] = VAR_0 & 0xFF;
  VAR_0 = VAR_0 >> 16;
 }
}
