
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__* cmnd; } ;
struct rtsx_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,struct rtsx_chip*) ;
 int FUNC_1 (struct scsi_cmnd*,struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_3, struct rtsx_chip *VAR_4)
{
 int VAR_5 = VAR_2;

 if (VAR_3->cmnd[2] == VAR_1)
  VAR_5 = FUNC_1(VAR_3, VAR_4);





 return VAR_5;
}
