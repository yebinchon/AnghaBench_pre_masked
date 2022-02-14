
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct i40e_ring {int netdev; } ;
struct i40e_pf {int flags; int tx_hwtstamp_skipped; int ptp_tx_skb; int ptp_tx_start; int state; scalar_t__ ptp_tx; } ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct i40e_pf* FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct i40e_ring *VAR_8, struct sk_buff *VAR_9,
       u32 VAR_10, u64 *VAR_11)
{
 struct i40e_pf *VAR_12;

 if (FUNC_1(!(FUNC_3(VAR_9)->tx_flags & VAR_4)))
  return 0;


 if (VAR_10 & VAR_3)
  return 0;




 VAR_12 = FUNC_0(VAR_8->netdev);
 if (!(VAR_12->flags & VAR_0))
  return 0;

 if (VAR_12->ptp_tx &&
     !FUNC_4(VAR_6, VAR_12->state)) {
  FUNC_3(VAR_9)->tx_flags |= VAR_5;
  VAR_12->ptp_tx_start = VAR_7;
  VAR_12->ptp_tx_skb = FUNC_2(VAR_9);
 } else {
  VAR_12->tx_hwtstamp_skipped++;
  return 0;
 }

 *VAR_11 |= (u64)VAR_2 <<
    VAR_1;

 return 1;
}
