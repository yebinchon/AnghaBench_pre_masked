
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_fw_cscheme_list {int size; struct iwl_fw_cipher_scheme* cs; } ;
struct iwl_fw_cipher_scheme {int cipher; } ;
struct iwl_fw {struct iwl_fw_cipher_scheme* cs; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct iwl_fw *VAR_2, const u8 *VAR_3, const u32 VAR_4)
{
 int VAR_5, VAR_6;
 struct iwl_fw_cscheme_list *VAR_7 = (struct iwl_fw_cscheme_list *)VAR_3;
 struct iwl_fw_cipher_scheme *VAR_8;

 if (VAR_4 < sizeof(*VAR_7) ||
     VAR_4 < sizeof(VAR_7->size) + VAR_7->size * sizeof(VAR_7->cs[0]))
  return -VAR_0;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_1 && VAR_5 < VAR_7->size; VAR_5++) {
  VAR_8 = &VAR_7->cs[VAR_6];


  if (!VAR_8->cipher)
   continue;

  VAR_2->cs[VAR_6++] = *VAR_8;
 }

 return 0;
}
