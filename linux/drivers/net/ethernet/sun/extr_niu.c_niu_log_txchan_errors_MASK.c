
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tx_ring_info {int tx_channel; } ;
struct niu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct niu *VAR_8, struct tx_ring_info *VAR_9,
      u64 VAR_10)
{
 FUNC_0(VAR_8->dev, "TX channel %u errors ( ", VAR_9->tx_channel);

 if (VAR_10 & VAR_1)
  FUNC_1("MBOX ");
 if (VAR_10 & VAR_5)
  FUNC_1("PKT_SIZE ");
 if (VAR_10 & VAR_7)
  FUNC_1("TX_RING_OFLOW ");
 if (VAR_10 & VAR_6)
  FUNC_1("PREF_BUF_PAR ");
 if (VAR_10 & VAR_3)
  FUNC_1("NACK_PREF ");
 if (VAR_10 & VAR_2)
  FUNC_1("NACK_PKT_RD ");
 if (VAR_10 & VAR_0)
  FUNC_1("CONF_PART ");
 if (VAR_10 & VAR_4)
  FUNC_1("PKT_PTR ");

 FUNC_1(")\n");
}
