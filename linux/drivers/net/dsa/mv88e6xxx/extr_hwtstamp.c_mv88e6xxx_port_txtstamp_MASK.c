
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mv88e6xxx_port_hwtstamp {int tx_seq_id; int tx_tstamp_start; struct sk_buff* tx_skb; int state; } ;
struct mv88e6xxx_chip {int ptp_clock; struct mv88e6xxx_port_hwtstamp* port_hwtstamp; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
typedef int __be16 ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int * FUNC_1 (struct mv88e6xxx_chip*,int,struct sk_buff*,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

bool FUNC_5(struct dsa_switch *VAR_4, int VAR_5,
        struct sk_buff *VAR_6, unsigned int VAR_7)
{
 struct mv88e6xxx_chip *VAR_8 = VAR_4->priv;
 struct mv88e6xxx_port_hwtstamp *VAR_9 = &VAR_8->port_hwtstamp[VAR_5];
 __be16 *VAR_10;
 u8 *VAR_11;

 if (!(FUNC_3(VAR_6)->tx_flags & VAR_2))
  return 0;

 VAR_11 = FUNC_1(VAR_8, VAR_5, VAR_6, VAR_7);
 if (!VAR_11)
  return 0;

 VAR_10 = (__be16 *)(VAR_11 + VAR_1);

 if (FUNC_4(VAR_0,
      &VAR_9->state))
  return 0;

 VAR_9->tx_skb = VAR_6;
 VAR_9->tx_tstamp_start = VAR_3;
 VAR_9->tx_seq_id = FUNC_0(VAR_10);

 FUNC_2(VAR_8->ptp_clock, 0);
 return 1;
}
