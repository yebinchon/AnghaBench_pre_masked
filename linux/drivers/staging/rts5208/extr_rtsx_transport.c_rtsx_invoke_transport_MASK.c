
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sense_data_t {int dummy; } ;
struct scsi_cmnd {int result; int sense_buffer; } ;
struct rtsx_chip {int * sense_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct scsi_cmnd*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct scsi_cmnd*,struct rtsx_chip*) ;

void FUNC_6(struct scsi_cmnd *VAR_7, struct rtsx_chip *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_5(VAR_7, VAR_8);





 if (FUNC_3(VAR_8, VAR_2)) {
  FUNC_1(FUNC_4(VAR_8), "-- command was aborted\n");
  VAR_7->result = VAR_0 << 16;
  goto handle_errors;
 }


 if (VAR_9 == VAR_5) {
  FUNC_1(FUNC_4(VAR_8), "-- transport indicates error, resetting\n");
  VAR_7->result = VAR_1 << 16;
  goto handle_errors;
 }

 VAR_7->result = VAR_4;






 if (VAR_9 == VAR_6) {

  VAR_7->result = VAR_3;
  FUNC_2(VAR_7->sense_buffer,
         (unsigned char *)&VAR_8->sense_buffer[FUNC_0(VAR_7)],
         sizeof(struct sense_data_t));
 }

 return;

handle_errors:
 return;
}
