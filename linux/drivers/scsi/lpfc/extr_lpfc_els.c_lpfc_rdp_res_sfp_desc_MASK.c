
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sff_trasnceiver_codes_byte5 {scalar_t__ fc_sw_laser_sn; scalar_t__ fc_sw_laser_sl; } ;
struct sff_trasnceiver_codes_byte4 {scalar_t__ fc_lw_laser; scalar_t__ fc_sw_laser; } ;
struct TYPE_2__ {void* flags; void* vcc; void* tx_power; void* tx_bias; void* rx_power; void* temperature; } ;
struct fc_rdp_sfp_desc {void* length; TYPE_1__ sfp_info; void* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct fc_rdp_sfp_desc *VAR_30,
  uint8_t *VAR_31, uint8_t *VAR_32)
{
 uint16_t VAR_33;
 uint16_t VAR_34;
 uint16_t VAR_35;
 uint16_t VAR_36;
 uint16_t VAR_37;
 uint16_t VAR_38;
 uint16_t VAR_39 = 0;
 struct sff_trasnceiver_codes_byte4 *VAR_40;
 struct sff_trasnceiver_codes_byte5 *VAR_41;

 VAR_30->tag = FUNC_1(VAR_0);

 VAR_40 = (struct sff_trasnceiver_codes_byte4 *)
   &VAR_31[VAR_26];
 VAR_41 = (struct sff_trasnceiver_codes_byte5 *)
   &VAR_31[VAR_27];

 if ((VAR_40->fc_sw_laser) ||
     (VAR_41->fc_sw_laser_sl) ||
     (VAR_41->fc_sw_laser_sn)) {
  VAR_39 |= (VAR_21 << VAR_20);
 } else if (VAR_40->fc_lw_laser) {
  VAR_33 = (VAR_31[VAR_29] << 8) |
   VAR_31[VAR_28];
  if (VAR_33 == VAR_22)
   VAR_39 |= VAR_18 << VAR_20;
  if (VAR_33 == VAR_23)
   VAR_39 |= VAR_19 << VAR_20;
 }

 VAR_39 |= ((VAR_31[VAR_25] == VAR_2) ?
   VAR_13 : VAR_15)
     << VAR_14;


 VAR_39 |= ((VAR_31[VAR_24] == VAR_1) ?
   VAR_16 : 0)
     << VAR_17;

 VAR_34 = (VAR_32[VAR_6] << 8 |
  VAR_32[VAR_5]);
 VAR_38 = (VAR_32[VAR_12] << 8 |
  VAR_32[VAR_11]);
 VAR_37 = (VAR_32[VAR_8] << 8 |
  VAR_32[VAR_7]);
 VAR_36 = (VAR_32[VAR_10] << 8 |
  VAR_32[VAR_9]);
 VAR_35 = (VAR_32[VAR_4] << 8 |
  VAR_32[VAR_3]);
 VAR_30->sfp_info.temperature = FUNC_0(VAR_34);
 VAR_30->sfp_info.rx_power = FUNC_0(VAR_35);
 VAR_30->sfp_info.tx_bias = FUNC_0(VAR_36);
 VAR_30->sfp_info.tx_power = FUNC_0(VAR_37);
 VAR_30->sfp_info.vcc = FUNC_0(VAR_38);

 VAR_30->sfp_info.flags = FUNC_0(VAR_39);
 VAR_30->length = FUNC_1(sizeof(VAR_30->sfp_info));

 return sizeof(struct fc_rdp_sfp_desc);
}
