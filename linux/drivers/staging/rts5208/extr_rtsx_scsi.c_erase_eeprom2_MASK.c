
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {scalar_t__ ss_en; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*,int ,int ) ;
 int FUNC_7 (struct rtsx_chip*,unsigned short) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_8, struct rtsx_chip *VAR_9)
{
 unsigned short VAR_10;
 int VAR_11;
 u8 VAR_12;

 FUNC_1(VAR_9);

 if (VAR_9->ss_en && (FUNC_4(VAR_9) == VAR_1)) {
  FUNC_2(VAR_9);
  FUNC_9(100);
 }
 FUNC_5(VAR_9, VAR_0);

 VAR_11 = FUNC_3(VAR_9, VAR_4);
 if (VAR_11 != VAR_5) {
  FUNC_6(VAR_9, FUNC_0(VAR_8), VAR_3);
  return VAR_6;
 }

 VAR_12 = VAR_8->cmnd[3];
 VAR_10 = ((u16)VAR_8->cmnd[4] << 8) | VAR_8->cmnd[5];

 if (VAR_12 == 0) {
  VAR_11 = FUNC_8(VAR_9);
  if (VAR_11 != VAR_5) {
   FUNC_6(VAR_9, FUNC_0(VAR_8),
           VAR_3);
   return VAR_6;
  }
 } else if (VAR_12 == 1) {
  VAR_11 = FUNC_7(VAR_9, VAR_10);
  if (VAR_11 != VAR_5) {
   FUNC_6(VAR_9, FUNC_0(VAR_8),
           VAR_3);
   return VAR_6;
  }
 } else {
  FUNC_6(VAR_9, FUNC_0(VAR_8),
          VAR_2);
  return VAR_6;
 }

 return VAR_7;
}
