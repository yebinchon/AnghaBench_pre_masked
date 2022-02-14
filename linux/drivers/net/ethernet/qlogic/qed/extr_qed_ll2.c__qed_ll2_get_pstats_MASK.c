
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_ll2_stats {int sent_bcast_pkts; int sent_mcast_pkts; int sent_ucast_pkts; int sent_bcast_bytes; int sent_mcast_bytes; int sent_ucast_bytes; } ;
struct qed_ll2_info {int tx_stats_id; } ;
struct qed_hwfn {int dummy; } ;
struct core_ll2_pstorm_per_queue_stat {int sent_bcast_pkts; int sent_mcast_pkts; int sent_ucast_pkts; int sent_bcast_bytes; int sent_mcast_bytes; int sent_ucast_bytes; } ;
typedef int pstats ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct core_ll2_pstorm_per_queue_stat*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct core_ll2_pstorm_per_queue_stat*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_1,
    struct qed_ptt *VAR_2,
    struct qed_ll2_info *VAR_3,
    struct qed_ll2_stats *VAR_4)
{
 struct core_ll2_pstorm_per_queue_stat VAR_5;
 u8 VAR_6 = VAR_3->tx_stats_id;
 u32 VAR_7;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_7 = VAR_0 +
        FUNC_0(VAR_6);
 FUNC_3(VAR_1, VAR_2, &VAR_5, VAR_7, sizeof(VAR_5));

 VAR_4->sent_ucast_bytes += FUNC_1(VAR_5.sent_ucast_bytes);
 VAR_4->sent_mcast_bytes += FUNC_1(VAR_5.sent_mcast_bytes);
 VAR_4->sent_bcast_bytes += FUNC_1(VAR_5.sent_bcast_bytes);
 VAR_4->sent_ucast_pkts += FUNC_1(VAR_5.sent_ucast_pkts);
 VAR_4->sent_mcast_pkts += FUNC_1(VAR_5.sent_mcast_pkts);
 VAR_4->sent_bcast_pkts += FUNC_1(VAR_5.sent_bcast_pkts);
}
