
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int length; } ;
union iwreq_data {TYPE_2__ encoding; } ;
typedef char u8 ;
typedef char u32 ;
struct sw_cam_table {int dummy; } ;
struct TYPE_3__ {char tx_keyidx; } ;
struct rtllib_device {int wx_set_enc; int pairwise_key_type; TYPE_1__ crypt_info; int swcamtable; int group_key_type; int ips_mutex; } ;
struct r8192_priv {struct rtllib_device* rtllib; int wx_mutex; int up; scalar_t__ bHwRadioOff; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,char,char,int ,char*,int ,char*) ;
 int FUNC_9 (struct net_device*,char,char,int ,char*,int ,char*,int ) ;
 struct r8192_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct rtllib_device*,struct iw_request_info*,union iwreq_data*,char*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_7,
         struct iw_request_info *VAR_8,
         union iwreq_data *VAR_9, char *VAR_10)
{
 struct r8192_priv *VAR_11 = FUNC_10(VAR_7);
 int VAR_12;

 struct rtllib_device *VAR_13 = VAR_11->rtllib;
 u32 VAR_14[4] = {0, 0, 0, 0};
 u8 VAR_15 = 0xff;
 u32 VAR_16 = 0;
 u8 VAR_17[4][6] = {{0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x02},
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x03} };
 int VAR_18;

 if (VAR_11->bHwRadioOff)
  return 0;

 if (!VAR_11->up)
  return -VAR_1;

 VAR_11->rtllib->wx_set_enc = 1;
 FUNC_2(&VAR_11->rtllib->ips_mutex);
 FUNC_7(VAR_7);
 FUNC_3(&VAR_11->rtllib->ips_mutex);
 FUNC_2(&VAR_11->wx_mutex);

 FUNC_0(VAR_0, "Setting SW wep key");
 VAR_12 = FUNC_11(VAR_11->rtllib, VAR_8, VAR_9, VAR_10);
 FUNC_3(&VAR_11->wx_mutex);

 if (VAR_9->encoding.flags & VAR_2) {
  VAR_13->pairwise_key_type = VAR_13->group_key_type = VAR_4;
  FUNC_5(VAR_7);
  FUNC_1(VAR_11->rtllib->swcamtable, 0,
         sizeof(struct sw_cam_table) * 32);
  goto end_hw_sec;
 }
 if (VAR_9->encoding.length != 0) {
  for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
   VAR_14[VAR_18] |= VAR_10[4 * VAR_18 + 0] & VAR_15;
   if (VAR_18 == 1 && (4 * VAR_18 + 1) == VAR_9->encoding.length)
    VAR_15 = 0x00;
   if (VAR_18 == 3 && (4 * VAR_18 + 1) == VAR_9->encoding.length)
    VAR_15 = 0x00;
   VAR_14[VAR_18] |= (VAR_10[4 * VAR_18 + 1] & VAR_15) << 8;
   VAR_14[VAR_18] |= (VAR_10[4 * VAR_18 + 2] & VAR_15) << 16;
   VAR_14[VAR_18] |= (VAR_10[4 * VAR_18 + 3] & VAR_15) << 24;
  }

  switch (VAR_9->encoding.flags & VAR_3) {
  case 0:
   VAR_16 = VAR_13->crypt_info.tx_keyidx;
   break;
  case 1:
   VAR_16 = 0;
   break;
  case 2:
   VAR_16 = 1;
   break;
  case 3:
   VAR_16 = 2;
   break;
  case 4:
   VAR_16 = 3;
   break;
  default:
   break;
  }
  if (VAR_9->encoding.length == 0x5) {
   VAR_13->pairwise_key_type = VAR_6;
   FUNC_6(VAR_7);
  }

  else if (VAR_9->encoding.length == 0xd) {
   VAR_13->pairwise_key_type = VAR_5;
   FUNC_6(VAR_7);
   FUNC_8(VAR_7, VAR_16, VAR_16, VAR_5,
           VAR_17[VAR_16], 0, VAR_14);
   FUNC_9(VAR_7, VAR_16, VAR_16, VAR_5,
      VAR_17[VAR_16], 0, VAR_14, 0);
  } else {
   FUNC_4(VAR_7,
        "wrong type in WEP, not WEP40 and WEP104\n");
  }
 }

end_hw_sec:
 VAR_11->rtllib->wx_set_enc = 0;
 return VAR_12;
}
