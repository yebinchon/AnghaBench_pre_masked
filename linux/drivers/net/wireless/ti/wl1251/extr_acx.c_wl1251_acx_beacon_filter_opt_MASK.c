
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_beacon_filter_option {int enable; scalar_t__ max_num_beacons; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_beacon_filter_option*) ;
 struct acx_beacon_filter_option* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_beacon_filter_option*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4, bool VAR_5)
{
 struct acx_beacon_filter_option *VAR_6;
 int VAR_7;

 FUNC_3(VAR_1, "acx beacon filter opt");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_6->enable = VAR_5;
 VAR_6->max_num_beacons = 0;

 VAR_7 = FUNC_2(VAR_4, VAR_0,
       VAR_6, sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("failed to set beacon filter opt: %d", VAR_7);
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
