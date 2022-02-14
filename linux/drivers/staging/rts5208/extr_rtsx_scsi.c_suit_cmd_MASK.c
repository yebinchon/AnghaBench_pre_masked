
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd *VAR_1, struct rtsx_chip *VAR_2)
{
 switch (VAR_1->cmnd[3]) {
 case 129:
 case 131:
 case 128:
 case 130:
  return FUNC_0(VAR_1, VAR_2);
 default:
  return VAR_0;
 }
}
