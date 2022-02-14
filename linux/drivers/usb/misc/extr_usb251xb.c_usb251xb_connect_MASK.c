
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb251xb {int vendor_id; int product_id; int device_id; char conf_data1; char conf_data2; char conf_data3; char non_rem_dev; char port_disable_sp; char port_disable_bp; char max_power_sp; char max_power_bp; char max_current_sp; char max_current_bp; char power_on_time; int lang_id; char manufacturer_len; char product_len; char serial_len; char* manufacturer; char* serial; char* product; char bat_charge_en; char boost_up; char boost_57; char boost_14; char port_swap; char port_map12; char port_map34; char port_map56; char port_map7; int i2c; scalar_t__ skip_config; struct device* dev; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
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
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 char VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (struct device*,char*,int,int,int) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int,int,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct usb251xb*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb251xb *VAR_39)
{
 struct device *VAR_40 = VAR_39->dev;
 int VAR_41, VAR_42;
 char VAR_43[VAR_35];

 FUNC_5(VAR_43, 0, VAR_35);

 if (VAR_39->skip_config) {
  FUNC_2(VAR_40, "Skip hub configuration, only attach.\n");
  VAR_43[0] = 0x01;
  VAR_43[1] = VAR_37;

  FUNC_6(VAR_39, 0);

  VAR_41 = FUNC_3(VAR_39->i2c,
    VAR_32, 2, VAR_43);
  if (VAR_41) {
   FUNC_1(VAR_40, "attaching hub failed: %d\n", VAR_41);
   return VAR_41;
  }
  return 0;
 }

 VAR_43[VAR_34] = (VAR_39->vendor_id >> 8) & 0xFF;
 VAR_43[VAR_33] = VAR_39->vendor_id & 0xFF;
 VAR_43[VAR_27] = (VAR_39->product_id >> 8) & 0xFF;
 VAR_43[VAR_26] = VAR_39->product_id & 0xFF;
 VAR_43[VAR_8] = (VAR_39->device_id >> 8) & 0xFF;
 VAR_43[VAR_7] = VAR_39->device_id & 0xFF;
 VAR_43[VAR_4] = VAR_39->conf_data1;
 VAR_43[VAR_5] = VAR_39->conf_data2;
 VAR_43[VAR_6] = VAR_39->conf_data3;
 VAR_43[VAR_17] = VAR_39->non_rem_dev;
 VAR_43[VAR_19] = VAR_39->port_disable_sp;
 VAR_43[VAR_18] = VAR_39->port_disable_bp;
 VAR_43[VAR_16] = VAR_39->max_power_sp;
 VAR_43[VAR_15] = VAR_39->max_power_bp;
 VAR_43[VAR_14] = VAR_39->max_current_sp;
 VAR_43[VAR_13] = VAR_39->max_current_bp;
 VAR_43[VAR_25] = VAR_39->power_on_time;
 VAR_43[VAR_9] = (VAR_39->lang_id >> 8) & 0xFF;
 VAR_43[VAR_10] = VAR_39->lang_id & 0xFF;
 VAR_43[VAR_12] = VAR_39->manufacturer_len;
 VAR_43[VAR_29] = VAR_39->product_len;
 VAR_43[VAR_31] = VAR_39->serial_len;
 FUNC_4(&VAR_43[VAR_11], VAR_39->manufacturer,
        VAR_38);
 FUNC_4(&VAR_43[VAR_30], VAR_39->serial,
        VAR_38);
 FUNC_4(&VAR_43[VAR_28], VAR_39->product,
        VAR_38);
 VAR_43[VAR_0] = VAR_39->bat_charge_en;
 VAR_43[VAR_3] = VAR_39->boost_up;
 VAR_43[VAR_2] = VAR_39->boost_57;
 VAR_43[VAR_1] = VAR_39->boost_14;
 VAR_43[VAR_24] = VAR_39->port_swap;
 VAR_43[VAR_20] = VAR_39->port_map12;
 VAR_43[VAR_21] = VAR_39->port_map34;
 VAR_43[VAR_22] = VAR_39->port_map56;
 VAR_43[VAR_23] = VAR_39->port_map7;
 VAR_43[VAR_32] = VAR_37;

 FUNC_6(VAR_39, 0);


 for (VAR_42 = 0; VAR_42 < (VAR_35 / VAR_36); VAR_42++) {
  int VAR_44 = VAR_42 * VAR_36;
  char VAR_45[VAR_36 + 1];




  VAR_45[0] = VAR_36;
  FUNC_4(&VAR_45[1], &VAR_43[VAR_44], VAR_36);

  FUNC_0(VAR_40, "writing %d byte block %d to 0x%02X\n",
   VAR_36, VAR_42, VAR_44);

  VAR_41 = FUNC_3(VAR_39->i2c, VAR_44,
           VAR_36 + 1,
           VAR_45);
  if (VAR_41)
   goto out_err;
 }

 FUNC_2(VAR_40, "Hub configuration was successful.\n");
 return 0;

out_err:
 FUNC_1(VAR_40, "configuring block %d failed: %d\n", VAR_42, VAR_41);
 return VAR_41;
}
