
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {scalar_t__ ss_en; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 scalar_t__ FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_3, struct rtsx_chip *VAR_4)
{
 u8 VAR_5 = VAR_3->cmnd[2];

 FUNC_0(VAR_4);

 if (VAR_4->ss_en && (FUNC_2(VAR_4) == VAR_1)) {
  FUNC_1(VAR_4);
  FUNC_5(100);
 }
 FUNC_3(VAR_4, VAR_0);

 if (VAR_5 > 3)
  VAR_5 = 1;
 FUNC_4(VAR_4, VAR_5);

 return VAR_2;
}
