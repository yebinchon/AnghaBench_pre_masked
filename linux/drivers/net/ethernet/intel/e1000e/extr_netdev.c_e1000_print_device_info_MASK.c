
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dev_addr; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_6__ {scalar_t__ width; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; TYPE_3__ bus; } ;
struct e1000_adapter {struct net_device* netdev; struct e1000_hw hw; } ;
typedef int pba_str ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int *,int) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 struct net_device *VAR_5 = VAR_3->netdev;
 u32 VAR_6;
 u8 VAR_7[VAR_0];


 FUNC_1("(PCI Express:2.5GT/s:%s) %pM\n",

        ((VAR_4->bus.width == VAR_1) ? "Width x4" :
  "Width x1"),

        VAR_5->dev_addr);
 FUNC_1("Intel(R) PRO/%s Network Connection\n",
        (VAR_4->phy.type == VAR_2) ? "10/100" : "1000");
 VAR_6 = FUNC_0(VAR_4, VAR_7,
      VAR_0);
 if (VAR_6)
  FUNC_2((char *)VAR_7, "Unknown", sizeof(VAR_7));
 FUNC_1("MAC: %d, PHY: %d, PBA No: %s\n",
        VAR_4->mac.type, VAR_4->phy.type, VAR_7);
}
