
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct igb_ring {int idleslope; int hicredit; int locredit; int sendslope; scalar_t__ launchtime_enable; scalar_t__ cbs_enable; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; struct net_device* netdev; struct igb_ring** tx_ring; } ;


 int FUNC_0 (unsigned long long,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct net_device*,char*,char*,char*,int,unsigned long long,int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct e1000_hw*,int,int ) ;
 int FUNC_9 (struct e1000_hw*,int,int ) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11(struct igb_adapter *VAR_11, int VAR_12)
{
 struct igb_ring *VAR_13 = VAR_11->tx_ring[VAR_12];
 struct net_device *VAR_14 = VAR_11->netdev;
 struct e1000_hw *VAR_15 = &VAR_11->hw;
 u32 VAR_16, VAR_17;
 u16 VAR_18;

 FUNC_3(VAR_15->mac.type != VAR_10);
 FUNC_3(VAR_12 < 0 || VAR_12 > 1);





 if (VAR_13->cbs_enable || VAR_13->launchtime_enable) {
  FUNC_9(VAR_15, VAR_12, VAR_8);
  FUNC_8(VAR_15, VAR_12, VAR_6);
 } else {
  FUNC_9(VAR_15, VAR_12, VAR_9);
  FUNC_8(VAR_15, VAR_12, VAR_7);
 }


 if (VAR_13->cbs_enable || VAR_12 == 0) {
  if (VAR_12 == 0 && !VAR_13->cbs_enable) {

   VAR_13->idleslope = 1000000;
   VAR_13->hicredit = VAR_5;
  }





  VAR_17 = FUNC_7(VAR_0);
  VAR_17 |= VAR_2;
  FUNC_10(VAR_0, VAR_17);
  VAR_18 = FUNC_0(VAR_13->idleslope * 61034ULL, 1000000);

  VAR_16 = FUNC_7(FUNC_1(VAR_12));
  VAR_16 &= ~VAR_1;
  VAR_16 |= VAR_18;
  FUNC_10(FUNC_1(VAR_12), VAR_16);

  FUNC_10(FUNC_2(VAR_12),
       0x80000000 + VAR_13->hicredit * 0x7735);
 } else {


  VAR_16 = FUNC_7(FUNC_1(VAR_12));
  VAR_16 &= ~VAR_1;
  FUNC_10(FUNC_1(VAR_12), VAR_16);


  FUNC_10(FUNC_2(VAR_12), 0);





  if (!FUNC_4(VAR_11)) {
   VAR_17 = FUNC_7(VAR_0);
   VAR_17 &= ~VAR_2;
   FUNC_10(VAR_0, VAR_17);
  }
 }


 if (VAR_13->launchtime_enable) {
  VAR_17 = FUNC_7(VAR_0);
  VAR_17 |= VAR_3 |
         VAR_4;
  FUNC_10(VAR_0, VAR_17);
 } else {




  if (!FUNC_5(VAR_11)) {
   VAR_17 = FUNC_7(VAR_0);
   VAR_17 &= ~VAR_3;
   VAR_17 &= ~VAR_4;
   FUNC_10(VAR_0, VAR_17);
  }
 }






 FUNC_6(VAR_14, "Qav Tx mode: cbs %s, launchtime %s, queue %d idleslope %d sendslope %d hiCredit %d locredit %d\n",
     VAR_13->cbs_enable ? "enabled" : "disabled",
     VAR_13->launchtime_enable ? "enabled" : "disabled",
     VAR_12,
     VAR_13->idleslope, VAR_13->sendslope,
     VAR_13->hicredit, VAR_13->locredit);
}
