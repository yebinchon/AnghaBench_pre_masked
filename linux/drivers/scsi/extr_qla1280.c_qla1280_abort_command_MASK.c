
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct srb {int flags; int cmd; } ;
struct scsi_qla_host {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (struct scsi_qla_host*,int,int*) ;

__attribute__((used)) static int
FUNC_7(struct scsi_qla_host *VAR_4, struct srb * VAR_5, int VAR_6)
{
 uint16_t VAR_7[VAR_1];
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_0("qla1280_abort_command");

 VAR_8 = FUNC_2(VAR_5->cmd);
 VAR_9 = FUNC_4(VAR_5->cmd);
 VAR_10 = FUNC_3(VAR_5->cmd);

 VAR_5->flags |= VAR_3;

 VAR_7[0] = VAR_2;
 VAR_7[1] = (VAR_8 ? VAR_9 | VAR_0 : VAR_9) << 8 | VAR_10;
 VAR_7[2] = VAR_6 >> 16;
 VAR_7[3] = VAR_6 & 0xffff;
 VAR_11 = FUNC_6(VAR_4, 0x0f, &VAR_7[0]);

 if (VAR_11) {
  FUNC_5(2, "qla1280_abort_command: **** FAILED ****\n");
  VAR_5->flags &= ~VAR_3;
 }


 FUNC_1("qla1280_abort_command");
 return VAR_11;
}
