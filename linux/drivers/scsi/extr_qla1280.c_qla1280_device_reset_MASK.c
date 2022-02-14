
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct scsi_qla_host*,int,int*) ;
 int FUNC_4 (struct scsi_qla_host*,int,int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct scsi_qla_host *VAR_7, int VAR_8, int VAR_9)
{
 uint16_t VAR_10[VAR_4];
 int VAR_11;

 FUNC_0("qla1280_device_reset");

 VAR_10[0] = VAR_5;
 VAR_10[1] = (VAR_8 ? (VAR_9 | VAR_3) : VAR_9) << 8;
 VAR_10[2] = 1;
 VAR_11 = FUNC_3(VAR_7, VAR_2 | VAR_1 | VAR_0, &VAR_10[0]);


 FUNC_4(VAR_7, VAR_8, VAR_9, 0, VAR_6);

 if (VAR_11)
  FUNC_2(2, "qla1280_device_reset: **** FAILED ****\n");

 FUNC_1("qla1280_device_reset");
 return VAR_11;
}
