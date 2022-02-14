
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scsi_qla_host*,int,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct scsi_qla_host*,int,int,int,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct scsi_qla_host *VAR_3,
 uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 unsigned long VAR_8;
 uint32_t VAR_9;


 VAR_8 = VAR_1 + FUNC_0(VAR_0);
 do {
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7, VAR_5);
  if ((VAR_9 & 0x1) != 1)
   break;
  if (FUNC_3(VAR_1, VAR_8)) {
   FUNC_1(VAR_2, VAR_3, 0xb152,
       "Error in processing mdiobus idle\n");
   return -1;
  }
 } while (1);

 return 0;
}
