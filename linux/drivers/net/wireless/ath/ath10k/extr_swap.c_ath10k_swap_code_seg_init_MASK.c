
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_swap_code_seg_info {int dummy; } ;
struct ath10k_fw_file {void* codeswap_data; size_t codeswap_len; struct ath10k_swap_code_seg_info* firmware_swap_code_seg_info; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,char*) ;
 struct ath10k_swap_code_seg_info* FUNC_1 (struct ath10k*,size_t) ;
 int FUNC_2 (struct ath10k*,struct ath10k_swap_code_seg_info*,void const*,size_t) ;
 int FUNC_3 (struct ath10k*,struct ath10k_swap_code_seg_info*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;

int FUNC_5(struct ath10k *VAR_1, struct ath10k_fw_file *VAR_2)
{
 int VAR_3;
 struct ath10k_swap_code_seg_info *VAR_4;
 const void *VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_2->codeswap_data;
 VAR_6 = VAR_2->codeswap_len;

 if (!VAR_6 || !VAR_5)
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_6);
 if (!VAR_4) {
  FUNC_0(VAR_1, "failed to allocate fw code swap segment\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_4,
     VAR_5, VAR_6);

 if (VAR_3) {
  FUNC_4(VAR_1, "failed to initialize fw code swap segment: %d\n",
       VAR_3);
  FUNC_3(VAR_1, VAR_4);
  return VAR_3;
 }

 VAR_2->firmware_swap_code_seg_info = VAR_4;

 return 0;
}
