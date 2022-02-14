
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; scalar_t__ sense_buffer; } ;
struct SENSE_DATA {int Valid; int ErrorCode; } ;
struct TYPE_2__ {int SenseData; } ;
struct CommandControlBlock {TYPE_1__ arcmsr_cdb; struct scsi_cmnd* pcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct SENSE_DATA*,int ,int) ;
 int FUNC_1 (struct SENSE_DATA*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct CommandControlBlock *VAR_5)
{

 struct scsi_cmnd *VAR_6 = VAR_5->pcmd;
 struct SENSE_DATA *VAR_7 = (struct SENSE_DATA *)VAR_6->sense_buffer;
 VAR_6->result = (VAR_1 << 16) | (VAR_0 << 1);
 if (VAR_7) {
  int VAR_8 =
   sizeof(struct SENSE_DATA) < VAR_3
   ? sizeof(struct SENSE_DATA) : VAR_3;
  FUNC_1(VAR_7, 0, VAR_3);
  FUNC_0(VAR_7, VAR_5->arcmsr_cdb.SenseData, VAR_8);
  VAR_7->ErrorCode = VAR_4;
  VAR_7->Valid = 1;
  VAR_6->result |= (VAR_2 << 24);
 }
}
