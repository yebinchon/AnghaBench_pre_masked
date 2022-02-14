
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int mode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct adapter {int hw_init_completed; } ;
typedef enum NDIS_802_11_NETWORK_INFRASTRUCTURE { ____Placeholder_NDIS_802_11_NETWORK_INFRASTRUCTURE } NDIS_802_11_NETWORK_INFRASTRUCTURE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int) ;
 int FUNC_5 (struct adapter*,int,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10, struct iw_request_info *VAR_11,
        union iwreq_data *VAR_12, char *VAR_13)
{
 struct adapter *VAR_14 = (struct adapter *)FUNC_2(VAR_10);
 enum NDIS_802_11_NETWORK_INFRASTRUCTURE VAR_15 ;
 int VAR_16 = 0;

 if (VAR_6 == FUNC_3(VAR_14)) {
  VAR_16 = -VAR_1;
  goto exit;
 }

 if (!VAR_14->hw_init_completed) {
  VAR_16 = -VAR_1;
  goto exit;
 }

 switch (VAR_12->mode) {
  case 130:
   VAR_15 = VAR_3;
   FUNC_0("set_mode = IW_MODE_AUTO\n");
   break;
  case 131:
   VAR_15 = VAR_4;
   FUNC_0("set_mode = IW_MODE_ADHOC\n");
   break;
  case 128:
   VAR_15 = VAR_2;
   FUNC_0("set_mode = IW_MODE_MASTER\n");

   break;
  case 129:
   VAR_15 = VAR_5;
   FUNC_0("set_mode = IW_MODE_INFRA\n");
   break;

  default :
   VAR_16 = -VAR_0;
   FUNC_1(VAR_8, VAR_7, ("\n Mode: %s is not supported \n", VAR_9[VAR_12->mode]));
   goto exit;
 }
 if (FUNC_4(VAR_14, VAR_15) ==0) {

  VAR_16 = -VAR_1;
  goto exit;

 }

 FUNC_5(VAR_14, VAR_15, 1);

exit:
 return VAR_16;
}
