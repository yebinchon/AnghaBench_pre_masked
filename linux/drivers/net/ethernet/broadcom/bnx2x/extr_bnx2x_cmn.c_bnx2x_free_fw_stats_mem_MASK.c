
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {scalar_t__ fw_stats_req_sz; scalar_t__ fw_stats_data_sz; int fw_stats_mapping; int fw_stats; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_0)
{
 FUNC_0(VAR_0->fw_stats, VAR_0->fw_stats_mapping,
         VAR_0->fw_stats_data_sz + VAR_0->fw_stats_req_sz);
 return;
}
