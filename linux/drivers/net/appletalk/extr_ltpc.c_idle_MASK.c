
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xmitQel {int* cbuf; int cbuflen; int mailbox; int* dbuf; int dbuflen; int QWrite; } ;
struct net_device {int base_addr; scalar_t__ irq; } ;
struct TYPE_3__ {int cbuflen; int dbuflen; int mailbox; int QWrite; void* dbuf; void* cbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xmitQel* FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (char*,...) ;
 TYPE_1__* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int VAR_10 ;
 int FUNC_12 (struct net_device*,int) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_12)
{
 unsigned long VAR_13;
 int VAR_14;



 struct xmitQel *VAR_15 = ((void*)0);
 int VAR_16;
 int VAR_17;
 int VAR_18 = VAR_12->base_addr;

 FUNC_10(&VAR_10, VAR_13);
 if(VAR_1) {
  FUNC_11(&VAR_10, VAR_13);
  return;
 }
 VAR_1 = 1;
 FUNC_11(&VAR_10, VAR_13);


 (void) FUNC_7(VAR_18+6);

 VAR_16 = 100;

loop:
 if (0>VAR_16--) {
  FUNC_9("idle: looped too many times\n");
  goto done;
 }

 VAR_14 = FUNC_7(VAR_18+6);
 if (VAR_14 != FUNC_7(VAR_18+6)) goto loop;

 switch(VAR_14) {
  case 0xfc:

   if (VAR_2 & VAR_0) FUNC_9("idle: fc\n");
   FUNC_3(VAR_12);
   break;
  case 0xfd:

   if(VAR_2 & VAR_0) FUNC_9("idle: fd\n");
   FUNC_4(VAR_12);
   break;
  case 0xf9:

   if (VAR_2 & VAR_0) FUNC_9("idle: f9\n");
   if(!VAR_6[0]) {
    VAR_6[0] = 1;
    VAR_7[0].cbuf = VAR_8;
    VAR_7[0].cbuflen = 2;
    VAR_7[0].dbuf = VAR_9;
    VAR_7[0].dbuflen = 2;
    VAR_7[0].QWrite = 0;
    VAR_7[0].mailbox = 0;
    FUNC_1(&VAR_7[0]);
   }
   FUNC_7(VAR_12->base_addr+1);
   FUNC_7(VAR_12->base_addr+0);
   if( FUNC_12(VAR_12,0xf9) )
    FUNC_9("timed out idle f9\n");
   break;
  case 0xf8:

   if (VAR_11) {
    FUNC_7(VAR_12->base_addr+1);
    FUNC_7(VAR_12->base_addr+0);
    if(FUNC_12(VAR_12,0xf8) )
     FUNC_9("timed out idle f8\n");
   } else {
    goto done;
   }
   break;
  case 0xfa:

   if(VAR_2 & VAR_0) FUNC_9("idle: fa\n");
   if (VAR_11) {
    VAR_15=FUNC_0();
    FUNC_8(VAR_4,VAR_15->cbuf,VAR_15->cbuflen);
    VAR_4[1] = VAR_15->mailbox;
    if (VAR_2>1) {
     int VAR_19;
     FUNC_9("ltpc: sent command     ");
     VAR_19 = VAR_15->cbuflen;
     if (VAR_19>100) VAR_19=100;
     for(VAR_17=0;VAR_17<VAR_19;VAR_17++)
      FUNC_9("%02x ",VAR_4[VAR_17]);
     FUNC_9("\n");
    }
    FUNC_2(VAR_12);
     if(0xfa==FUNC_7(VAR_18+6)) {

      goto done;
     }
   } else {

    if (!VAR_6[0]) {
     VAR_6[0] = 1;
     VAR_7[0].cbuf = VAR_8;
     VAR_7[0].cbuflen = 2;
     VAR_7[0].dbuf = VAR_9;
     VAR_7[0].dbuflen = 2;
     VAR_7[0].QWrite = 0;
     VAR_7[0].mailbox = 0;
     FUNC_1(&VAR_7[0]);
    } else {
     FUNC_9("trouble: response command already queued\n");
     goto done;
    }
   }
   break;
  case 0Xfb:

   if(VAR_2 & VAR_0) FUNC_9("idle: fb\n");
   if(VAR_15->QWrite) {
    FUNC_8(VAR_3,VAR_15->dbuf,VAR_15->dbuflen);
    FUNC_6(VAR_12);
   } else {
    FUNC_5(VAR_12);



    if(VAR_15->mailbox) {
     FUNC_8(VAR_15->dbuf,VAR_3,VAR_15->dbuflen);
    } else {

     VAR_5[ 0x0f & VAR_3[0] ] = VAR_3[1];
     VAR_6[0]=0;
    }
   }
   break;
 }
 goto loop;

done:
 VAR_1=0;







 if (VAR_12->irq) {
  FUNC_7(VAR_18+7);
  FUNC_7(VAR_18+7);
 }
}
