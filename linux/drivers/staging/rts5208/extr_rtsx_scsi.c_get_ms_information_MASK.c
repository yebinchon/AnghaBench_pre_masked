
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int* cmnd; } ;
struct ms_info {int raw_model_name; int raw_sys_info; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 int FUNC_0 (struct ms_info*) ;
 scalar_t__ FUNC_1 (struct ms_info*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (struct scsi_cmnd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct rtsx_chip*,unsigned int) ;
 scalar_t__ FUNC_4 (struct rtsx_chip*,unsigned int) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int*,unsigned int,struct scsi_cmnd*) ;
 scalar_t__ FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_11 (struct rtsx_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_8, struct rtsx_chip *VAR_9)
{
 struct ms_info *VAR_10 = &VAR_9->ms_card;
 unsigned int VAR_11 = FUNC_2(VAR_8);
 u8 VAR_12, VAR_13;
 u8 *VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 if (!FUNC_3(VAR_9, VAR_11)) {
  FUNC_11(VAR_9, VAR_11, VAR_4);
  return VAR_7;
 }
 if (FUNC_4(VAR_9, VAR_11) != VAR_1) {
  FUNC_11(VAR_9, VAR_11, VAR_3);
  return VAR_7;
 }

 if ((VAR_8->cmnd[2] != 0xB0) || (VAR_8->cmnd[4] != 0x4D) ||
     (VAR_8->cmnd[5] != 0x53) || (VAR_8->cmnd[6] != 0x49) ||
     (VAR_8->cmnd[7] != 0x44)) {
  FUNC_11(VAR_9, VAR_11, VAR_2);
  return VAR_7;
 }

 VAR_12 = VAR_8->cmnd[3];
 if ((FUNC_1(VAR_10) && (VAR_12 == 0x10)) ||
     (!FUNC_1(VAR_10) && (VAR_12 == 0x13)) ||
     !FUNC_0(VAR_10)) {
  FUNC_11(VAR_9, VAR_11, VAR_2);
  return VAR_7;
 }

 if (VAR_12 == 0x15) {
  VAR_15 = 0x3A;
  VAR_13 = 0x3A;
 } else {
  VAR_15 = 0x6A;
  VAR_13 = 0x6A;
 }

 VAR_14 = FUNC_6(VAR_15, VAR_0);
 if (!VAR_14)
  return VAR_6;

 VAR_16 = 0;

 VAR_14[VAR_16++] = 0x00;
 VAR_14[VAR_16++] = VAR_13;

 if (FUNC_1(VAR_10))
  VAR_14[VAR_16++] = 0x03;
 else
  VAR_14[VAR_16++] = 0x02;


 VAR_14[VAR_16++] = 0x01;

 VAR_14[VAR_16++] = 0x00;
 VAR_14[VAR_16++] = 0x00;
 VAR_14[VAR_16++] = 0x00;

 VAR_14[VAR_16++] = 0x01;




 VAR_14[VAR_16++] = VAR_12;

 if (VAR_12 == 0x15)
  VAR_13 = 0x31;
 else
  VAR_13 = 0x61;

 VAR_14[VAR_16++] = 0x00;
 VAR_14[VAR_16++] = VAR_13;

 VAR_14[VAR_16++] = 0x80;
 if ((VAR_12 == 0x10) || (VAR_12 == 0x13)) {

  FUNC_7(VAR_14 + VAR_16, VAR_10->raw_sys_info, 96);
 } else {

  FUNC_7(VAR_14 + VAR_16, VAR_10->raw_model_name, 48);
 }

 FUNC_8(VAR_14, VAR_15, VAR_8);

 if (VAR_12 == 0x15)
  FUNC_10(VAR_8, FUNC_9(VAR_8) - 0x3C);
 else
  FUNC_10(VAR_8, FUNC_9(VAR_8) - 0x6C);

 FUNC_5(VAR_14);
 return VAR_5;
}
