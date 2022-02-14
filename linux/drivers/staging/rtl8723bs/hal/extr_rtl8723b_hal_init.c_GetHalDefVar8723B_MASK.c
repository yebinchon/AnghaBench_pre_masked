
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int wifi_spec; } ;
struct adapter {TYPE_1__ registrypriv; } ;
typedef enum HAL_DEF_VARIABLE { ____Placeholder_HAL_DEF_VARIABLE } HAL_DEF_VARIABLE ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,int,void*) ;
 int FUNC_2 (int) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct adapter*,int) ;
 int FUNC_5 (struct adapter*,int ,int) ;

u8 FUNC_6(struct adapter *VAR_8, enum HAL_DEF_VARIABLE VAR_9, void *VAR_10)
{
 u8 VAR_11;

 VAR_11 = VAR_7;

 switch (VAR_9) {
 case 136:
  *((u32 *)VAR_10) = VAR_2;
  break;

 case 134:
  *((u32 *)VAR_10) = VAR_4 + VAR_0*8;
  break;

 case 128:



  *(u32 *)VAR_10 = VAR_1;
  break;
 case 132:
 case 135:
  *((u8 *)VAR_10) = 0;
  break;
 case 130:
  *((u8 *)VAR_10) = 0;
  break;
 case 133:
  *((u8 *)VAR_10) = 1;
  break;
 case 138:
 case 139:
  *((u8 *)VAR_10) = 0;
  break;

 case 129:
  {
   u8 VAR_12 = *(u8 *)VAR_10;
   u32 VAR_13;
   u32 VAR_14, VAR_15;
   u32 VAR_16, VAR_17;
   u8 VAR_18, VAR_19, VAR_20, VAR_21;

   FUNC_0("============ RA status check  Mac_id:%d ===================\n", VAR_12);

   VAR_13 = 0x40000100 | VAR_12;
   FUNC_5(VAR_8, VAR_3, VAR_13);
   FUNC_3(10);
   VAR_14 = FUNC_4(VAR_8, 0x2F0);
   VAR_18 = VAR_14&0x7F;
   VAR_19 = (VAR_14>>7)&0x01;
   FUNC_0("[ ra_info1:0x%08x ] =>cur_tx_rate = %s, cur_sgi:%d, PWRSTS = 0x%02x \n",
    VAR_14,
    FUNC_2(VAR_18),
    VAR_19,
    (VAR_14>>8) & 0x07);

   VAR_13 = 0x40000400 | VAR_12;
   FUNC_5(VAR_8, VAR_3, VAR_13);
   FUNC_3(10);
   VAR_14 = FUNC_4(VAR_8, 0x2F0);
   VAR_15 = FUNC_4(VAR_8, 0x2F4);
   VAR_16 = FUNC_4(VAR_8, 0x2F8);
   VAR_17 = FUNC_4(VAR_8, 0x2FC);
   VAR_20 = VAR_15&0xFF;
   VAR_21 = (VAR_15>>8) & 0xFF;

   FUNC_0("[ ra_info1:0x%08x ] =>RSSI =%d, BW_setting = 0x%02x, DISRA = 0x%02x, VHT_EN = 0x%02x\n",
    VAR_14,
    VAR_14&0xFF,
    (VAR_14>>8) & 0xFF,
    (VAR_14>>16) & 0xFF,
    (VAR_14>>24) & 0xFF);

   FUNC_0("[ ra_info2:0x%08x ] =>hight_rate =%s, lowest_rate =%s, SGI = 0x%02x, RateID =%d\n",
    VAR_15,
    FUNC_2(VAR_20),
    FUNC_2(VAR_21),
    (VAR_15>>16) & 0xFF,
    (VAR_15>>24) & 0xFF);

   FUNC_0("rate_mask2 = 0x%08x, rate_mask1 = 0x%08x\n", VAR_17, VAR_16);

  }
  break;

 case 131:
  if (!VAR_8->registrypriv.wifi_spec) {
   *(u8 *)VAR_10 = VAR_5;
  } else {
   *(u8 *)VAR_10 = VAR_6;
  }
  break;

 case 137:
  *(u8 *)VAR_10 = 1;
  break;

 default:
  VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_10);
  break;
 }

 return VAR_11;
}
