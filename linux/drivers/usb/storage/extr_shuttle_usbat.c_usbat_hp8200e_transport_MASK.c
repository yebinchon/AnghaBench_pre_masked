
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;
struct scsi_cmnd {int cmd_len; unsigned char* cmnd; scalar_t__ sc_data_direction; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 unsigned int VAR_21 ;
 int FUNC_3 (struct us_data*,char*,unsigned int) ;
 int FUNC_4 (struct us_data*,unsigned char*) ;
 int FUNC_5 (struct us_data*,unsigned char*,unsigned char*,struct scsi_cmnd*) ;
 int FUNC_6 (struct us_data*,int ,unsigned char*,unsigned char*,int,int ,int ,int,int,scalar_t__,int ,unsigned int,int ,int) ;
 int FUNC_7 (struct us_data*,unsigned char*,unsigned char*,int) ;
 int FUNC_8 (struct us_data*,int ,unsigned char,unsigned char*) ;
 int FUNC_9 (struct us_data*,int ,unsigned int,int ) ;
 int FUNC_10 (struct us_data*,int ,scalar_t__*,int,int,int ) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_22, struct us_data *VAR_23)
{
 int VAR_24;
 unsigned char *VAR_25 = VAR_23->iobuf;
 unsigned char VAR_26[32];
 unsigned char VAR_27[32];
 unsigned int VAR_28;
 int VAR_29;

 VAR_28 = FUNC_0(VAR_22);







 VAR_26[0] = VAR_10;
 VAR_26[1] = VAR_13;
 VAR_26[2] = VAR_14;
 VAR_26[3] = VAR_12;
 VAR_26[4] = VAR_11;
 VAR_26[5] = VAR_9;
 VAR_26[6] = VAR_7;
 VAR_27[0] = 0x00;
 VAR_27[1] = 0x00;
 VAR_27[2] = 0x00;
 VAR_27[3] = VAR_28&0xFF;
 VAR_27[4] = (VAR_28>>8)&0xFF;
 VAR_27[5] = 0xB0;
 VAR_27[6] = 0xA0;

 for (VAR_29=7; VAR_29<19; VAR_29++) {
  VAR_26[VAR_29] = 0x10;
  VAR_27[VAR_29] = (VAR_29-7 >= VAR_22->cmd_len) ? 0 : VAR_22->cmnd[VAR_29-7];
 }

 VAR_24 = FUNC_4(VAR_23, VAR_25);
 FUNC_3(VAR_23, "Status = %02X\n", *VAR_25);
 if (VAR_24 != VAR_20)
  return VAR_18;
 if (VAR_22->cmnd[0] == VAR_5)
  VAR_21 = 0;

 if (VAR_22->sc_data_direction == VAR_1) {

  VAR_24 = FUNC_6(VAR_23, VAR_6,
   VAR_26, VAR_27, 19,
   VAR_8, VAR_15, 0xFD,
   (VAR_17 | VAR_16),
   VAR_1,
   FUNC_2(VAR_22),
   VAR_28, FUNC_1(VAR_22), 10);

  if (VAR_24 == VAR_19) {
   VAR_21 += VAR_28;
   FUNC_3(VAR_23, "Wrote %08X bytes\n", VAR_21);
  }

  return VAR_24;

 } else if (VAR_22->cmnd[0] == VAR_4 ||
     VAR_22->cmnd[0] == VAR_3) {

  return FUNC_5(VAR_23, VAR_26, VAR_27, VAR_22);

 }

 if (VAR_28 > 0xFFFF) {
  FUNC_3(VAR_23, "Error: len = %08X... what do I do now?\n",
        VAR_28);
  return VAR_18;
 }

 VAR_24 = FUNC_7(VAR_23, VAR_26, VAR_27, 7);

 if (VAR_24 != VAR_19)
  return VAR_24;
 VAR_24 = FUNC_10(VAR_23, VAR_6, VAR_22->cmnd, 12,
       VAR_22->cmnd[0] == VAR_2 ? 75 : 10, 0);

 if (VAR_24 != VAR_19)
  return VAR_24;



 if (VAR_28 != 0 && (VAR_22->sc_data_direction == VAR_0)) {



  if (FUNC_8(VAR_23, VAR_6, VAR_12, VAR_25) !=
       VAR_20) {
   return VAR_18;
  }

  if (VAR_28 > 0xFF) {
   VAR_28 = *VAR_25;
   if (FUNC_8(VAR_23, VAR_6, VAR_11, VAR_25) !=
        VAR_20) {
    return VAR_18;
   }
   VAR_28 += ((unsigned int) *VAR_25)<<8;
  }
  else
   VAR_28 = *VAR_25;


  VAR_24 = FUNC_9(VAR_23, FUNC_2(VAR_22), VAR_28,
                                      FUNC_1(VAR_22));
 }

 return VAR_24;
}
