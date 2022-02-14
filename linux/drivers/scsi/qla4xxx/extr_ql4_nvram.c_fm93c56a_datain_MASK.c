
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int eeprom_cmd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_qla_host * VAR_3, unsigned short *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 int VAR_7;



 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3); VAR_5++) {
  FUNC_0(VAR_3->eeprom_cmd_data |
         VAR_1, VAR_3);
  FUNC_0(VAR_3->eeprom_cmd_data |
         VAR_0, VAR_3);

  VAR_7 = (FUNC_3(FUNC_2(VAR_3)) & VAR_2) ? 1 : 0;

  VAR_6 = (VAR_6 << 1) | VAR_7;
 }

 *VAR_4 = VAR_6;
 return 1;
}
