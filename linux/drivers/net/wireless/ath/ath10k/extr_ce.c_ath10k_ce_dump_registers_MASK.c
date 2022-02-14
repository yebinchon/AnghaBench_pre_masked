
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ath10k_fw_crash_data {struct ath10k_ce_crash_data* ce_crash_data; } ;
struct ath10k_ce_crash_data {void* dst_r_idx; void* dst_wr_idx; void* src_r_idx; void* src_wr_idx; void* base_addr; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dump_mutex; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct ath10k*,size_t) ;
 size_t FUNC_1 (struct ath10k*,size_t) ;
 size_t FUNC_2 (struct ath10k*,size_t) ;
 struct ath10k_ce* FUNC_3 (struct ath10k*) ;
 size_t FUNC_4 (struct ath10k*,size_t) ;
 size_t FUNC_5 (struct ath10k*,size_t) ;
 int FUNC_6 (struct ath10k*,char*,...) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct ath10k *VAR_1,
         struct ath10k_fw_crash_data *VAR_2)
{
 struct ath10k_ce *VAR_3 = FUNC_3(VAR_1);
 struct ath10k_ce_crash_data VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_9(&VAR_1->dump_mutex);

 FUNC_6(VAR_1, "Copy Engine register dump:\n");

 FUNC_10(&VAR_3->ce_lock);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1, VAR_6);
  VAR_4.base_addr = FUNC_7(VAR_5);

  VAR_4.src_wr_idx =
   FUNC_7(FUNC_5(VAR_1, VAR_5));
  VAR_4.src_r_idx =
   FUNC_7(FUNC_4(VAR_1, VAR_5));
  VAR_4.dst_wr_idx =
   FUNC_7(FUNC_2(VAR_1, VAR_5));
  VAR_4.dst_r_idx =
   FUNC_7(FUNC_1(VAR_1, VAR_5));

  if (VAR_2)
   VAR_2->ce_crash_data[VAR_6] = VAR_4;

  FUNC_6(VAR_1, "[%02d]: 0x%08x %3u %3u %3u %3u", VAR_6,
      FUNC_8(VAR_4.base_addr),
      FUNC_8(VAR_4.src_wr_idx),
      FUNC_8(VAR_4.src_r_idx),
      FUNC_8(VAR_4.dst_wr_idx),
      FUNC_8(VAR_4.dst_r_idx));
 }

 FUNC_11(&VAR_3->ce_lock);
}
