
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_data {int maxwritelen; struct proc_data* rbuffer; int readlen; int on_close; int * wbuffer; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {struct proc_data* private_data; } ;
struct TYPE_2__ {int opmode; char* nodeName; scalar_t__ powerSaveMode; int txDiversity; int rxDiversity; scalar_t__ authType; scalar_t__ modulation; scalar_t__ preamble; int fragThresh; int rxLifetime; int txLifetime; int rtsThres; int shortRetryLimit; int longRetryLimit; int txPower; int channelSet; scalar_t__* rates; int rmode; } ;
struct airo_info {TYPE_1__ config; int flags; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct net_device* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct proc_data*) ;
 struct proc_data* FUNC_3 (int,int ) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_19 ;
 int FUNC_6 (struct airo_info*,int) ;
 int FUNC_7 (struct proc_data*,char*,...) ;
 int FUNC_8 (struct proc_data*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_20, struct file *VAR_21)
{
 struct proc_data *VAR_22;
 struct net_device *VAR_23 = FUNC_0(VAR_20);
 struct airo_info *VAR_24 = VAR_23->ml_priv;
 int VAR_25;
 __le16 VAR_26;

 if ((VAR_21->private_data = FUNC_4(sizeof(struct proc_data ), VAR_4)) == ((void*)0))
  return -VAR_2;
 VAR_22 = VAR_21->private_data;
 if ((VAR_22->rbuffer = FUNC_3( 2048, VAR_4 )) == ((void*)0)) {
  FUNC_2 (VAR_21->private_data);
  return -VAR_2;
 }
 if ((VAR_22->wbuffer = FUNC_4( 2048, VAR_4 )) == ((void*)0)) {
  FUNC_2 (VAR_22->rbuffer);
  FUNC_2 (VAR_21->private_data);
  return -VAR_2;
 }
 VAR_22->maxwritelen = 2048;
 VAR_22->on_close = VAR_19;

 FUNC_6(VAR_24, 1);

 VAR_26 = VAR_24->config.opmode & VAR_7;
 VAR_25 = FUNC_7( VAR_22->rbuffer,
       "Mode: %s\n"
       "Radio: %s\n"
       "NodeName: %-16s\n"
       "PowerMode: %s\n"
       "DataRates: %d %d %d %d %d %d %d %d\n"
       "Channel: %d\n"
       "XmitPower: %d\n",
       VAR_26 == VAR_9 ? "adhoc" :
       VAR_26 == VAR_8 ? FUNC_1(VAR_24->config.rmode):
       VAR_26 == VAR_5 ? "AP" :
       VAR_26 == VAR_6 ? "AP RPTR" : "Error",
       FUNC_9(VAR_3, &VAR_24->flags) ? "off" : "on",
       VAR_24->config.nodeName,
       VAR_24->config.powerSaveMode == VAR_13 ? "CAM" :
       VAR_24->config.powerSaveMode == VAR_14 ? "PSP" :
       VAR_24->config.powerSaveMode == VAR_15 ? "PSPCAM" :
       "Error",
       (int)VAR_24->config.rates[0],
       (int)VAR_24->config.rates[1],
       (int)VAR_24->config.rates[2],
       (int)VAR_24->config.rates[3],
       (int)VAR_24->config.rates[4],
       (int)VAR_24->config.rates[5],
       (int)VAR_24->config.rates[6],
       (int)VAR_24->config.rates[7],
       FUNC_5(VAR_24->config.channelSet),
       FUNC_5(VAR_24->config.txPower)
  );
 FUNC_7( VAR_22->rbuffer + VAR_25,
   "LongRetryLimit: %d\n"
   "ShortRetryLimit: %d\n"
   "RTSThreshold: %d\n"
   "TXMSDULifetime: %d\n"
   "RXMSDULifetime: %d\n"
   "TXDiversity: %s\n"
   "RXDiversity: %s\n"
   "FragThreshold: %d\n"
   "WEP: %s\n"
   "Modulation: %s\n"
   "Preamble: %s\n",
   FUNC_5(VAR_24->config.longRetryLimit),
   FUNC_5(VAR_24->config.shortRetryLimit),
   FUNC_5(VAR_24->config.rtsThres),
   FUNC_5(VAR_24->config.txLifetime),
   FUNC_5(VAR_24->config.rxLifetime),
   VAR_24->config.txDiversity == 1 ? "left" :
   VAR_24->config.txDiversity == 2 ? "right" : "both",
   VAR_24->config.rxDiversity == 1 ? "left" :
   VAR_24->config.rxDiversity == 2 ? "right" : "both",
   FUNC_5(VAR_24->config.fragThresh),
   VAR_24->config.authType == VAR_0 ? "encrypt" :
   VAR_24->config.authType == VAR_1 ? "shared" : "open",
   VAR_24->config.modulation == VAR_11 ? "default" :
   VAR_24->config.modulation == VAR_10 ? "cck" :
   VAR_24->config.modulation == VAR_12 ? "mok" : "error",
   VAR_24->config.preamble == VAR_16 ? "auto" :
   VAR_24->config.preamble == VAR_17 ? "long" :
   VAR_24->config.preamble == VAR_18 ? "short" : "error"
  );
 VAR_22->readlen = FUNC_8( VAR_22->rbuffer );
 return 0;
}
