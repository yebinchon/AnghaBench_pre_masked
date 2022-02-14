
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct vpif_channel_config_params {int eav2sav; int sav2eav; int l1; int l3; int l5; int l7; int l9; int l11; int vsize; } ;
struct TYPE_2__ {int width_mask; int len_mask; int v_cfg; int v_cfg_02; int v_cfg_01; int v_cfg_00; int h_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(const struct vpif_channel_config_params *VAR_2,
    u8 VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_2->eav2sav & VAR_1[VAR_4].width_mask);
 VAR_5 <<= VAR_0;
 VAR_5 |= (VAR_2->sav2eav & VAR_1[VAR_4].width_mask);
 FUNC_0(VAR_5, VAR_1[VAR_3].h_cfg);

 VAR_5 = (VAR_2->l1 & VAR_1[VAR_4].len_mask);
 VAR_5 <<= VAR_0;
 VAR_5 |= (VAR_2->l3 & VAR_1[VAR_4].len_mask);
 FUNC_0(VAR_5, VAR_1[VAR_3].v_cfg_00);

 VAR_5 = (VAR_2->l5 & VAR_1[VAR_4].len_mask);
 VAR_5 <<= VAR_0;
 VAR_5 |= (VAR_2->l7 & VAR_1[VAR_4].len_mask);
 FUNC_0(VAR_5, VAR_1[VAR_3].v_cfg_01);

 VAR_5 = (VAR_2->l9 & VAR_1[VAR_4].len_mask);
 VAR_5 <<= VAR_0;
 VAR_5 |= (VAR_2->l11 & VAR_1[VAR_4].len_mask);
 FUNC_0(VAR_5, VAR_1[VAR_3].v_cfg_02);

 VAR_5 = (VAR_2->vsize & VAR_1[VAR_4].len_mask);
 FUNC_0(VAR_5, VAR_1[VAR_3].v_cfg);
}
