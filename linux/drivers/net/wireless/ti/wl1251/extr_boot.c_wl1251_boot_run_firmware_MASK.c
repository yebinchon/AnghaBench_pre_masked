
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wl1251 {scalar_t__ chip_id; int event_mask; scalar_t__ intr_mask; int fw_ver; void* event_box_addr; void* cmd_box_addr; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1251*,int ,int) ;
 int FUNC_2 (struct wl1251*,int ) ;
 int FUNC_3 (struct wl1251*) ;
 int FUNC_4 (int ,char*,scalar_t__,...) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wl1251*) ;
 int FUNC_8 (struct wl1251*) ;
 void* FUNC_9 (struct wl1251*,int ) ;
 int FUNC_10 (struct wl1251*,int ,scalar_t__) ;
 int FUNC_11 (struct wl1251*,int ,int ,int ,int ) ;

int FUNC_12(struct wl1251 *VAR_31)
{
 int VAR_32, VAR_33;
 u32 VAR_34, VAR_35;

 FUNC_2(VAR_31, VAR_8);

 VAR_34 = FUNC_9(VAR_31, VAR_5);

 FUNC_4(VAR_6, "chip id after firmware boot: 0x%x", VAR_34);

 if (VAR_34 != VAR_31->chip_id) {
  FUNC_6("chip id doesn't match after firmware boot");
  return -VAR_9;
 }


 VAR_32 = 0;
 while (VAR_32++ < VAR_10) {
  FUNC_0(VAR_11);
  VAR_35 = FUNC_9(VAR_31, VAR_1);

  if (VAR_35 == 0xffffffff) {
   FUNC_6("error reading hardware complete "
         "init indication");
   return -VAR_9;
  }

  else if (VAR_35 & VAR_23) {
   FUNC_10(VAR_31, VAR_0,
        VAR_23);
   break;
  }
 }

 if (VAR_32 > VAR_10) {
  FUNC_6("timeout waiting for the hardware to "
        "complete initialization");
  return -VAR_9;
 }


 VAR_31->cmd_box_addr = FUNC_9(VAR_31, VAR_15);


 VAR_31->event_box_addr = FUNC_9(VAR_31, VAR_16);


 FUNC_11(VAR_31, VAR_28,
        VAR_27,
        VAR_30,
        VAR_29);

 FUNC_4(VAR_7, "cmd_box_addr 0x%x event_box_addr 0x%x",
       VAR_31->cmd_box_addr, VAR_31->event_box_addr);

 FUNC_1(VAR_31, VAR_31->fw_ver, sizeof(VAR_31->fw_ver));







 FUNC_5(VAR_31);


 VAR_31->intr_mask = VAR_24 |
  VAR_25 |
  VAR_26 |
  VAR_21 |
  VAR_22 |
  VAR_23;
 FUNC_3(VAR_31);

 VAR_31->event_mask = VAR_19 | VAR_2 |
  VAR_20 |
  VAR_17 |
  VAR_18 |
  VAR_14 | VAR_4 |
  VAR_3 | VAR_12 |
  VAR_13;

 VAR_33 = FUNC_8(VAR_31);
 if (VAR_33 < 0) {
  FUNC_6("EVENT mask setting failed");
  return VAR_33;
 }

 FUNC_7(VAR_31);


 return 0;
}
