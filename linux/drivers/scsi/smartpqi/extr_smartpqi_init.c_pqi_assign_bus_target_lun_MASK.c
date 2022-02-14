
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pqi_scsi_dev {int target_lun_valid; scalar_t__ is_external_raid_device; int * scsi3addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct pqi_scsi_dev*) ;
 int FUNC_3 (struct pqi_scsi_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct pqi_scsi_dev *VAR_4)
{
 u8 *VAR_5;
 u32 VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = VAR_4->scsi3addr;
 VAR_6 = FUNC_0(VAR_5);

 if (FUNC_1(VAR_5)) {

  FUNC_3(VAR_4, VAR_1, 0, VAR_6 & 0x3fff);
  VAR_4->target_lun_valid = 1;
  return;
 }

 if (FUNC_2(VAR_4)) {
  if (VAR_4->is_external_raid_device) {
   VAR_7 = VAR_0;
   VAR_8 = (VAR_6 >> 16) & 0x3fff;
   VAR_9 = VAR_6 & 0xff;
  } else {
   VAR_7 = VAR_3;
   VAR_8 = 0;
   VAR_9 = VAR_6 & 0x3fff;
  }
  FUNC_3(VAR_4, VAR_7, VAR_8, VAR_9);
  VAR_4->target_lun_valid = 1;
  return;
 }





 FUNC_3(VAR_4, VAR_2, 0, 0);
}
