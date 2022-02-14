
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_ant_comb {int total_pkt_count; int alt_recv_cnt; int ant_ratio; scalar_t__ scan_start_time; int alt_good; int scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct ath_ant_comb *VAR_3)
{
 int VAR_4;

 if (!VAR_3->scan || !VAR_3->alt_good)
  return 0;

 if (FUNC_1(VAR_2, VAR_3->scan_start_time +
         FUNC_0(VAR_0)))
  return 1;

 if (VAR_3->total_pkt_count == VAR_1) {
  VAR_4 = ((VAR_3->alt_recv_cnt * 100) /
        VAR_3->total_pkt_count);
  if (VAR_4 < VAR_3->ant_ratio)
   return 1;
 }

 return 0;
}
