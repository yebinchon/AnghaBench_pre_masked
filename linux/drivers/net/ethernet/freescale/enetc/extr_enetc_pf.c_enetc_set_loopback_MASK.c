
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct enetc_ndev_priv {TYPE_1__* si; } ;
struct enetc_hw {int dummy; } ;
struct TYPE_2__ {struct enetc_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct enetc_hw*,int ) ;
 int FUNC_1 (struct enetc_hw*,int ,int) ;
 struct enetc_ndev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7, bool VAR_8)
{
 struct enetc_ndev_priv *VAR_9 = FUNC_2(VAR_7);
 struct enetc_hw *VAR_10 = &VAR_9->si->hw;
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_10, VAR_4);
 if (VAR_11 & VAR_6) {

  VAR_11 = (VAR_11 & ~VAR_3) |
        (VAR_8 ? VAR_3 : 0);
  FUNC_1(VAR_10, VAR_4, VAR_11);
 } else {

  VAR_11 = FUNC_0(VAR_10, VAR_0);
  VAR_11 = (VAR_11 & ~VAR_2) |
        (VAR_8 ? VAR_2 : 0);
  VAR_11 = (VAR_11 & ~VAR_1) |
        (VAR_8 ? VAR_1 : 0);
  FUNC_1(VAR_10, VAR_0, VAR_11);
  FUNC_1(VAR_10, VAR_5, VAR_11);
 }
}
