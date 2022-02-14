
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct rtllib_hdr_3addr {int addr2; int frame_ctl; int addr3; } ;
struct rtllib_disassoc {int reason; } ;
struct TYPE_6__ {int bBusyTraffic; } ;
struct TYPE_5__ {int reassoc; } ;
struct TYPE_4__ {int bssid; } ;
struct rtllib_device {int softmac_features; scalar_t__ state; scalar_t__ iw_mode; int is_roaming; int (* rtllib_ap_sec_type ) (struct rtllib_device*) ;int associate_procedure_wq; int dev; int (* LedControlHandler ) (int ,int ) ;TYPE_3__ LinkDetectInfo; TYPE_2__ softmac_stats; TYPE_1__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rtllib_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (struct rtllib_device*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct rtllib_device*) ;

__attribute__((used)) static inline int
FUNC_9(struct rtllib_device *VAR_8, struct sk_buff *VAR_9)
{
 struct rtllib_hdr_3addr *VAR_10 = (struct rtllib_hdr_3addr *) VAR_9->data;
 u16 VAR_11;

 if (FUNC_3(VAR_10->addr3, VAR_8->current_network.bssid, VAR_0) != 0)
  return 0;




 if ((VAR_8->softmac_features & VAR_1) &&
     VAR_8->state == VAR_5 &&
     (VAR_8->iw_mode == VAR_2)) {
  VAR_11 = FUNC_2(VAR_10->frame_ctl);
  FUNC_4(VAR_8->dev,
       "==========>received disassoc/deauth(%x) frame, reason code:%x\n",
       FUNC_1(VAR_11),
       ((struct rtllib_disassoc *)VAR_9->data)->reason);
  VAR_8->state = VAR_4;
  VAR_8->softmac_stats.reassoc++;
  VAR_8->is_roaming = 1;
  VAR_8->LinkDetectInfo.bBusyTraffic = 0;
  FUNC_5(VAR_8);
  FUNC_0(VAR_8, VAR_10->addr2);
  if (VAR_8->LedControlHandler != ((void*)0))
   VAR_8->LedControlHandler(VAR_8->dev,
      VAR_3);

  if (!(VAR_8->rtllib_ap_sec_type(VAR_8) &
      (VAR_6|VAR_7)))
   FUNC_6(
           &VAR_8->associate_procedure_wq, 5);
 }
 return 0;
}
