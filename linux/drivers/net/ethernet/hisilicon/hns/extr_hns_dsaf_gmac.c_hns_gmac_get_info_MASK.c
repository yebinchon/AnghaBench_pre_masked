
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct mac_info {int pad_and_crc_en; int port_en; int duplex; void* tx_pause_en; void* rx_pause_en; int speed; int tx_pause_time; int auto_neg; } ;
struct hns_gmac_port_mode_cfg {int an_enable; scalar_t__ pad_enable; scalar_t__ crc_add; int member_1; int member_0; } ;
typedef enum hns_port_mode { ____Placeholder_hns_port_mode } hns_port_mode ;
typedef enum hns_gmac_duplex_mdoe { ____Placeholder_hns_gmac_duplex_mdoe } hns_gmac_duplex_mdoe ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int*) ;
 int FUNC_1 (void*,void**,void**) ;
 int FUNC_2 (void*,void**,void**) ;
 int FUNC_3 (void*,int*) ;
 int FUNC_4 (void*,int *) ;
 int FUNC_5 (void*,struct hns_gmac_port_mode_cfg*) ;

__attribute__((used)) static void FUNC_6(void *VAR_4, struct mac_info *VAR_5)
{
 enum hns_gmac_duplex_mdoe VAR_6;
 enum hns_port_mode VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u16 VAR_12;
 struct hns_gmac_port_mode_cfg VAR_13 = { VAR_0, 0 };

 FUNC_5(VAR_4, &VAR_13);
 VAR_5->pad_and_crc_en = VAR_13.crc_add && VAR_13.pad_enable;
 VAR_5->auto_neg = VAR_13.an_enable;

 FUNC_4(VAR_4, &VAR_12);
 VAR_5->tx_pause_time = VAR_12;

 FUNC_1(VAR_4, &VAR_10, &VAR_11);
 VAR_5->port_en = VAR_10 && VAR_11;

 FUNC_0(VAR_4, &VAR_6);
 VAR_5->duplex = VAR_6;

 FUNC_3(VAR_4, &VAR_7);
 switch (VAR_7) {
 case 128:
  VAR_5->speed = VAR_1;
  break;
 case 129:
  VAR_5->speed = VAR_2;
  break;
 case 130:
  VAR_5->speed = VAR_3;
  break;
 default:
  VAR_5->speed = 0;
  break;
 }

 FUNC_2(VAR_4, &VAR_8, &VAR_9);
 VAR_5->rx_pause_en = VAR_8;
 VAR_5->tx_pause_en = VAR_9;
}
