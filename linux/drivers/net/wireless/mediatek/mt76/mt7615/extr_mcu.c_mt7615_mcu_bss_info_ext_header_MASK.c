
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7615_vif {int omac_idx; } ;
struct bss_info_ext_bss {int mbss_tsf_offset; void* len; void* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct mt7615_vif *VAR_3, u8 *VAR_4)
{


 struct bss_info_ext_bss *VAR_5 = (struct bss_info_ext_bss *)VAR_4;
 int VAR_6, VAR_7;

 VAR_6 = VAR_3->omac_idx - VAR_2;
 if (VAR_6 < 0)
  return;

 VAR_5->tag = FUNC_0(VAR_1);
 VAR_5->len = FUNC_0(sizeof(struct bss_info_ext_bss));
 VAR_7 = VAR_6 * (4096 + 20);
 VAR_5->mbss_tsf_offset = FUNC_1(VAR_7);
}
