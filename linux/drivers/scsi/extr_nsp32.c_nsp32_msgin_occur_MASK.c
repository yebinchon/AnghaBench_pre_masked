
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
typedef int nsp32_sgtable ;
struct TYPE_13__ {unsigned char* msginbuf; int msgin_len; scalar_t__ msgout_len; TYPE_3__* cur_lunt; TYPE_7__* cur_target; } ;
typedef TYPE_4__ nsp32_hw_data ;
struct TYPE_14__ {int sync_flag; } ;
struct TYPE_12__ {int msgin03; int cur_entry; int sglun_paddr; } ;
struct TYPE_11__ {TYPE_1__* host; } ;
struct TYPE_10__ {unsigned int io_port; scalar_t__ hostdata; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;

 unsigned short VAR_6 ;
 unsigned short VAR_7 ;





 int VAR_8 ;

 void* VAR_9 ;

 unsigned long VAR_10 ;
 int VAR_11 ;



 unsigned short VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;

 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

 int VAR_22 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned int) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,...) ;
 unsigned char FUNC_5 (unsigned int,int ) ;
 unsigned int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct scsi_cmnd*,unsigned char) ;
 int FUNC_8 (struct scsi_cmnd*,unsigned short) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (unsigned int,int ,long) ;

__attribute__((used)) static void FUNC_14(struct scsi_cmnd *VAR_23,
         unsigned long VAR_24,
         unsigned short VAR_25)
{
 nsp32_hw_data *VAR_26 = (nsp32_hw_data *)VAR_23->device->host->hostdata;
 unsigned int VAR_27 = VAR_23->device->host->io_port;
 unsigned char VAR_28;
 unsigned char VAR_29;
 unsigned char VAR_30;
 unsigned short VAR_31 = 0;
 int VAR_32 = VAR_22;
 long VAR_33;
 int VAR_34;






 VAR_28 = FUNC_5(VAR_27, VAR_16);
 VAR_26->msginbuf[(unsigned char)VAR_26->msgin_len] = VAR_28;
 VAR_29 = VAR_26->msginbuf[0];
 FUNC_3(VAR_14,
    "enter: msglen: 0x%x msgin: 0x%x msgtype: 0x%x",
    VAR_26->msgin_len, VAR_28, VAR_29);
 FUNC_9(VAR_26);




 if (VAR_29 & 0x80) {
  if (!(VAR_24 & VAR_10)) {

   goto reject;
  }

  VAR_30 = VAR_29 & 0x1f;
  VAR_34 = FUNC_7(VAR_23, VAR_30);
  if (VAR_34 == VAR_22) {
   goto restart;
  } else {
   goto reject;
  }
 }






 switch (VAR_29) {



 case 141:
 case 140:




  FUNC_4(VAR_11,
      "unexpected message of AutoSCSI MsgIn: 0x%x", VAR_28);
  break;

 case 130:




  if ((VAR_25 & VAR_6) || (VAR_25 & VAR_7)) {
   unsigned int VAR_35;

   VAR_35 = FUNC_6(VAR_27, VAR_15);
   if ((VAR_25 & VAR_12) && (VAR_35 > 0)) {
    FUNC_0(VAR_23, VAR_35);
   } else {

   }
  }
  VAR_26->cur_lunt->msgin03 = VAR_9;




  FUNC_13(VAR_27, VAR_5, VAR_4);




  VAR_33 = VAR_26->cur_lunt->sglun_paddr +
   (VAR_26->cur_lunt->cur_entry * sizeof(nsp32_sgtable));
  FUNC_13(VAR_27, VAR_21, VAR_33);

  break;

 case 129:




  FUNC_4 (VAR_11,
      "unexpected message of AutoSCSI MsgIn: SAVE_POINTERS");

  break;

 case 131:


  if (VAR_26->cur_target->sync_flag &
    (VAR_19 | VAR_20)) {





   FUNC_11(VAR_26, VAR_26->cur_target);
   VAR_26->cur_target->sync_flag &= ~VAR_19;
   VAR_26->cur_target->sync_flag |= VAR_18;

  }
  break;

 case 133:
 case 132:

  FUNC_4 (VAR_11,
      "unsupported message: 0x%x", VAR_29);
  break;

 case 134:



  goto reject;




 case 128:
 case 0x23:




  if (VAR_26->msgin_len >= 1) {
   goto reject;
  }


  VAR_32 = VAR_9;

  break;




 case 138:
  if (VAR_26->msgin_len < 1) {




   VAR_32 = VAR_9;
   break;
  }

  if ((VAR_26->msginbuf[1] + 1) > VAR_26->msgin_len) {






   VAR_32 = VAR_9;
   break;
  }





  switch (VAR_26->msginbuf[2]) {
  case 137:

   goto reject;
   break;

  case 136:



   if (VAR_26->msgin_len != VAR_8 + 1) {



    goto reject;
    break;
   }

   FUNC_1(VAR_23);

   break;

  case 139:

   goto reject;

   break;

  case 135:
   goto reject;

   break;

  default:
   goto reject;
  }
  break;

 default:
  goto reject;
 }

 restart:
 if (VAR_32 == VAR_22) {
  VAR_26->msgin_len = 0;
  if (VAR_26->msgout_len > 0) {
   FUNC_13(VAR_27, VAR_17, 0);
   VAR_31 |= VAR_0;
  }





  VAR_31 |= (VAR_1 | VAR_2);




  if (VAR_26->cur_lunt->msgin03 == VAR_22) {
   VAR_31 |= VAR_3;
  }
  VAR_26->cur_lunt->msgin03 = VAR_9;
 } else {
  VAR_26->msgin_len++;
 }




 FUNC_8(VAR_23, VAR_31);




 FUNC_12(VAR_26, VAR_13);




 FUNC_10(VAR_26);

 FUNC_3(VAR_14, "exit");

 return;

 reject:
 FUNC_4(VAR_11,
    "invalid or unsupported MessageIn, rejected. "
    "current msg: 0x%x (len: 0x%x), processing msg: 0x%x",
    VAR_28, VAR_26->msgin_len, VAR_29);
 FUNC_2(VAR_23);
 VAR_26->msgin_len = 0;

 goto restart;
}
