
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; scalar_t__ cb; } ;
struct rx_drvinfo_819x_usb {int PartAggr; int FirstAGGR; int BW; int TSFL; int SPLCP; int RxRate; int RxHT; } ;
struct rx_desc_819x_usb {int Length; int ICV; int CRC32; int SWDec; int RxDrvInfoSize; } ;
struct rtl8192_rx_info {struct net_device* dev; } ;
struct r8192_priv {TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int Length; int bICV; int bCRC; int bHwError; int Decrypted; int rate; int bIsAMPDU; int bFirstMPDU; int bShift; int RxIs40MHzPacket; int RxDrvInfoSize; int RxBufShift; int TimeStampLow; int bShortPreamble; } ;
struct TYPE_4__ {scalar_t__ pairwise_key_type; TYPE_1__* pHTInfo; } ;
struct TYPE_3__ {scalar_t__ bCurrentHTSupport; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct sk_buff*,struct ieee80211_rx_stats*,struct rx_drvinfo_819x_usb*) ;
 int FUNC_3 (struct net_device*,struct ieee80211_rx_stats*) ;
 int FUNC_4 (struct net_device*,struct ieee80211_rx_stats*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_4,
    struct ieee80211_rx_stats *VAR_5,
    bool VAR_6)
{
 struct rtl8192_rx_info *VAR_7 = (struct rtl8192_rx_info *)VAR_4->cb;
 struct net_device *VAR_8 = VAR_7->dev;
 struct r8192_priv *VAR_9 = (struct r8192_priv *)FUNC_5(VAR_8);
 struct rx_drvinfo_819x_usb *VAR_10 = ((void*)0);


 struct rx_desc_819x_usb *VAR_11 = (struct rx_desc_819x_usb *)VAR_4->data;

 VAR_5->Length = VAR_11->Length;
 VAR_5->RxDrvInfoSize = VAR_11->RxDrvInfoSize;
 VAR_5->RxBufShift = 0;
 VAR_5->bICV = VAR_11->ICV;
 VAR_5->bCRC = VAR_11->CRC32;
 VAR_5->bHwError = VAR_5->bCRC | VAR_5->bICV;

 VAR_5->Decrypted = !VAR_11->SWDec;

 if ((VAR_9->ieee80211->pHTInfo->bCurrentHTSupport) &&
     (VAR_9->ieee80211->pairwise_key_type == VAR_1))
  VAR_5->bHwError = 0;
 else
  VAR_5->bHwError = VAR_5->bCRC | VAR_5->bICV;

 if (VAR_5->Length < 24 || VAR_5->Length > VAR_2)
  VAR_5->bHwError |= 1;




 if (VAR_5->RxDrvInfoSize != 0) {
  VAR_10 = (struct rx_drvinfo_819x_usb *)(
    VAR_4->data
    + sizeof(struct rx_desc_819x_usb)
    + VAR_5->RxBufShift
         );


  if (!VAR_5->bHwError) {
   u8 VAR_12;

   VAR_12 = FUNC_0(VAR_10->RxHT,
         VAR_10->RxRate);
   if (VAR_12 == 0xff) {





    VAR_5->bHwError = 1;

    VAR_5->rate = VAR_3;
   } else {
    VAR_5->rate = VAR_12;
   }
  } else {
   VAR_5->rate = 0x02;
  }

  VAR_5->bShortPreamble = VAR_10->SPLCP;


  FUNC_3(VAR_8, VAR_5);

  VAR_5->bIsAMPDU = (VAR_10->PartAggr == 1);
  VAR_5->bFirstMPDU = (VAR_10->PartAggr == 1) &&
        (VAR_10->FirstAGGR == 1);
  VAR_5->TimeStampLow = VAR_10->TSFL;

  FUNC_4(VAR_8, VAR_5);


  if (VAR_10->FirstAGGR == 1 || VAR_10->PartAggr == 1)
   FUNC_1(VAR_0,
    "driver_info->FirstAGGR = %d, driver_info->PartAggr = %d\n",
     VAR_10->FirstAGGR, VAR_10->PartAggr);
 }

 FUNC_6(VAR_4, sizeof(struct rx_desc_819x_usb));

 if ((VAR_5->RxBufShift + VAR_5->RxDrvInfoSize) > 0) {
  VAR_5->bShift = 1;
  FUNC_6(VAR_4, VAR_5->RxBufShift + VAR_5->RxDrvInfoSize);
 }

 if (VAR_10) {
  VAR_5->RxIs40MHzPacket = VAR_10->BW;
  FUNC_2(VAR_4, VAR_5, VAR_10);
 }
}
