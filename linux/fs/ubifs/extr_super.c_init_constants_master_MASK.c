
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_idx_lebs; } ;
struct ubifs_info {long long rp_size; int main_lebs; int jhead_cnt; long long leb_overhead; long long block_cnt; scalar_t__ leb_size; void* report_rp_size; TYPE_1__ bi; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (struct ubifs_info*) ;
 void* FUNC_1 (struct ubifs_info*,long long) ;

__attribute__((used)) static void FUNC_2(struct ubifs_info *VAR_2)
{
 long long VAR_3;

 VAR_2->bi.min_idx_lebs = FUNC_0(VAR_2);
 VAR_2->report_rp_size = FUNC_1(VAR_2, VAR_2->rp_size);
 VAR_3 = VAR_2->main_lebs - 1 - 1 - VAR_0 - VAR_2->jhead_cnt + 1;
 VAR_3 *= (long long)VAR_2->leb_size - VAR_2->leb_overhead;
 VAR_3 = FUNC_1(VAR_2, VAR_3);
 VAR_2->block_cnt = VAR_3 >> VAR_1;
}
