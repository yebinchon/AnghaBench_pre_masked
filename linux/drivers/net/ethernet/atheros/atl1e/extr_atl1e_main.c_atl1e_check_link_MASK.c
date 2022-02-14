
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct atl1e_hw {int dummy; } ;
struct atl1e_adapter {scalar_t__ link_speed; scalar_t__ link_duplex; struct net_device* netdev; struct atl1e_hw hw; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
 int FUNC_1 (struct atl1e_hw*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct atl1e_hw*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct atl1e_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct atl1e_adapter*) ;
 int FUNC_5 (struct net_device*,char*,scalar_t__,char*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct atl1e_adapter *VAR_6)
{
 struct atl1e_hw *VAR_7 = &VAR_6->hw;
 struct net_device *VAR_8 = VAR_6->netdev;
 int VAR_9 = 0;
 u16 VAR_10, VAR_11, VAR_12;


 FUNC_3(VAR_7, VAR_3, &VAR_12);
 FUNC_3(VAR_7, VAR_3, &VAR_12);
 if ((VAR_12 & VAR_0) == 0) {

  if (FUNC_7(VAR_8)) {
   u32 VAR_13;

   VAR_13 = FUNC_0(VAR_7, VAR_4);
   VAR_13 &= ~VAR_2;
   FUNC_1(VAR_7, VAR_4, VAR_13);
   VAR_6->link_speed = VAR_5;
   FUNC_6(VAR_8);
   FUNC_9(VAR_8);
  }
 } else {

  VAR_9 = FUNC_2(VAR_7, &VAR_10, &VAR_11);
  if (FUNC_11(VAR_9))
   return VAR_9;


  if (VAR_6->link_speed != VAR_10 ||
      VAR_6->link_duplex != VAR_11) {
   VAR_6->link_speed = VAR_10;
   VAR_6->link_duplex = VAR_11;
   FUNC_4(VAR_6);
   FUNC_5(VAR_8,
        "NIC Link is Up <%d Mbps %s Duplex>\n",
        VAR_6->link_speed,
        VAR_6->link_duplex == VAR_1 ?
        "Full" : "Half");
  }

  if (!FUNC_7(VAR_8)) {

   FUNC_8(VAR_8);
   FUNC_10(VAR_8);
  }
 }
 return 0;
}
