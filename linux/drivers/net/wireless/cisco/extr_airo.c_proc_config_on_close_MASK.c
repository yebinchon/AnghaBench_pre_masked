
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct proc_data {char* wbuffer; int writelen; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {struct proc_data* private_data; } ;
struct TYPE_3__ {int rmode; char* nodeName; int txDiversity; int rxDiversity; int preamble; int modulation; void* fragThresh; void* rxLifetime; void* txLifetime; void* rtsThres; void* shortRetryLimit; void* longRetryLimit; void* txPower; void* channelSet; scalar_t__* rates; int powerSaveMode; void* scanMode; int opmode; } ;
struct airo_info {TYPE_2__* dev; int flags; TYPE_1__ config; } ;
struct TYPE_4__ {int name; } ;


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
 struct net_device* FUNC_0 (struct inode*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int FUNC_1 (struct net_device*,int *,int *,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int *) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,int*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct airo_info*,int) ;
 int FUNC_8 (struct airo_info*,int ) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (struct airo_info*) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static void FUNC_12(struct inode *VAR_27, struct file *VAR_28)
{
 struct proc_data *VAR_29 = VAR_28->private_data;
 struct net_device *VAR_30 = FUNC_0(VAR_27);
 struct airo_info *VAR_31 = VAR_30->ml_priv;
 char *VAR_32;

 if ( !VAR_29->writelen ) return;

 FUNC_7(VAR_31, 1);
 FUNC_9 (VAR_5, &VAR_31->flags);

 VAR_32 = VAR_29->wbuffer;
 while( VAR_32[0] ) {

  if ( !FUNC_11( VAR_32, "Mode: ", 6 ) ) {
   VAR_32 += 6;
   if (FUNC_10(VAR_31))
    FUNC_9 (VAR_7, &VAR_31->flags);
   VAR_31->config.rmode &= ~VAR_21;
   FUNC_3 (VAR_4, &VAR_31->flags);
   VAR_31->config.opmode &= ~VAR_8;
   VAR_31->config.scanMode = VAR_25;
   if ( VAR_32[0] == 'a' ) {
    VAR_31->config.opmode |= VAR_10;
   } else {
    VAR_31->config.opmode |= VAR_9;
    if ( VAR_32[0] == 'r' ) {
     VAR_31->config.rmode |= VAR_23 | VAR_20;
     VAR_31->config.scanMode = VAR_26;
     FUNC_9 (VAR_4, &VAR_31->flags);
    } else if ( VAR_32[0] == 'y' ) {
     VAR_31->config.rmode |= VAR_24 | VAR_20;
     VAR_31->config.scanMode = VAR_26;
     FUNC_9 (VAR_4, &VAR_31->flags);
    } else if ( VAR_32[0] == 'l' )
     VAR_31->config.rmode |= VAR_22;
   }
   FUNC_9 (VAR_5, &VAR_31->flags);
  }


  else if (!FUNC_11(VAR_32,"Radio: ", 7)) {
   VAR_32 += 7;
   if (!FUNC_11(VAR_32,"off",3)) {
    FUNC_9 (VAR_6, &VAR_31->flags);
   } else {
    FUNC_3 (VAR_6, &VAR_31->flags);
   }
  }

  else if ( !FUNC_11( VAR_32, "NodeName: ", 10 ) ) {
   int VAR_33;

   VAR_32 += 10;
   FUNC_6( VAR_31->config.nodeName, 0, 16 );

   for( VAR_33 = 0; VAR_33 < 16 && VAR_32[VAR_33] != '\n'; VAR_33++ ) {
    VAR_31->config.nodeName[VAR_33] = VAR_32[VAR_33];
   }
   FUNC_9 (VAR_5, &VAR_31->flags);
  }


  else if ( !FUNC_11( VAR_32, "PowerMode: ", 11 ) ) {
   VAR_32 += 11;
   if ( !FUNC_11( VAR_32, "PSPCAM", 6 ) ) {
    VAR_31->config.powerSaveMode = VAR_16;
    FUNC_9 (VAR_5, &VAR_31->flags);
   } else if ( !FUNC_11( VAR_32, "PSP", 3 ) ) {
    VAR_31->config.powerSaveMode = VAR_15;
    FUNC_9 (VAR_5, &VAR_31->flags);
   } else {
    VAR_31->config.powerSaveMode = VAR_14;
    FUNC_9 (VAR_5, &VAR_31->flags);
   }
  } else if ( !FUNC_11( VAR_32, "DataRates: ", 11 ) ) {
   int VAR_34, VAR_35 = 0, VAR_36 = 0;


   VAR_32 += 11;
   while((VAR_34 = FUNC_5(VAR_32, &VAR_35, 3))!=-1) {
    VAR_31->config.rates[VAR_36++] = (u8)VAR_34;
    VAR_32 += VAR_35 + 1;
    VAR_35 = 0;
   }
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "Channel: ", 9 ) ) {
   int VAR_37, VAR_38 = 0;
   VAR_32 += 9;
   VAR_37 = FUNC_5(VAR_32, &VAR_38, VAR_38+3);
   if ( VAR_37 != -1 ) {
    VAR_31->config.channelSet = FUNC_4(VAR_37);
    FUNC_9 (VAR_5, &VAR_31->flags);
   }
  } else if ( !FUNC_11( VAR_32, "XmitPower: ", 11 ) ) {
   int VAR_39, VAR_40 = 0;
   VAR_32 += 11;
   VAR_39 = FUNC_5(VAR_32, &VAR_40, VAR_40+3);
   if ( VAR_39 != -1 ) {
    VAR_31->config.txPower = FUNC_4(VAR_39);
    FUNC_9 (VAR_5, &VAR_31->flags);
   }
  } else if ( !FUNC_11( VAR_32, "WEP: ", 5 ) ) {
   VAR_32 += 5;
   switch( VAR_32[0] ) {
   case 's':
    FUNC_8(VAR_31, VAR_3);
    break;
   case 'e':
    FUNC_8(VAR_31, VAR_1);
    break;
   default:
    FUNC_8(VAR_31, VAR_2);
    break;
   }
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "LongRetryLimit: ", 16 ) ) {
   int VAR_41, VAR_42 = 0;

   VAR_32 += 16;
   VAR_41 = FUNC_5(VAR_32, &VAR_42, 3);
   VAR_41 = (VAR_41<0) ? 0 : ((VAR_41>255) ? 255 : VAR_41);
   VAR_31->config.longRetryLimit = FUNC_4(VAR_41);
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "ShortRetryLimit: ", 17 ) ) {
   int VAR_43, VAR_44 = 0;

   VAR_32 += 17;
   VAR_43 = FUNC_5(VAR_32, &VAR_44, 3);
   VAR_43 = (VAR_43<0) ? 0 : ((VAR_43>255) ? 255 : VAR_43);
   VAR_31->config.shortRetryLimit = FUNC_4(VAR_43);
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "RTSThreshold: ", 14 ) ) {
   int VAR_45, VAR_46 = 0;

   VAR_32 += 14;
   VAR_45 = FUNC_5(VAR_32, &VAR_46, 4);
   VAR_45 = (VAR_45<0) ? 0 : ((VAR_45>VAR_0) ? VAR_0 : VAR_45);
   VAR_31->config.rtsThres = FUNC_4(VAR_45);
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "TXMSDULifetime: ", 16 ) ) {
   int VAR_47, VAR_48 = 0;

   VAR_32 += 16;
   VAR_47 = FUNC_5(VAR_32, &VAR_48, 5);
   VAR_47 = (VAR_47<0) ? 0 : VAR_47;
   VAR_31->config.txLifetime = FUNC_4(VAR_47);
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "RXMSDULifetime: ", 16 ) ) {
   int VAR_49, VAR_50 = 0;

   VAR_32 += 16;
   VAR_49 = FUNC_5(VAR_32, &VAR_50, 5);
   VAR_49 = (VAR_49<0) ? 0 : VAR_49;
   VAR_31->config.rxLifetime = FUNC_4(VAR_49);
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "TXDiversity: ", 13 ) ) {
   VAR_31->config.txDiversity =
    (VAR_32[13]=='l') ? 1 :
    ((VAR_32[13]=='r')? 2: 3);
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "RXDiversity: ", 13 ) ) {
   VAR_31->config.rxDiversity =
    (VAR_32[13]=='l') ? 1 :
    ((VAR_32[13]=='r')? 2: 3);
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if ( !FUNC_11( VAR_32, "FragThreshold: ", 15 ) ) {
   int VAR_51, VAR_52 = 0;

   VAR_32 += 15;
   VAR_51 = FUNC_5(VAR_32, &VAR_52, 4);
   VAR_51 = (VAR_51<256) ? 256 : ((VAR_51>VAR_0) ? VAR_0 : VAR_51);
   VAR_51 = VAR_51 & 0xfffe;
   VAR_31->config.fragThresh = FUNC_4(VAR_51);
   FUNC_9 (VAR_5, &VAR_31->flags);
  } else if (!FUNC_11(VAR_32, "Modulation: ", 12)) {
   VAR_32 += 12;
   switch(*VAR_32) {
   case 'd': VAR_31->config.modulation=VAR_12; FUNC_9(VAR_5, &VAR_31->flags); break;
   case 'c': VAR_31->config.modulation=VAR_11; FUNC_9(VAR_5, &VAR_31->flags); break;
   case 'm': VAR_31->config.modulation=VAR_13; FUNC_9(VAR_5, &VAR_31->flags); break;
   default: FUNC_2(VAR_31->dev->name, "Unknown modulation");
   }
  } else if (!FUNC_11(VAR_32, "Preamble: ", 10)) {
   VAR_32 += 10;
   switch(*VAR_32) {
   case 'a': VAR_31->config.preamble=VAR_17; FUNC_9(VAR_5, &VAR_31->flags); break;
   case 'l': VAR_31->config.preamble=VAR_18; FUNC_9(VAR_5, &VAR_31->flags); break;
   case 's': VAR_31->config.preamble=VAR_19; FUNC_9(VAR_5, &VAR_31->flags); break;
   default: FUNC_2(VAR_31->dev->name, "Unknown preamble");
   }
  } else {
   FUNC_2(VAR_31->dev->name, "Couldn't figure out %s", VAR_32);
  }
  while( VAR_32[0] && VAR_32[0] != '\n' ) VAR_32++;
  if ( VAR_32[0] ) VAR_32++;
 }
 FUNC_1(VAR_30, ((void*)0), ((void*)0), ((void*)0));
}
