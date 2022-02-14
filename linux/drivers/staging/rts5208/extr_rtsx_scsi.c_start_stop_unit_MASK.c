
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int dummy; } ;




 unsigned int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (struct rtsx_chip*,unsigned int) ;
 int FUNC_2 (struct rtsx_chip*,unsigned int) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 int FUNC_5 (struct rtsx_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_4, struct rtsx_chip *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4);

 FUNC_4(VAR_4, FUNC_3(VAR_4));

 if (VAR_4->cmnd[1] == 1)
  return VAR_3;

 switch (VAR_4->cmnd[0x4]) {
 case 129:

  return VAR_3;

 case 128:

  if (FUNC_1(VAR_5, VAR_6))
   FUNC_2(VAR_5, VAR_6);
  return VAR_3;

 case 130:
 case 131:
  if (FUNC_1(VAR_5, VAR_6))
   return VAR_3;
  FUNC_5(VAR_5, VAR_6, VAR_0);
  return VAR_2;

  break;
 }

 return VAR_1;
}
