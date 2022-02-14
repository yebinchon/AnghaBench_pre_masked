
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct smsc911x_data {char* loopback_tx_pkt; int mac_lock; int resetcount; scalar_t__ loopback_rx_pkt; } ;
struct TYPE_2__ {int addr; int bus; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 struct smsc911x_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct smsc911x_data*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct smsc911x_data*) ;
 int FUNC_5 (struct smsc911x_data*) ;
 unsigned int FUNC_6 (struct smsc911x_data*,int ) ;
 int FUNC_7 (struct smsc911x_data*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_15)
{
 struct smsc911x_data *VAR_16 = FUNC_1(VAR_15);
 struct phy_device *VAR_17 = VAR_15->phydev;
 int VAR_18 = -VAR_2;
 unsigned int VAR_19, VAR_20;
 unsigned long VAR_21;


 FUNC_0(VAR_16->loopback_tx_pkt);


 for (VAR_19 = 6; VAR_19 < 12; VAR_19++)
  VAR_16->loopback_tx_pkt[VAR_19] = (char)VAR_19;


 VAR_16->loopback_tx_pkt[12] = 0x00;
 VAR_16->loopback_tx_pkt[13] = 0x00;

 for (VAR_19 = 14; VAR_19 < VAR_11; VAR_19++)
  VAR_16->loopback_tx_pkt[VAR_19] = (char)VAR_19;

 VAR_20 = FUNC_6(VAR_16, VAR_3);
 VAR_20 &= VAR_5;
 VAR_20 |= VAR_4;
 FUNC_7(VAR_16, VAR_3, VAR_20);

 FUNC_7(VAR_16, VAR_13, VAR_14);
 FUNC_7(VAR_16, VAR_12,
  (u32)((ulong)VAR_16->loopback_rx_pkt & 0x03) << 8);

 for (VAR_19 = 0; VAR_19 < 10; VAR_19++) {

  FUNC_3(VAR_17->mdio.bus, VAR_17->mdio.addr,
       VAR_10, VAR_1 | VAR_0);


  FUNC_8(&VAR_16->mac_lock, VAR_21);
  FUNC_2(VAR_16, VAR_6, VAR_7
       | VAR_9 | VAR_8);
  FUNC_9(&VAR_16->mac_lock, VAR_21);

  if (FUNC_4(VAR_16) == 0) {
   VAR_18 = 0;
   break;
  }
  VAR_16->resetcount++;


  FUNC_8(&VAR_16->mac_lock, VAR_21);
  FUNC_2(VAR_16, VAR_6, 0);
  FUNC_9(&VAR_16->mac_lock, VAR_21);

  FUNC_5(VAR_16);
 }


 FUNC_8(&VAR_16->mac_lock, VAR_21);
 FUNC_2(VAR_16, VAR_6, 0);
 FUNC_9(&VAR_16->mac_lock, VAR_21);


 FUNC_3(VAR_17->mdio.bus, VAR_17->mdio.addr, VAR_10, 0);

 FUNC_7(VAR_16, VAR_13, 0);
 FUNC_7(VAR_16, VAR_12, 0);

 return VAR_18;
}
