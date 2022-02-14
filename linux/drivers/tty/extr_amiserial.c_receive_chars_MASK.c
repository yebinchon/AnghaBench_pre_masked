
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int tty; } ;
struct async_icount {int overrun; int frame; int parity; int brk; int rx; } ;
struct serial_state {int ignore_status_mask; int read_status_mask; TYPE_1__ tport; struct async_icount icount; } ;
struct TYPE_5__ {int serdatr; int intreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__ VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct serial_state *VAR_14)
{
        int VAR_15;
 int VAR_16;
 unsigned char VAR_17, VAR_18;
 struct async_icount *VAR_19;
 int VAR_20 = 0;

 VAR_19 = &VAR_14->icount;

 VAR_15 = VAR_9;
 VAR_16 = VAR_13.serdatr;
 FUNC_1();
 VAR_13.intreq = VAR_1;
 FUNC_1();

 if((VAR_16 & 0x1ff) == 0)
     VAR_15 |= VAR_8;
 if(VAR_16 & VAR_2)
     VAR_15 |= VAR_11;

 VAR_17 = VAR_16 & 0xff;
 VAR_19->rx++;




 VAR_18 = VAR_5;







 if (VAR_15 & (VAR_8 | VAR_12 |
        VAR_10 | VAR_11)) {



   if (VAR_15 & VAR_8) {
     VAR_15 &= ~(VAR_10 | VAR_12);
     VAR_19->brk++;
   } else if (VAR_15 & VAR_12)
     VAR_19->parity++;
   else if (VAR_15 & VAR_10)
     VAR_19->frame++;
   if (VAR_15 & VAR_11)
     VAR_19->overrun++;






   if (VAR_15 & VAR_14->ignore_status_mask)
     goto out;

   VAR_15 &= VAR_14->read_status_mask;

   if (VAR_15 & (VAR_8)) {



     VAR_18 = VAR_3;
     if (VAR_14->tport.flags & VAR_0)
       FUNC_0(VAR_14->tport.tty);
   } else if (VAR_15 & VAR_12)
     VAR_18 = VAR_7;
   else if (VAR_15 & VAR_10)
     VAR_18 = VAR_4;
   if (VAR_15 & VAR_11) {





      VAR_20 = 1;
   }
 }
 FUNC_4(&VAR_14->tport, VAR_17, VAR_18);
 if (VAR_20 == 1)
  FUNC_4(&VAR_14->tport, 0, VAR_6);
 FUNC_3(&VAR_14->tport);
out:
 return;
}
