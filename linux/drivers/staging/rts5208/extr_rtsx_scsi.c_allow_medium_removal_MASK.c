
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int dummy; } ;


 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct scsi_cmnd*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_3, struct rtsx_chip *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_3->cmnd[4] & 0x1;

 FUNC_1(VAR_3, 0);

 if (VAR_5) {
  FUNC_2(VAR_4, FUNC_0(VAR_3),
          VAR_0);
  return VAR_1;
 }

 return VAR_2;
}
