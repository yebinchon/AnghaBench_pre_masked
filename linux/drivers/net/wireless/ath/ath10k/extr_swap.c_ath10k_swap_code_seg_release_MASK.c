
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_fw_file {int * firmware_swap_code_seg_info; scalar_t__ codeswap_len; int * codeswap_data; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,int *) ;

void FUNC_1(struct ath10k *VAR_0,
      struct ath10k_fw_file *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->firmware_swap_code_seg_info);




 VAR_1->codeswap_data = ((void*)0);
 VAR_1->codeswap_len = 0;

 VAR_1->firmware_swap_code_seg_info = ((void*)0);
}
