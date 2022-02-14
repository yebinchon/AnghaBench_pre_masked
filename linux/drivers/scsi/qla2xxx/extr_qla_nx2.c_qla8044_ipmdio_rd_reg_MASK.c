
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;


 int FUNC_0 (struct scsi_qla_host*,int,int) ;
 int FUNC_1 (struct scsi_qla_host*,int,int*) ;
 int FUNC_2 (struct scsi_qla_host*,int,int) ;

__attribute__((used)) static uint32_t
FUNC_3(struct scsi_qla_host *VAR_0,
 uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;
 int VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3);
 if (VAR_6 == -1)
  return -1;

 VAR_5 = (0x40000000 | VAR_4);
 FUNC_2(VAR_0, VAR_1, VAR_5);

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3);
 if (VAR_6 == -1)
  return 0;

 FUNC_1(VAR_0, VAR_2, &VAR_6);

 return VAR_6;
}
