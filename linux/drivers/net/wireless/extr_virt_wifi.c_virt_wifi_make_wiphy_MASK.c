
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int max_scan_ssids; int max_scan_ie_len; int interface_modes; int ** bands; int signal_type; } ;
struct virt_wifi_wiphy_priv {int being_deleted; int scan_result; int * scan_request; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct wiphy*) ;
 struct wiphy* FUNC_3 (int *,int) ;
 struct virt_wifi_wiphy_priv* FUNC_4 (struct wiphy*) ;
 int FUNC_5 (struct wiphy*) ;

__attribute__((used)) static struct wiphy *FUNC_6(void)
{
 struct wiphy *VAR_9;
 struct virt_wifi_wiphy_priv *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(&VAR_7, sizeof(*VAR_10));

 if (!VAR_9)
  return ((void*)0);

 VAR_9->max_scan_ssids = 4;
 VAR_9->max_scan_ie_len = 1000;
 VAR_9->signal_type = VAR_0;

 VAR_9->bands[VAR_1] = &VAR_5;
 VAR_9->bands[VAR_2] = &VAR_6;
 VAR_9->bands[VAR_3] = ((void*)0);

 VAR_9->interface_modes = FUNC_0(VAR_4);

 VAR_10 = FUNC_4(VAR_9);
 VAR_10->being_deleted = 0;
 VAR_10->scan_request = ((void*)0);
 FUNC_1(&VAR_10->scan_result, VAR_8);

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 return VAR_9;
}
