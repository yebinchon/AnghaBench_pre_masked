
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct rtsx_chip*,int,int,int) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (struct rtsx_chip*) ;

int FUNC_4(struct scsi_cmnd *VAR_8, struct rtsx_chip *VAR_9)
{
 int VAR_10;
 u8 VAR_11, VAR_12;
 u32 VAR_13;

 FUNC_2(VAR_9, VAR_4);

 VAR_11 = VAR_8->cmnd[3];
 VAR_13 = ((u32)(VAR_8->cmnd[4]) << 16) | ((u32)(VAR_8->cmnd[5])
     << 8) | VAR_8->cmnd[6];
 VAR_12 = VAR_8->cmnd[9];

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10 != VAR_7) {
  FUNC_2(VAR_9, VAR_2);
  return VAR_6;
 }

 if (VAR_12 == VAR_1) {
  VAR_10 = FUNC_0(VAR_9, VAR_5);
  if (VAR_10 != VAR_7)
   return VAR_6;

  VAR_10 = FUNC_1(VAR_9, VAR_11, 1, VAR_13);
  if (VAR_10 != VAR_7)
   return VAR_6;
 } else if (VAR_12 == VAR_0) {
  VAR_10 = FUNC_0(VAR_9, VAR_5);
  if (VAR_10 != VAR_7)
   return VAR_6;

  VAR_10 = FUNC_1(VAR_9, VAR_11, 0, 0);
  if (VAR_10 != VAR_7)
   return VAR_6;
 } else {
  FUNC_2(VAR_9, VAR_3);
  return VAR_6;
 }

 return VAR_7;
}
