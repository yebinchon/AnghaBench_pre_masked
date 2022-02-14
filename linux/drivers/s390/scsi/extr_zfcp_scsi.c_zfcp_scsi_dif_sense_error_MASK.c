
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; int sense_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ,int,int) ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;
 int FUNC_2 (struct scsi_cmnd*,int ) ;

void FUNC_3(struct scsi_cmnd *VAR_4, int VAR_5)
{
 FUNC_0(1, VAR_4->sense_buffer,
    VAR_2, 0x10, VAR_5);
 FUNC_1(VAR_4, VAR_1);
 VAR_4->result |= VAR_3;
 FUNC_2(VAR_4, VAR_0);
}
