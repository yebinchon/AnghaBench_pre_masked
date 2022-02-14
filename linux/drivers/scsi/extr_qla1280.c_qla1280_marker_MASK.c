
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int u8 ;
struct scsi_qla_host {int dummy; } ;
struct mrk_entry {scalar_t__ entry_status; int modifier; void* target; void* lun; int entry_type; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;

__attribute__((used)) static void
FUNC_4(struct scsi_qla_host *VAR_2, int VAR_3, int VAR_4, int VAR_5, u8 VAR_6)
{
 struct mrk_entry *VAR_7;

 FUNC_0("qla1280_marker");


 if ((VAR_7 = (struct mrk_entry *) FUNC_3(VAR_2))) {
  VAR_7->entry_type = VAR_1;
  VAR_7->lun = (uint8_t) VAR_5;
  VAR_7->target = (uint8_t) (VAR_3 ? (VAR_4 | VAR_0) : VAR_4);
  VAR_7->modifier = VAR_6;
  VAR_7->entry_status = 0;


  FUNC_2(VAR_2);
 }

 FUNC_1("qla1280_marker");
}
