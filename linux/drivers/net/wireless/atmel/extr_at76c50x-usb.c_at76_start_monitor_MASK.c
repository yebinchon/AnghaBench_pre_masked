
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at76_req_scan {void* probe_delay; void* max_channel_time; void* min_channel_time; scalar_t__ international_scan; int scan_type; int channel; int bssid; } ;
struct at76_priv {int udev; int scan_max_time; int scan_min_time; int channel; } ;
typedef int scan ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct at76_req_scan*,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct at76_req_scan*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct at76_priv *VAR_2)
{
 struct at76_req_scan VAR_3;
 int VAR_4;

 FUNC_4(&VAR_3, 0, sizeof(struct at76_req_scan));
 FUNC_3(VAR_3.bssid);

 VAR_3.channel = VAR_2->channel;
 VAR_3.scan_type = VAR_1;
 VAR_3.international_scan = 0;
 VAR_3.min_channel_time = FUNC_2(VAR_2->scan_min_time);
 VAR_3.max_channel_time = FUNC_2(VAR_2->scan_max_time);
 VAR_3.probe_delay = FUNC_2(0);

 VAR_4 = FUNC_1(VAR_2->udev, VAR_0, &VAR_3, sizeof(VAR_3));
 if (VAR_4 >= 0)
  VAR_4 = FUNC_0(VAR_2->udev, VAR_0);

 return VAR_4;
}
