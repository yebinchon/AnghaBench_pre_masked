
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
typedef int u8 ;
struct TYPE_2__ {int* bssid; char* ssid; int ssid_len; } ;
struct rtllib_device {scalar_t__ state; int cannot_notify; int wx_mutex; TYPE_1__ current_network; int ssid_set; int wap_set; int dev; } ;
struct iw_request_info {int dummy; } ;
struct iw_mlme {int cmd; int reason_code; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtllib_device*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct rtllib_device*) ;

int FUNC_5(struct rtllib_device *VAR_3,
          struct iw_request_info *VAR_4,
          union iwreq_data *VAR_5, char *VAR_6)
{
 u8 VAR_7 = 0;
 bool VAR_8 = 0;
 struct iw_mlme *VAR_9 = (struct iw_mlme *) VAR_6;

 if (VAR_3->state != VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_3->wx_mutex);

 switch (VAR_9->cmd) {
 case 129:
  VAR_8 = 1;

 case 128:
  if (VAR_8)
   FUNC_3(VAR_3->dev, "disauth packet !\n");
  else
   FUNC_3(VAR_3->dev, "dis associate packet!\n");

  VAR_3->cannot_notify = 1;

  FUNC_0(VAR_3, VAR_8, VAR_9->reason_code);
  FUNC_4(VAR_3);

  VAR_3->wap_set = 0;
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
   VAR_3->current_network.bssid[VAR_7] = 0x55;

  VAR_3->ssid_set = 0;
  VAR_3->current_network.ssid[0] = '\0';
  VAR_3->current_network.ssid_len = 0;
  break;
 default:
  FUNC_2(&VAR_3->wx_mutex);
  return -VAR_1;
 }

 FUNC_2(&VAR_3->wx_mutex);

 return 0;
}
