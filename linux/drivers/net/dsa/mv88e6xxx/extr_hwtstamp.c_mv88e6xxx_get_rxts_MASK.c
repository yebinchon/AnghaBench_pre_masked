
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff_head {int lock; } ;
struct sk_buff {int dummy; } ;
struct mv88e6xxx_port_hwtstamp {int port_id; } ;
struct mv88e6xxx_chip {int tstamp_tc; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_4 (struct mv88e6xxx_chip*,int ,int,int*,int ) ;
 int FUNC_5 (struct mv88e6xxx_chip*,int ,int,int ) ;
 int FUNC_6 (struct mv88e6xxx_chip*) ;
 int FUNC_7 (struct mv88e6xxx_chip*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int) ;
 struct skb_shared_hwtstamps* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,int) ;

__attribute__((used)) static void FUNC_18(struct mv88e6xxx_chip *VAR_1,
          struct mv88e6xxx_port_hwtstamp *VAR_2,
          struct sk_buff *VAR_3, u16 VAR_4,
          struct sk_buff_head *VAR_5)
{
 u16 VAR_6[4] = { 0 }, VAR_7, VAR_8;
 struct skb_shared_hwtstamps *VAR_9;
 struct sk_buff_head VAR_10;
 u64 VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 int VAR_15;


 FUNC_2(&VAR_10);
 FUNC_15(&VAR_5->lock, VAR_14);
 FUNC_14(VAR_5, &VAR_10);
 FUNC_16(&VAR_5->lock, VAR_14);

 FUNC_6(VAR_1);
 VAR_15 = FUNC_4(VAR_1, VAR_2->port_id,
          VAR_4, VAR_6, FUNC_0(VAR_6));
 FUNC_7(VAR_1);
 if (VAR_15)
  FUNC_11("failed to get the receive time stamp\n");

 VAR_7 = VAR_6[0];
 VAR_12 = VAR_6[1];
 VAR_13 = VAR_6[2];
 VAR_8 = VAR_6[3];

 if (VAR_7 & VAR_0) {
  FUNC_6(VAR_1);
  VAR_15 = FUNC_5(VAR_1, VAR_2->port_id, VAR_4, 0);
  FUNC_7(VAR_1);
  if (VAR_15)
   FUNC_11("failed to clear the receive status\n");
 }



 for ( ; VAR_3; VAR_3 = FUNC_1(&VAR_10)) {
  if (FUNC_8(VAR_7) && FUNC_12(VAR_3, VAR_8)) {
   VAR_11 = VAR_13 << 16 | VAR_12;

   FUNC_6(VAR_1);
   VAR_11 = FUNC_17(&VAR_1->tstamp_tc, VAR_11);
   FUNC_7(VAR_1);
   VAR_9 = FUNC_13(VAR_3);
   FUNC_3(VAR_9, 0, sizeof(*VAR_9));
   VAR_9->hwtstamp = FUNC_10(VAR_11);
   VAR_7 &= ~VAR_0;
  }
  FUNC_9(VAR_3);
 }
}
