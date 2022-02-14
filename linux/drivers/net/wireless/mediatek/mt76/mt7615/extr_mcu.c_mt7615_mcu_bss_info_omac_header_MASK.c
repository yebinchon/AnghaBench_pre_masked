
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mt7615_vif {scalar_t__ omac_idx; int band_idx; } ;
struct bss_info_omac {scalar_t__ hw_bss_idx; scalar_t__ omac_idx; int conn_type; int band_idx; void* len; void* tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mt7615_vif *VAR_3, u8 *VAR_4,
    u32 VAR_5)
{
 struct bss_info_omac *VAR_6 = (struct bss_info_omac *)VAR_4;
 u8 VAR_7;

 VAR_7 = VAR_3->omac_idx > VAR_1 ? VAR_2 : VAR_3->omac_idx;
 VAR_6->tag = FUNC_0(VAR_0);
 VAR_6->len = FUNC_0(sizeof(struct bss_info_omac));
 VAR_6->hw_bss_idx = VAR_7;
 VAR_6->omac_idx = VAR_3->omac_idx;
 VAR_6->band_idx = VAR_3->band_idx;
 VAR_6->conn_type = FUNC_1(VAR_5);
}
