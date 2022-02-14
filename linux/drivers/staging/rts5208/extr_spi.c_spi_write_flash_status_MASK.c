
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int) ;
 int FUNC_4 (struct rtsx_chip*,int) ;
 int FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*) ;

int FUNC_7(struct scsi_cmnd *VAR_18, struct rtsx_chip *VAR_19)
{
 int VAR_20;
 u8 VAR_21, VAR_22, VAR_23;

 VAR_21 = VAR_18->cmnd[3];
 VAR_22 = VAR_18->cmnd[4];
 VAR_23 = VAR_18->cmnd[5];

 VAR_20 = FUNC_6(VAR_19);
 if (VAR_20 != VAR_16) {
  FUNC_5(VAR_19, VAR_9);
  return VAR_15;
 }

 VAR_20 = FUNC_4(VAR_19, VAR_23);
 if (VAR_20 != VAR_16)
  return VAR_15;

 FUNC_2(VAR_19);

 FUNC_0(VAR_19, VAR_17, VAR_0, 0x01,
       VAR_2);

 FUNC_0(VAR_19, VAR_17, VAR_7, 0xFF, VAR_21);
 FUNC_0(VAR_19, VAR_17, VAR_5, 0xFF,
       VAR_8 | VAR_4);
 FUNC_0(VAR_19, VAR_17, VAR_11, 0xFF, 0);
 FUNC_0(VAR_19, VAR_17, VAR_10, 0xFF, 1);
 FUNC_0(VAR_19, VAR_17, VAR_3, 0xFF, VAR_22);
 FUNC_0(VAR_19, VAR_17, VAR_12, 0xFF,
       VAR_14 | VAR_6);
 FUNC_0(VAR_19, VAR_1, VAR_12, VAR_13,
       VAR_13);

 VAR_20 = FUNC_3(VAR_19, 0, 100);
 if (VAR_20 != VAR_16) {
  FUNC_1(VAR_19);
  FUNC_5(VAR_19, VAR_9);
  return VAR_15;
 }

 return VAR_16;
}
