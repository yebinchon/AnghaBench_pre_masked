
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ pfirmware; } ;
struct rt_firmware {int fwstatus; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum fw_status { ____Placeholder_fw_status } fw_status ;


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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (char*,...) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;
 int FUNC_6 (struct rtl_priv*,int ) ;
 int FUNC_7 (struct rtl_priv*,int ,int ) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct ieee80211_hw *VAR_17,
  u8 VAR_18)
{
 struct rtl_priv *VAR_19 = FUNC_4(VAR_17);
 struct rtl_hal *VAR_20 = FUNC_3(FUNC_4(VAR_17));
 struct rt_firmware *VAR_21 = (struct rt_firmware *)VAR_20->pfirmware;
 u32 VAR_22;
 u8 VAR_23 = 0;
 short VAR_24 = 1000;
 bool VAR_25 = 1;

 FUNC_0(VAR_19, VAR_0, VAR_1,
   "LoadStaus(%d)\n", VAR_18);

 VAR_21->fwstatus = (enum fw_status)VAR_18;

 switch (VAR_18) {
 case 128:

  do {
   VAR_23 = FUNC_5(VAR_19, VAR_15);
   if (VAR_23 & VAR_7)
    break;
   FUNC_9(5);
  } while (VAR_24--);

  if (!(VAR_23 & VAR_6) || (VAR_24 <= 0)) {
   FUNC_2("FW_STATUS_LOAD_IMEM FAIL CPU, Status=%x\n",
          VAR_23);
   goto status_check_fail;
  }
  break;

 case 129:


  do {
   VAR_23 = FUNC_5(VAR_19, VAR_15);
   if (VAR_23 & VAR_4)
    break;
   FUNC_9(5);
  } while (VAR_24--);

  if (!(VAR_23 & VAR_3) || (VAR_24 <= 0)) {
   FUNC_2("FW_STATUS_LOAD_EMEM FAIL CPU, Status=%x\n",
          VAR_23);
   goto status_check_fail;
  }


  VAR_25 = FUNC_1(VAR_17);
  if (!VAR_25) {
   FUNC_2("Enable CPU fail!\n");
   goto status_check_fail;
  }
  break;

 case 130:

  do {
   VAR_23 = FUNC_5(VAR_19, VAR_15);
   if (VAR_23 & VAR_2)
    break;
   FUNC_9(5);
  } while (VAR_24--);

  if (!(VAR_23 & VAR_2) || (VAR_24 <= 0)) {
   FUNC_2("Polling DMEM code done fail ! cpustatus(%#x)\n",
          VAR_23);
   goto status_check_fail;
  }

  FUNC_0(VAR_19, VAR_0, VAR_1,
    "DMEM code download success, cpustatus(%#x)\n",
    VAR_23);



  VAR_24 = 2000;
  do {
   VAR_23 = FUNC_5(VAR_19, VAR_15);
   if (VAR_23 & VAR_5)
    break;
   FUNC_9(40);
  } while (VAR_24--);

  FUNC_0(VAR_19, VAR_0, VAR_1,
    "Polling Load Firmware ready, cpustatus(%x)\n",
    VAR_23);

  if (((VAR_23 & VAR_10) != VAR_10) ||
      (VAR_24 <= 0)) {
   FUNC_2("Polling Load Firmware ready fail ! cpustatus(%x)\n",
          VAR_23);
   goto status_check_fail;
  }



  VAR_22 = FUNC_6(VAR_19, VAR_15);
  FUNC_8(VAR_19, VAR_15, (VAR_22 & (~VAR_16)));

  VAR_22 = FUNC_6(VAR_19, VAR_11);
  FUNC_8(VAR_19, VAR_11, (VAR_22 | VAR_12 |
    VAR_13 | VAR_14));

  FUNC_0(VAR_19, VAR_0, VAR_1,
    "Current RCR settings(%#x)\n", VAR_22);


  FUNC_7(VAR_19, VAR_8, VAR_9);
  break;

 default:
  FUNC_2("Unknown status check!\n");
  VAR_25 = 0;
  break;
 }

status_check_fail:
 FUNC_0(VAR_19, VAR_0, VAR_1,
   "loadfw_status(%d), rtstatus(%x)\n",
   VAR_18, VAR_25);
 return VAR_25;
}
