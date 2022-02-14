
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {char* sense_buffer; int* cmnd; int result; int underflow; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct fib {int flags; } ;
struct aac_srb_reply {void* scsi_status; int sense_data; void* status; void* sense_data_size; void* srb_status; void* data_xfer_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
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
 int VAR_18 ;




 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct scsi_cmnd*,struct fib*) ;
 void* FUNC_5 (int) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_6 (struct fib*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (char*,int,int ,int,int) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_15 (struct scsi_cmnd*) ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_16(void *VAR_21, struct fib * VAR_22)
{
 struct aac_srb_reply *VAR_23;
 struct scsi_cmnd *VAR_24;

 VAR_24 = (struct scsi_cmnd *) VAR_21;

 if (!FUNC_4(VAR_24, VAR_22))
  return;

 FUNC_0(VAR_22 == ((void*)0));

 VAR_23 = (struct aac_srb_reply *) FUNC_6(VAR_22);

 VAR_24->sense_buffer[0] = '\0';

 if (VAR_22->flags & VAR_12) {

  VAR_23->srb_status = FUNC_5(134);
  VAR_23->scsi_status = FUNC_5(VAR_16);
 } else {



  FUNC_14(VAR_24, FUNC_12(VAR_24)
       - FUNC_7(VAR_23->data_xfer_length));
 }


 FUNC_13(VAR_24);


 if (VAR_24->cmnd[0] == 167 && !(VAR_24->cmnd[1] & 0x01)
   && VAR_19 > 0)
  FUNC_1(VAR_24);





 if (FUNC_7(VAR_23->status) != VAR_18) {
  int VAR_25;

  FUNC_11("aac_srb_callback: srb failed, status = %d\n",
    FUNC_7(VAR_23->status));
  VAR_25 = FUNC_9(VAR_20, FUNC_7(VAR_23->sense_data_size),
       VAR_17);
  VAR_24->result = VAR_6 << 16
    | VAR_3 << 8
    | VAR_15;
  FUNC_8(VAR_24->sense_buffer,
    VAR_23->sense_data, VAR_25);
 }




 switch ((FUNC_7(VAR_23->srb_status))&0x3f) {
 case 151:
 case 139:
 case 134:
  VAR_24->result = VAR_8 << 16 | VAR_3 << 8;
  break;
 case 155:
  switch (VAR_24->cmnd[0]) {
  case 163:
  case 128:
  case 166:
  case 131:
  case 165:
  case 130:
  case 164:
  case 129:
   if (FUNC_7(VAR_23->data_xfer_length)
      < VAR_24->underflow)
    FUNC_11("aacraid: SCSI CMD underflow\n");
   else
    FUNC_11("aacraid: SCSI CMD Data Overrun\n");
   VAR_24->result = VAR_6 << 16
     | VAR_3 << 8;
   break;
  case 167:
   VAR_24->result = VAR_8 << 16
     | VAR_3 << 8;
   break;
  default:
   VAR_24->result = VAR_8 << 16 | VAR_3 << 8;
   break;
  }
  break;
 case 162:
  VAR_24->result = VAR_4 << 16 | VAR_0 << 8;
  break;
 case 161:




  VAR_24->result = VAR_6 << 16 | VAR_0 << 8;
  break;
 case 140:
  VAR_24->result = VAR_9 << 16
    | VAR_14 << 8;
  break;
 case 142:
 case 148:
 case 146:
 case 149:
 case 135:
  VAR_24->result = VAR_7 << 16
    | VAR_3 << 8;
  break;

 case 156:
 case 133:
  VAR_24->result = VAR_11 << 16
    | VAR_3 << 8;
  break;

 case 158:
  VAR_24->result = VAR_5 << 16
    | VAR_3 << 8;
  break;

 case 157:
  VAR_24->result = VAR_10 << 16
    | VAR_3 << 8;
  break;

 case 145:
  VAR_24->result = VAR_6 << 16
    | VAR_13 << 8;
  break;
 case 137:
 case 152:
 case 147:
 case 136:
 case 141:
 case 132:
 case 138:
 case 159:
 case 154:
 case 160:
 case 143:
 case 144:
 case 150:
 case 153:
 default:
  if ((VAR_24->cmnd[0] == VAR_1)
   || (VAR_24->cmnd[0] == VAR_2)) {

   if (VAR_24->cmnd[2] & (0x01 << 5)) {
    VAR_24->result = VAR_8 << 16
     | VAR_3 << 8;
   break;
   } else {
    VAR_24->result = VAR_6 << 16
     | VAR_3 << 8;
   break;
   }
  } else {
   VAR_24->result = VAR_6 << 16
    | VAR_3 << 8;
   break;
  }
 }
 if (FUNC_7(VAR_23->scsi_status)
   == VAR_15) {
  int VAR_26;

  VAR_24->result |= VAR_15;
  VAR_26 = FUNC_9(VAR_20, FUNC_7(VAR_23->sense_data_size),
       VAR_17);




  FUNC_8(VAR_24->sense_buffer,
    VAR_23->sense_data, VAR_26);
 }




 VAR_24->result |= FUNC_7(VAR_23->scsi_status);

 FUNC_2(VAR_22);
 VAR_24->scsi_done(VAR_24);
}
