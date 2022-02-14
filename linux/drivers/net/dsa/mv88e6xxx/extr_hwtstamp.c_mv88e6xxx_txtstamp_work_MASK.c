
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct mv88e6xxx_ptp_ops {int dep_sts_reg; } ;
struct mv88e6xxx_port_hwtstamp {int tx_seq_id; int state; struct sk_buff* tx_skb; int port_id; scalar_t__ tx_tstamp_start; } ;
struct mv88e6xxx_chip {int dev; int tstamp_tc; TYPE_2__* info; } ;
typedef int shhwtstamps ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {struct mv88e6xxx_ptp_ops* ptp_ops; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,int ,int ,int,int,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_7 (struct mv88e6xxx_chip*,int ,int ,int*,int ) ;
 int FUNC_8 (struct mv88e6xxx_chip*,int ,int ,int ) ;
 int FUNC_9 (struct mv88e6xxx_chip*) ;
 int FUNC_10 (struct mv88e6xxx_chip*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *,int) ;

__attribute__((used)) static int FUNC_15(struct mv88e6xxx_chip *VAR_5,
       struct mv88e6xxx_port_hwtstamp *VAR_6)
{
 const struct mv88e6xxx_ptp_ops *VAR_7 = VAR_5->info->ops->ptp_ops;
 struct skb_shared_hwtstamps VAR_8;
 u16 VAR_9[4], VAR_10;
 struct sk_buff *VAR_11;
 u32 VAR_12;
 int VAR_13;
 u64 VAR_14;

 if (!VAR_6->tx_skb)
  return 0;

 FUNC_9(VAR_5);
 VAR_13 = FUNC_7(VAR_5, VAR_6->port_id,
          VAR_7->dep_sts_reg,
          VAR_9,
          FUNC_0(VAR_9));
 FUNC_10(VAR_5);

 if (VAR_13)
  goto free_and_clear_skb;

 if (!(VAR_9[0] & VAR_3)) {
  if (FUNC_13(VAR_6->tx_tstamp_start +
        VAR_4)) {
   FUNC_4(VAR_5->dev, "p%d: clearing tx timestamp hang\n",
     VAR_6->port_id);
   goto free_and_clear_skb;
  }




  return 1;
 }


 FUNC_9(VAR_5);
 FUNC_8(VAR_5, VAR_6->port_id, VAR_7->dep_sts_reg, 0);
 FUNC_10(VAR_5);

 VAR_10 = VAR_9[0] & VAR_1;
 if (VAR_10 != VAR_2) {
  FUNC_4(VAR_5->dev, "p%d: tx timestamp overrun\n", VAR_6->port_id);
  goto free_and_clear_skb;
 }

 if (VAR_9[3] != VAR_6->tx_seq_id) {
  FUNC_4(VAR_5->dev, "p%d: unexpected seq. id\n", VAR_6->port_id);
  goto free_and_clear_skb;
 }

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_12 = ((u32)VAR_9[2] << 16) | VAR_9[1];
 FUNC_9(VAR_5);
 VAR_14 = FUNC_14(&VAR_5->tstamp_tc, VAR_12);
 FUNC_10(VAR_5);
 VAR_8.hwtstamp = FUNC_11(VAR_14);

 FUNC_2(VAR_5->dev,
  "p%d: txtstamp %llx status 0x%04x skb ID 0x%04x hw ID 0x%04x\n",
  VAR_6->port_id, FUNC_5(VAR_8.hwtstamp),
  VAR_9[0], VAR_6->tx_seq_id, VAR_9[3]);






 VAR_11 = VAR_6->tx_skb;
 VAR_6->tx_skb = ((void*)0);
 FUNC_1(VAR_0, &VAR_6->state);
 FUNC_12(VAR_11, &VAR_8);

 return 0;

free_and_clear_skb:
 FUNC_3(VAR_6->tx_skb);
 VAR_6->tx_skb = ((void*)0);
 FUNC_1(VAR_0, &VAR_6->state);

 return 0;
}
