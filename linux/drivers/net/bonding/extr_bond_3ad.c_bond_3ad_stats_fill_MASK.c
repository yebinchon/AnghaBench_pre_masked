
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct bond_3ad_stats {int marker_unknown_rx; int marker_resp_tx; int marker_resp_rx; int marker_tx; int marker_rx; int lacpdu_illegal_rx; int lacpdu_unknown_rx; int lacpdu_tx; int lacpdu_rx; } ;


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
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ) ;

int FUNC_2(struct sk_buff *VAR_11, struct bond_3ad_stats *VAR_12)
{
 u64 VAR_13;

 VAR_13 = FUNC_0(&VAR_12->lacpdu_rx);
 if (FUNC_1(VAR_11, VAR_1, VAR_13,
         VAR_9))
  return -VAR_10;
 VAR_13 = FUNC_0(&VAR_12->lacpdu_tx);
 if (FUNC_1(VAR_11, VAR_2, VAR_13,
         VAR_9))
  return -VAR_10;
 VAR_13 = FUNC_0(&VAR_12->lacpdu_unknown_rx);
 if (FUNC_1(VAR_11, VAR_3, VAR_13,
         VAR_9))
  return -VAR_10;
 VAR_13 = FUNC_0(&VAR_12->lacpdu_illegal_rx);
 if (FUNC_1(VAR_11, VAR_0, VAR_13,
         VAR_9))
  return -VAR_10;

 VAR_13 = FUNC_0(&VAR_12->marker_rx);
 if (FUNC_1(VAR_11, VAR_6, VAR_13,
         VAR_9))
  return -VAR_10;
 VAR_13 = FUNC_0(&VAR_12->marker_tx);
 if (FUNC_1(VAR_11, VAR_7, VAR_13,
         VAR_9))
  return -VAR_10;
 VAR_13 = FUNC_0(&VAR_12->marker_resp_rx);
 if (FUNC_1(VAR_11, VAR_4, VAR_13,
         VAR_9))
  return -VAR_10;
 VAR_13 = FUNC_0(&VAR_12->marker_resp_tx);
 if (FUNC_1(VAR_11, VAR_5, VAR_13,
         VAR_9))
  return -VAR_10;
 VAR_13 = FUNC_0(&VAR_12->marker_unknown_rx);
 if (FUNC_1(VAR_11, VAR_8, VAR_13,
         VAR_9))
  return -VAR_10;

 return 0;
}
