
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct scsi_cmnd {int dummy; } ;
struct ms_info {int pro_under_formatting; int format_status; scalar_t__ progress; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


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
 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct rtsx_chip*,int,int,int ,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_5 (struct rtsx_chip*,int ,int,int ) ;
 int FUNC_6 (struct rtsx_chip*,int ,int*) ;
 int FUNC_7 (struct rtsx_chip*,int ,int ) ;

int FUNC_8(struct scsi_cmnd *VAR_15, struct rtsx_chip *VAR_16,
   int VAR_17, bool VAR_18)
{
 struct ms_info *VAR_19 = &VAR_16->ms_card;
 int VAR_20, VAR_21;
 u8 VAR_22[8], VAR_23;
 u16 VAR_24;

 VAR_20 = FUNC_3(VAR_16);
 if (VAR_20 != VAR_14)
  return VAR_13;

 VAR_20 = FUNC_2(VAR_16, 0x00, 0x00, VAR_11, 0x01);
 if (VAR_20 != VAR_14)
  return VAR_13;

 FUNC_1(VAR_22, 0, 2);
 switch (VAR_17) {
 case 32:
  VAR_22[0] = 0;
  break;
 case 64:
  VAR_22[0] = 1;
  break;
 case 128:
  VAR_22[0] = 2;
  break;
 case 256:
 default:
  VAR_22[0] = 3;
  break;
 }

 for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
  VAR_20 = FUNC_4(VAR_16, VAR_10, 1,
     VAR_8, VAR_22, 2);
  if (VAR_20 == VAR_14)
   break;
 }
 if (VAR_21 == VAR_6)
  return VAR_13;

 if (VAR_18)
  VAR_24 = 0x0000;
 else
  VAR_24 = 0x0001;

 VAR_20 = FUNC_5(VAR_16, 0, VAR_24, VAR_9);
 if (VAR_20 != VAR_14)
  return VAR_13;

 VAR_20 = FUNC_6(VAR_16, VAR_7, &VAR_23);
 if (VAR_20)
  return VAR_20;

 if (VAR_23 & (VAR_4 | VAR_5))
  return VAR_13;

 if ((VAR_23 & (VAR_2 | VAR_3)) == VAR_2) {
  VAR_19->pro_under_formatting = 1;
  VAR_19->progress = 0;
  VAR_19->format_status = VAR_0;
  return VAR_14;
 }

 if (VAR_23 & VAR_3) {
  VAR_19->pro_under_formatting = 0;
  VAR_19->progress = 0;
  VAR_19->format_status = VAR_1;
  FUNC_7(VAR_16, FUNC_0(VAR_15), VAR_12);
  return VAR_14;
 }

 return VAR_13;
}
