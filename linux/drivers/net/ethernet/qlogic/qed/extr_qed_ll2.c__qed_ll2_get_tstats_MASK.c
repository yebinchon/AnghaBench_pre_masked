
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int tstats ;
struct qed_ptt {int dummy; } ;
struct qed_ll2_stats {int no_buff_discard; int packet_too_big_discard; } ;
struct qed_ll2_info {int queue_id; } ;
struct qed_hwfn {int dummy; } ;
struct core_ll2_tstorm_per_queue_stat {int no_buff_discard; int packet_too_big_discard; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct core_ll2_tstorm_per_queue_stat*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct core_ll2_tstorm_per_queue_stat*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_1,
    struct qed_ptt *VAR_2,
    struct qed_ll2_info *VAR_3,
    struct qed_ll2_stats *VAR_4)
{
 struct core_ll2_tstorm_per_queue_stat VAR_5;
 u8 VAR_6 = VAR_3->queue_id;
 u32 VAR_7;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_7 = VAR_0 +
        FUNC_0(VAR_6);
 FUNC_3(VAR_1, VAR_2, &VAR_5, VAR_7, sizeof(VAR_5));

 VAR_4->packet_too_big_discard +=
   FUNC_1(VAR_5.packet_too_big_discard);
 VAR_4->no_buff_discard += FUNC_1(VAR_5.no_buff_discard);
}
