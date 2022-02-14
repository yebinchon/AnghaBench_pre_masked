
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_ps_poll_template {int dummy; } ;
struct wl12xx_null_data_template {int dummy; } ;
struct wl12xx_disconn_template {int dummy; } ;
struct wl12xx_arp_rsp_template {int dummy; } ;
struct wl1271 {int quirks; int sched_scan_templ_id_5; int sched_scan_templ_id_2_4; int scan_templ_id_5; int scan_templ_id_2_4; } ;
struct ieee80211_qos_hdr {int dummy; } ;


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
 int FUNC_0 (struct wl1271*,int ,int ,int *,int,int,int ) ;

int FUNC_1(struct wl1271 *VAR_17)
{
 int VAR_18, VAR_19;
 size_t VAR_20;


 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_17->scan_templ_id_2_4, ((void*)0),
          VAR_11,
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_17->scan_templ_id_5,
          ((void*)0), VAR_11, 0,
          VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_17->quirks & VAR_16) {
  VAR_18 = FUNC_0(VAR_17, VAR_14,
           VAR_17->sched_scan_templ_id_2_4,
           ((void*)0),
           VAR_11,
           0, VAR_13);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_0(VAR_17, VAR_14,
           VAR_17->sched_scan_templ_id_5,
           ((void*)0),
           VAR_11,
           0, VAR_13);
  if (VAR_18 < 0)
   return VAR_18;
 }

 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_6, ((void*)0),
          sizeof(struct wl12xx_null_data_template),
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_8, ((void*)0),
          sizeof(struct wl12xx_ps_poll_template),
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_9, ((void*)0),
          sizeof
          (struct ieee80211_qos_hdr),
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_7, ((void*)0),
          VAR_10,
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_3, ((void*)0),
          VAR_10,
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_20 = sizeof(struct wl12xx_arp_rsp_template) +
     VAR_12;
 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_2, ((void*)0),
          VAR_20,
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;





 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_1, ((void*)0),
          VAR_11,
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_0, ((void*)0),
          VAR_11,
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_0(VAR_17, VAR_14,
          VAR_4, ((void*)0),
          sizeof
          (struct wl12xx_disconn_template),
          0, VAR_13);
 if (VAR_18 < 0)
  return VAR_18;

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  VAR_18 = FUNC_0(VAR_17, VAR_14,
           VAR_5, ((void*)0),
           sizeof(struct ieee80211_qos_hdr),
           VAR_19, VAR_13);
  if (VAR_18 < 0)
   return VAR_18;
 }

 return 0;
}
