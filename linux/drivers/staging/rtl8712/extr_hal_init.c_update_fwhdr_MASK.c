
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_hdr {void* fw_priv_sz; void* img_SRAM_size; void* img_IMEM_size; void* dmem_size; void* version; void* signature; } ;
typedef int __le32 ;
typedef int __le16 ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fw_hdr *VAR_0, const u8 *VAR_1)
{
 VAR_0->signature = FUNC_0(*(__le16 *)VAR_1);
 VAR_0->version = FUNC_0(*(__le16 *)(VAR_1 + 2));

 VAR_0->dmem_size = FUNC_1(*(__le32 *)(VAR_1 + 4));

 VAR_0->img_IMEM_size = FUNC_1(*(__le32 *)(VAR_1 + 8));

 VAR_0->img_SRAM_size = FUNC_1(*(__le32 *)(VAR_1 + 12));

 VAR_0->fw_priv_sz = FUNC_1(*(__le32 *)(VAR_1 + 16));
}
