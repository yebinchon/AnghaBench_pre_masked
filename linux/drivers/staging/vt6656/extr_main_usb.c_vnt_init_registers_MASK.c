
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vnt_rsp_card_init {int net_addr; int rf_type; } ;
struct vnt_cmd_card_init {int long_retry_limit; int short_retry_limit; int * sw_net_addr; int exist_sw_net_addr; int init_class; } ;
struct vnt_private {int local_id; int power; scalar_t__ cck_pwr; scalar_t__* eeprom; scalar_t__ ofdm_pwr_g; scalar_t__* cck_pwr_tbl; scalar_t__* ofdm_pwr_tbl; int ofdm_pwr_a; scalar_t__* ofdm_a_pwr_tbl; int tx_rx_ant_inv; int rx_antenna_sel; scalar_t__ bb_type; int short_slot_time; int radio_ctl; TYPE_1__* usb; int * current_net_addr; int permanent_net_addr; int rf_type; int auto_fb_ctrl; void* rx_antenna_mode; void* tx_antenna_mode; int top_cck_basic_rate; int top_ofdm_basic_rate; int long_retry_limit; int short_retry_limit; int exist_sw_net_addr; int packet_type; struct vnt_rsp_card_init init_response; struct vnt_cmd_card_init init_command; } ;
struct TYPE_2__ {int dev; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct vnt_private*) ;
 int FUNC_4 (struct vnt_private*,int ,int ,int ,int,int*) ;
 int FUNC_5 (struct vnt_private*,int ,int ,int ,int,int*) ;
 int FUNC_6 (struct vnt_private*,int ,int,int) ;
 int FUNC_7 (struct vnt_private*) ;
 int FUNC_8 (struct vnt_private*) ;
 int FUNC_9 (struct vnt_private*,int ,int) ;
 int FUNC_10 (struct vnt_private*,int ,int) ;
 int FUNC_11 (struct vnt_private*,int ,int) ;
 int FUNC_12 (struct vnt_private*) ;
 int FUNC_13 (struct vnt_private*,void*) ;
 int FUNC_14 (struct vnt_private*) ;
 int FUNC_15 (struct vnt_private*) ;

__attribute__((used)) static int FUNC_16(struct vnt_private *VAR_39)
{
 int VAR_40 = 0;
 struct vnt_cmd_card_init *VAR_41 = &VAR_39->init_command;
 struct vnt_rsp_card_init *VAR_42 = &VAR_39->init_response;
 u8 VAR_43;
 int VAR_44;
 u8 VAR_45;
 u8 VAR_46 = 0, VAR_47 = 0, VAR_48 = 0;

 FUNC_0(&VAR_39->usb->dev, "---->INIbInitAdapter. [%d][%d]\n",
  VAR_6, VAR_39->packet_type);

 VAR_40 = FUNC_3(VAR_39);
 if (VAR_40) {
  VAR_40 = FUNC_7(VAR_39);
  if (VAR_40) {
   FUNC_0(&VAR_39->usb->dev,
    "Could not download firmware: %d.\n", VAR_40);
   goto end;
  }

  VAR_40 = FUNC_8(VAR_39);
  if (VAR_40) {
   FUNC_0(&VAR_39->usb->dev,
    "Could not branch to SRAM: %d.\n", VAR_40);
   goto end;
  }
 }

 VAR_40 = FUNC_15(VAR_39);
 if (VAR_40) {
  FUNC_0(&VAR_39->usb->dev, "vnt_vt3184_init fail\n");
  goto end;
 }

 VAR_41->init_class = VAR_6;
 VAR_41->exist_sw_net_addr = VAR_39->exist_sw_net_addr;
 for (VAR_44 = 0; VAR_44 < 6; VAR_44++)
  VAR_41->sw_net_addr[VAR_44] = VAR_39->current_net_addr[VAR_44];
 VAR_41->short_retry_limit = VAR_39->short_retry_limit;
 VAR_41->long_retry_limit = VAR_39->long_retry_limit;


 VAR_40 = FUNC_5(VAR_39, VAR_33, 0, 0,
         sizeof(struct vnt_cmd_card_init),
         (u8 *)VAR_41);
 if (VAR_40) {
  FUNC_0(&VAR_39->usb->dev, "Issue Card init fail\n");
  goto end;
 }

 VAR_40 = FUNC_4(VAR_39, VAR_34, 0, 0,
        sizeof(struct vnt_rsp_card_init),
        (u8 *)VAR_42);
 if (VAR_40) {
  FUNC_0(&VAR_39->usb->dev, "Cardinit request in status fail!\n");
  goto end;
 }


 VAR_40 = FUNC_4(VAR_39, VAR_35, VAR_30,
        VAR_32, 1, &VAR_39->local_id);
 if (VAR_40)
  goto end;



 VAR_39->top_ofdm_basic_rate = VAR_37;
 VAR_39->top_cck_basic_rate = VAR_36;


 VAR_39->power = 0xFF;

 VAR_39->cck_pwr = VAR_39->eeprom[VAR_19];
 VAR_39->ofdm_pwr_g = VAR_39->eeprom[VAR_20];

 for (VAR_44 = 0; VAR_44 < 14; VAR_44++) {
  VAR_39->cck_pwr_tbl[VAR_44] =
   VAR_39->eeprom[VAR_44 + VAR_14];
  if (VAR_39->cck_pwr_tbl[VAR_44] == 0)
   VAR_39->cck_pwr_tbl[VAR_44] = VAR_39->cck_pwr;

  VAR_39->ofdm_pwr_tbl[VAR_44] =
    VAR_39->eeprom[VAR_44 + VAR_18];
  if (VAR_39->ofdm_pwr_tbl[VAR_44] == 0)
   VAR_39->ofdm_pwr_tbl[VAR_44] = VAR_39->ofdm_pwr_g;
 }





 for (VAR_44 = 11; VAR_44 < 14; VAR_44++) {
  VAR_39->cck_pwr_tbl[VAR_44] = VAR_39->cck_pwr_tbl[10];
  VAR_39->ofdm_pwr_tbl[VAR_44] = VAR_39->ofdm_pwr_tbl[10];
 }

 VAR_39->ofdm_pwr_a = 0x34;


 for (VAR_44 = 0; VAR_44 < VAR_5; VAR_44++) {
  VAR_39->ofdm_a_pwr_tbl[VAR_44] =
   VAR_39->eeprom[VAR_44 + VAR_17];

  if (VAR_39->ofdm_a_pwr_tbl[VAR_44] == 0)
   VAR_39->ofdm_a_pwr_tbl[VAR_44] = VAR_39->ofdm_pwr_a;
 }

 VAR_43 = VAR_39->eeprom[VAR_10];

 if (VAR_43 & VAR_9)
  VAR_39->tx_rx_ant_inv = 1;
 else
  VAR_39->tx_rx_ant_inv = 0;

 VAR_43 &= (VAR_7 | VAR_8);

 if (VAR_43 == 0)
  VAR_43 = (VAR_7 | VAR_8);

 if (VAR_43 == (VAR_7 | VAR_8)) {
  VAR_39->tx_antenna_mode = VAR_1;
  VAR_39->rx_antenna_sel = 1;

  if (VAR_39->tx_rx_ant_inv)
   VAR_39->rx_antenna_mode = VAR_0;
  else
   VAR_39->rx_antenna_mode = VAR_1;
 } else {
  VAR_39->rx_antenna_sel = 0;

  if (VAR_43 & VAR_7) {
   VAR_39->tx_antenna_mode = VAR_0;

   if (VAR_39->tx_rx_ant_inv)
    VAR_39->rx_antenna_mode = VAR_1;
   else
    VAR_39->rx_antenna_mode = VAR_0;
  } else {
   VAR_39->tx_antenna_mode = VAR_1;

  if (VAR_39->tx_rx_ant_inv)
   VAR_39->rx_antenna_mode = VAR_0;
  else
   VAR_39->rx_antenna_mode = VAR_1;
  }
 }


 VAR_40 = FUNC_13(VAR_39, VAR_39->rx_antenna_mode);
 if (VAR_40)
  goto end;


 VAR_39->auto_fb_ctrl = VAR_2;


 VAR_39->bb_type = VAR_4;


 VAR_39->rf_type = VAR_42->rf_type;


 if (VAR_39->rf_type == VAR_38) {
  if ((VAR_39->eeprom[VAR_15] == 0x1) &&
      (VAR_39->eeprom[VAR_16] >= 0x4)) {
   VAR_46 = VAR_39->eeprom[VAR_13];
   VAR_47 = VAR_39->eeprom[VAR_12];
   VAR_48 = VAR_39->eeprom[VAR_11];
   if (VAR_46 || VAR_47 || VAR_48) {



    VAR_40 = FUNC_6(VAR_39,
        VAR_31,
        0xff, 0x03);
    if (VAR_40)
     goto end;


    VAR_40 = FUNC_6(VAR_39,
        VAR_31,
        0xfb, VAR_46);
    if (VAR_40)
     goto end;


    VAR_40 = FUNC_6(VAR_39,
        VAR_31,
        0xfC, VAR_47);
    if (VAR_40)
     goto end;


    VAR_40 = FUNC_6(VAR_39,
        VAR_31,
        0xfd, VAR_48);
    if (VAR_40)
     goto end;
   } else {



    VAR_40 = FUNC_6(VAR_39,
        VAR_31,
        0xff, 0x0);
    if (VAR_40)
     goto end;
   }
  }
 }


 FUNC_2(VAR_39->permanent_net_addr, VAR_42->net_addr, 6);
 FUNC_1(VAR_39->current_net_addr, VAR_39->permanent_net_addr);


 FUNC_0(&VAR_39->usb->dev, "Network address = %pM\n",
  VAR_39->current_net_addr);





 if (VAR_39->bb_type == VAR_3)
  VAR_39->short_slot_time = 1;
 else
  VAR_39->short_slot_time = 0;

 VAR_40 = FUNC_14(VAR_39);
 if (VAR_40)
  goto end;

 VAR_39->radio_ctl = VAR_39->eeprom[VAR_21];

 if ((VAR_39->radio_ctl & VAR_22) != 0) {
  VAR_40 = FUNC_4(VAR_39, VAR_35,
         VAR_29, VAR_32,
         1, &VAR_45);
  if (VAR_40)
   goto end;

  if ((VAR_45 & VAR_23) == 0) {
   VAR_40 = FUNC_10(VAR_39, VAR_29,
        VAR_24);
  } else {
   VAR_40 = FUNC_9(VAR_39, VAR_29,
         VAR_24);
  }

  if (VAR_40)
   goto end;
 }


 VAR_40 = FUNC_11(VAR_39, VAR_27, 0x38);
 if (VAR_40)
  goto end;

 VAR_40 = FUNC_11(VAR_39, VAR_26, VAR_25);
 if (VAR_40)
  goto end;

 VAR_40 = FUNC_10(VAR_39, VAR_28, 0x01);
 if (VAR_40)
  goto end;

 VAR_40 = FUNC_12(VAR_39);
 if (VAR_40)
  goto end;

 FUNC_0(&VAR_39->usb->dev, "<----INIbInitAdapter Exit\n");

end:
 return VAR_40;
}
