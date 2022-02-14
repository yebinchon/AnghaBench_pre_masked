
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__* bssid; } ;
struct TYPE_4__ {scalar_t__ bPromiscuousOn; scalar_t__ bFilterSourceStationFrame; } ;
struct rtllib_device {scalar_t__ iw_mode; TYPE_2__ current_network; TYPE_3__* dev; TYPE_1__ IntelPromiscuousModeInfo; } ;
struct TYPE_6__ {scalar_t__* dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_6 (TYPE_3__*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct rtllib_device *VAR_11, u16 VAR_12,
     u8 *VAR_13, u8 *VAR_14, u8 *VAR_15, u8 *VAR_16)
{
 u8 VAR_17, VAR_18;

 VAR_17 = FUNC_1(VAR_12);
 VAR_18 = FUNC_0(VAR_12);


 if (((VAR_12 & VAR_2) != VAR_2) &&
     !FUNC_2(VAR_11->current_network.bssid, VAR_15) &&
     !FUNC_4(VAR_11->current_network.bssid)) {
  return -1;
 }


 if (VAR_11->IntelPromiscuousModeInfo.bPromiscuousOn &&
  VAR_11->IntelPromiscuousModeInfo.bFilterSourceStationFrame) {
  if ((VAR_12 & VAR_4) && !(VAR_12 & VAR_3) &&
      !FUNC_2(VAR_13, VAR_11->current_network.bssid) &&
      FUNC_2(VAR_15, VAR_11->current_network.bssid)) {
   return -1;
  }
 }




 if (!VAR_11->IntelPromiscuousModeInfo.bPromiscuousOn) {
  if (VAR_18 != VAR_5 &&
      VAR_18 != VAR_6 &&
      VAR_18 != VAR_8 &&
      VAR_18 != VAR_7 &&
      VAR_18 != VAR_10) {
   if (VAR_18 != VAR_9)
    FUNC_6(VAR_11->dev,
        "RX: dropped data frame with no data (type=0x%02x, subtype=0x%02x)\n",
        VAR_17, VAR_18);
   return -1;
  }
 }

 if (VAR_11->iw_mode != VAR_1) {

  if (!FUNC_5(VAR_14, VAR_11->dev->dev_addr, VAR_0))
   return -1;


  if (FUNC_3(VAR_13)) {
   if (FUNC_5(VAR_15, VAR_11->current_network.bssid,
       VAR_0))
    return -1;
  }
 }
 return 0;
}
