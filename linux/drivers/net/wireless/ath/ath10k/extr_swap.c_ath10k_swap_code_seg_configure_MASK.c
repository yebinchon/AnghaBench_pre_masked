
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_swap_code_seg_info {int seg_hw_info; int target_addr; } ;
struct ath10k_fw_file {struct ath10k_swap_code_seg_info* firmware_swap_code_seg_info; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,int *,int) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;

int FUNC_3(struct ath10k *VAR_1,
       const struct ath10k_fw_file *VAR_2)
{
 int VAR_3;
 struct ath10k_swap_code_seg_info *VAR_4 = ((void*)0);

 if (!VAR_2->firmware_swap_code_seg_info)
  return 0;

 FUNC_1(VAR_1, VAR_0, "boot found firmware code swap binary\n");

 VAR_4 = VAR_2->firmware_swap_code_seg_info;

 VAR_3 = FUNC_0(VAR_1, VAR_4->target_addr,
          &VAR_4->seg_hw_info,
          sizeof(VAR_4->seg_hw_info));
 if (VAR_3) {
  FUNC_2(VAR_1, "failed to write Code swap segment information (%d)\n",
      VAR_3);
  return VAR_3;
 }

 return 0;
}
