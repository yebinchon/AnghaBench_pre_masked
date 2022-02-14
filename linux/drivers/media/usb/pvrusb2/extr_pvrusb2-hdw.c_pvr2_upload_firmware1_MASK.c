
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u16 ;
struct pvr2_hdw {int fw1_state; int usb_dev; TYPE_2__* hdw_desc; } ;
struct firmware {unsigned int size; scalar_t__ data; } ;
struct TYPE_3__ {int lst; int cnt; } ;
struct TYPE_4__ {scalar_t__ flag_fx2_16kb; TYPE_1__ fx2_firmware; } ;


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
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,scalar_t__,int) ;
 int FUNC_3 (struct pvr2_hdw*,int) ;
 int FUNC_4 (struct pvr2_hdw*,struct firmware const**,char*,int ,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,unsigned int,int,int,unsigned int,int ,void*,int,int ) ;
 int FUNC_10 (int ,int) ;
 unsigned int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct pvr2_hdw *VAR_11)
{
 const struct firmware *VAR_12 = ((void*)0);
 void *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 int VAR_16;
 u16 VAR_17;

 if (!VAR_11->hdw_desc->fx2_firmware.cnt) {
  VAR_11->fw1_state = VAR_6;
  FUNC_5(VAR_10,
      "Connected device type defines no firmware to upload; ignoring firmware");
  return -VAR_3;
 }

 VAR_11->fw1_state = VAR_4;

 FUNC_7("pvr2_upload_firmware1");

 VAR_16 = FUNC_4(VAR_11,&VAR_12,"fx2 controller",
       VAR_11->hdw_desc->fx2_firmware.cnt,
       VAR_11->hdw_desc->fx2_firmware.lst);
 if (VAR_16 < 0) {
  if (VAR_16 == -VAR_1) VAR_11->fw1_state = VAR_5;
  return VAR_16;
 }

 FUNC_8(VAR_11->usb_dev, FUNC_10(VAR_11->usb_dev, 0 & 0x7f));

 VAR_14 = FUNC_11(VAR_11->usb_dev, 0);
 VAR_15 = VAR_12->size;

 if ((VAR_15 != 0x2000) &&
     (!(VAR_11->hdw_desc->flag_fx2_16kb && (VAR_15 == 0x4000)))) {
  if (VAR_11->hdw_desc->flag_fx2_16kb) {
   FUNC_5(VAR_10,
       "Wrong fx2 firmware size (expected 8192 or 16384, got %u)",
       VAR_15);
  } else {
   FUNC_5(VAR_10,
       "Wrong fx2 firmware size (expected 8192, got %u)",
       VAR_15);
  }
  FUNC_6(VAR_12);
  return -VAR_2;
 }

 VAR_13 = FUNC_1(0x800, VAR_8);
 if (VAR_13 == ((void*)0)){
  FUNC_6(VAR_12);
  return -VAR_2;
 }


 FUNC_3(VAR_11,1);




 VAR_16 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17 += 0x800) {
  FUNC_2(VAR_13, VAR_12->data + VAR_17, 0x800);
  VAR_16 += FUNC_9(VAR_11->usb_dev, VAR_14, 0xa0, 0x40, VAR_17,
           0, VAR_13, 0x800, VAR_9);
 }

 FUNC_7("Upload done, releasing device's CPU");


 FUNC_3(VAR_11,0);

 FUNC_0(VAR_13);
 FUNC_6(VAR_12);

 FUNC_7("Upload done (%d bytes sent)",VAR_16);


 if (VAR_16 == VAR_15) {
  VAR_11->fw1_state = VAR_7;
  return 0;
 }

 return -VAR_0;
}
