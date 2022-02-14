
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int parent; } ;
struct net_device {TYPE_5__ dev; } ;
struct ethtool_eee {int eee_active; int eee_enabled; int tx_lpi_enabled; int tx_lpi_timer; void* lp_advertised; void* advertised; int supported; } ;
struct TYPE_8__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_9__ {int type; TYPE_3__ ops; } ;
struct TYPE_6__ {int eee_disable; } ;
struct TYPE_7__ {TYPE_1__ ich8lan; } ;
struct e1000_hw {TYPE_4__ phy; TYPE_2__ dev_spec; } ;
struct e1000_adapter {int flags2; int eee_advert; struct e1000_hw hw; } ;


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


 int FUNC_0 (struct e1000_hw*,int,int*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct e1000_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_14, struct ethtool_eee *VAR_15)
{
 struct e1000_adapter *VAR_16 = FUNC_4(VAR_14);
 struct e1000_hw *VAR_17 = &VAR_16->hw;
 u16 VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22;

 if (!(VAR_16->flags2 & VAR_6))
  return -VAR_5;

 switch (VAR_17->phy.type) {
 case 129:
  VAR_18 = VAR_10;
  VAR_19 = VAR_11;
  VAR_20 = VAR_12;
  break;
 case 128:
  VAR_18 = VAR_7;
  VAR_19 = VAR_8;
  VAR_20 = VAR_9;
  break;
 default:
  return -VAR_5;
 }

 FUNC_5(VAR_14->dev.parent);

 VAR_22 = VAR_17->phy.ops.acquire(VAR_17);
 if (VAR_22) {
  FUNC_6(VAR_14->dev.parent);
  return -VAR_3;
 }


 VAR_22 = FUNC_0(VAR_17, VAR_18, &VAR_21);
 if (VAR_22)
  goto release;
 VAR_15->supported = FUNC_3(VAR_21);


 VAR_15->advertised = FUNC_2(VAR_16->eee_advert);


 VAR_22 = FUNC_0(VAR_17, VAR_19, &VAR_21);
 if (VAR_22)
  goto release;
 VAR_15->lp_advertised = FUNC_2(VAR_21);


 VAR_22 = FUNC_0(VAR_17, VAR_20, &VAR_21);
 if (VAR_22)
  goto release;
 if (VAR_17->phy.type == 129)
  VAR_21 <<= 8;





 if (VAR_21 & (VAR_1 | VAR_0))
  VAR_15->eee_active = 1;

 VAR_15->eee_enabled = !VAR_17->dev_spec.ich8lan.eee_disable;
 VAR_15->tx_lpi_enabled = 1;
 VAR_15->tx_lpi_timer = FUNC_1(VAR_13) >> VAR_2;

release:
 VAR_17->phy.ops.release(VAR_17);
 if (VAR_22)
  VAR_22 = -VAR_4;

 FUNC_6(VAR_14->dev.parent);

 return VAR_22;
}
