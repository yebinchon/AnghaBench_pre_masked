
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device_stats {int tx_packets; int tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
struct c_can_priv {int (* read_reg ) (struct c_can_priv*,int ) ;int* dlc; int tx_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (int) ;
 struct c_can_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct c_can_priv*,int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5)
{
 struct c_can_priv *VAR_6 = FUNC_5(VAR_5);
 struct net_device_stats *VAR_7 = &VAR_5->stats;
 u32 VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12, VAR_13;

 VAR_13 = VAR_12 = VAR_6->read_reg(VAR_6, VAR_1);

 while ((VAR_8 = FUNC_4(VAR_12))) {
  VAR_8--;
  VAR_12 &= ~(1 << VAR_8);
  VAR_9 = VAR_8 + VAR_2;
  FUNC_1(VAR_5, VAR_4, VAR_9);
  FUNC_2(VAR_5, VAR_8);
  VAR_11 += VAR_6->dlc[VAR_8];
  VAR_10++;
 }


 FUNC_0(VAR_13, &VAR_6->tx_active);

 if (VAR_13 & (1 << (VAR_3 - 1)))
  FUNC_6(VAR_5);

 if (VAR_10) {
  VAR_7->tx_bytes += VAR_11;
  VAR_7->tx_packets += VAR_10;
  FUNC_3(VAR_5, VAR_0);
 }
}
