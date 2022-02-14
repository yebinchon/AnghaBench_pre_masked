
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct us_data {char* transport_name; scalar_t__ max_lun; int transport; scalar_t__ extra; int extra_destructor; } ;
struct ene_ub6250_info {int* bbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct us_data*,int ,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct usb_device_id const* VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct us_data**,struct usb_interface*,struct usb_device_id const*,int,int *) ;
 int FUNC_7 (struct us_data*) ;

__attribute__((used)) static int FUNC_8(struct usb_interface *VAR_10,
    const struct usb_device_id *VAR_11)
{
 int VAR_12;
 u8 VAR_13;
 struct us_data *VAR_14;
 struct ene_ub6250_info *VAR_15;

 VAR_12 = FUNC_6(&VAR_14, VAR_10, VAR_11,
     (VAR_11 - VAR_9) + VAR_8,
     &VAR_6);
 if (VAR_12)
  return VAR_12;


 VAR_14->extra = FUNC_3(sizeof(struct ene_ub6250_info), VAR_1);
 if (!VAR_14->extra)
  return -VAR_0;
 VAR_14->extra_destructor = VAR_7;

 VAR_15 = (struct ene_ub6250_info *)(VAR_14->extra);
 VAR_15->bbuf = FUNC_2(512, VAR_1);
 if (!VAR_15->bbuf) {
  FUNC_1(VAR_14->extra);
  return -VAR_0;
 }

 VAR_14->transport_name = "ene_ub6250";
 VAR_14->transport = VAR_5;
 VAR_14->max_lun = 0;

 VAR_12 = FUNC_7(VAR_14);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_0(VAR_14, VAR_2, VAR_15->bbuf);
 if (VAR_12 != VAR_4) {
  FUNC_5(VAR_10);
  return VAR_3;
 }

 VAR_13 = VAR_15->bbuf[0];
 if (!(VAR_13 & 0x01)) {
  FUNC_4("ums_eneub6250: This driver only supports SD/MS cards. "
   "It does not support SM cards.\n");
 }

 return VAR_12;
}
