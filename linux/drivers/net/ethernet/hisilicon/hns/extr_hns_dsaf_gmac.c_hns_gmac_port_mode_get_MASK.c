
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mac_driver {int dummy; } ;
struct hns_gmac_port_mode_cfg {int port_mode; void* strip_pad_en; void* runt_pkt_en; void* an_enable; void* crc_add; void* pad_enable; void* short_runts_thr; void* max_frm_size; } ;
typedef enum hns_port_mode { ____Placeholder_hns_port_mode } hns_port_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (int ,int ) ;
 void* FUNC_1 (struct mac_driver*,int ,int ,int ) ;
 int FUNC_2 (struct mac_driver*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_16,
       struct hns_gmac_port_mode_cfg *VAR_17)
{
 u32 VAR_18;
 u32 VAR_19;
 struct mac_driver *VAR_20 = (struct mac_driver *)VAR_16;

 VAR_17->port_mode = (enum hns_port_mode)FUNC_1(
  VAR_20, VAR_4, VAR_3, VAR_5);

 VAR_18 = FUNC_2(VAR_20, VAR_12);
 VAR_19 = FUNC_2(VAR_20, VAR_6);

 VAR_17->max_frm_size =
  FUNC_1(VAR_20, VAR_1,
       VAR_0, VAR_2);
 VAR_17->short_runts_thr =
  FUNC_1(VAR_20, VAR_10,
       VAR_9,
       VAR_11);

 VAR_17->pad_enable = FUNC_0(VAR_18, VAR_15);
 VAR_17->crc_add = FUNC_0(VAR_18, VAR_14);
 VAR_17->an_enable = FUNC_0(VAR_18, VAR_13);

 VAR_17->runt_pkt_en =
  FUNC_0(VAR_19, VAR_7);
 VAR_17->strip_pad_en =
  FUNC_0(VAR_19, VAR_8);
}
