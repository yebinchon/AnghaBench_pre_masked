
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_qla_host*,int,int,int,int,int*) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static uint32_t FUNC_4(struct scsi_qla_host *VAR_5,
          uint32_t VAR_6,
          uint32_t VAR_7,
          uint32_t VAR_8,
          uint32_t VAR_9)
{
 unsigned long VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12 = VAR_2;

 VAR_10 = VAR_4 + FUNC_0(VAR_3);
 do {
  FUNC_1(VAR_5, VAR_6, VAR_8, VAR_9, VAR_7, &VAR_11);
  if ((VAR_11 & 0x1) != 1)
   break;
  if (FUNC_3(VAR_4, VAR_10)) {
   FUNC_2(VAR_0, VAR_5, "Error in processing mdiobus idle\n");
   return VAR_1;
  }
 } while (1);

 return VAR_12;
}
