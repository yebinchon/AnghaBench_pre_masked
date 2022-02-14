
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int * data; } ;
struct rx_fwinfo {int dummy; } ;
struct rx_desc {int dummy; } ;
struct rtllib_rx_stats {int RxDrvInfoSize; int RxBufShift; int bICV; int bCRC; int bHwError; } ;
struct rtllib_hdr_3addr {int * addr3; int * addr2; int * addr1; int frame_ctl; } ;
struct TYPE_8__ {int numpacket_toself; int numpacket_matchbssid; } ;
struct r8192_priv {TYPE_4__ stats; TYPE_3__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int * bssid; } ;
struct TYPE_7__ {TYPE_2__* dev; TYPE_1__ current_network; } ;
struct TYPE_6__ {int * dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct r8192_priv*,int *,struct rtllib_rx_stats*,struct rtllib_rx_stats*) ;
 int FUNC_3 (struct r8192_priv*,struct rtllib_rx_stats*,struct rx_desc*,struct rx_fwinfo*,struct rtllib_rx_stats*,int,int,int,int) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct rtllib_rx_stats*,struct rtllib_rx_stats*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_4,
           struct sk_buff *VAR_5,
           struct rtllib_rx_stats *VAR_6,
           struct rx_desc *VAR_7,
           struct rx_fwinfo *VAR_8)
{
 struct r8192_priv *VAR_9 = (struct r8192_priv *)FUNC_7(VAR_4);
 bool VAR_10, VAR_11;
 bool VAR_12 = 0;
 struct rtllib_hdr_3addr *VAR_13;
 bool VAR_14 = 0;
 static struct rtllib_rx_stats VAR_15;
 u16 VAR_16, VAR_17;
 u8 *VAR_18;
 u8 *VAR_19;

 VAR_18 = VAR_5->data + VAR_6->RxDrvInfoSize + VAR_6->RxBufShift;

 VAR_13 = (struct rtllib_hdr_3addr *)VAR_18;
 VAR_16 = FUNC_5(VAR_13->frame_ctl);
 VAR_17 = FUNC_1(VAR_16);
 VAR_19 = VAR_13->addr1;

 VAR_10 =
  ((VAR_17 != VAR_2) &&
   FUNC_4(VAR_9->rtllib->current_network.bssid,
      (VAR_16 & VAR_1) ? VAR_13->addr1 :
      (VAR_16 & VAR_0) ? VAR_13->addr2 :
      VAR_13->addr3) &&
   (!VAR_6->bHwError) && (!VAR_6->bCRC) && (!VAR_6->bICV));
 VAR_11 = VAR_10 &&
    FUNC_4(VAR_19, VAR_9->rtllib->dev->dev_addr);
 if (FUNC_0(VAR_16) == VAR_3)
  VAR_12 = 1;
 if (VAR_10)
  VAR_9->stats.numpacket_matchbssid++;
 if (VAR_11)
  VAR_9->stats.numpacket_toself++;
 FUNC_2(VAR_9, VAR_18, &VAR_15, VAR_6);
 FUNC_3(VAR_9, VAR_6, VAR_7, VAR_8,
      &VAR_15, VAR_10,
      VAR_11, VAR_12, VAR_14);
 FUNC_6(VAR_6, &VAR_15);
}
