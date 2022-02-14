
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device_stats {int tx_packets; int tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
struct m_can_classdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_0 (struct net_device*,unsigned int) ;
 int FUNC_1 (struct m_can_classdev*,int ) ;
 unsigned int FUNC_2 (struct m_can_classdev*,int,int) ;
 int FUNC_3 (struct m_can_classdev*,int ,int) ;
 struct m_can_classdev* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_10)
{
 u32 VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13 = 0;
 int VAR_14 = 0;
 unsigned int VAR_15;

 struct m_can_classdev *VAR_16 = FUNC_4(VAR_10);
 struct net_device_stats *VAR_17 = &VAR_10->stats;


 VAR_12 = FUNC_1(VAR_16, VAR_1);


 VAR_11 = (VAR_12 & VAR_4)
   >> VAR_5;


 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {

  VAR_13 = (FUNC_1(VAR_16, VAR_1) & VAR_6)
   >> VAR_7;


  VAR_15 = (FUNC_2(VAR_16, VAR_13, 4) &
       VAR_8) >> VAR_9;


  FUNC_3(VAR_16, VAR_0, (VAR_2 &
      (VAR_13 << VAR_3)));


  VAR_17->tx_bytes += FUNC_0(VAR_10, VAR_15);
  VAR_17->tx_packets++;
 }
}
