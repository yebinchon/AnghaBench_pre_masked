
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int length; scalar_t__ flags; } ;
union iwreq_data {TYPE_9__ data; } ;
struct wl3501_card {int bss_cnt; TYPE_6__* bss_set; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_16__ {int flags; scalar_t__ length; } ;
struct TYPE_14__ {scalar_t__ e; int m; } ;
struct TYPE_10__ {int sa_data; int sa_family; } ;
struct TYPE_17__ {TYPE_7__ data; TYPE_5__ freq; int mode; TYPE_1__ ap_addr; } ;
struct iw_event {TYPE_8__ u; int cmd; } ;
struct TYPE_13__ {int chan; } ;
struct TYPE_11__ {scalar_t__ len; } ;
struct TYPE_12__ {int * essid; TYPE_2__ el; } ;
struct TYPE_15__ {int cap_info; TYPE_4__ ds_pset; int bss_type; TYPE_3__ ssid; int bssid; } ;


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
 char* FUNC_0 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 struct wl3501_card* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_15, struct iw_request_info *VAR_16,
      union iwreq_data *VAR_17, char *VAR_18)
{
 struct wl3501_card *VAR_19 = FUNC_3(VAR_15);
 int VAR_20;
 char *VAR_21 = VAR_18;
 struct iw_event VAR_22;

 for (VAR_20 = 0; VAR_20 < VAR_19->bss_cnt; ++VAR_20) {
  VAR_22.cmd = VAR_9;
  VAR_22.u.ap_addr.sa_family = VAR_0;
  FUNC_2(VAR_22.u.ap_addr.sa_data, VAR_19->bss_set[VAR_20].bssid, VAR_1);
  VAR_21 = FUNC_0(VAR_16, VAR_21,
        VAR_18 + VAR_8,
        &VAR_22, VAR_5);
  VAR_22.cmd = VAR_11;
  VAR_22.u.data.flags = 1;
  VAR_22.u.data.length = VAR_19->bss_set[VAR_20].ssid.el.len;
  VAR_21 = FUNC_1(VAR_16, VAR_21,
        VAR_18 + VAR_8,
        &VAR_22,
        VAR_19->bss_set[VAR_20].ssid.essid);
  VAR_22.cmd = VAR_13;
  VAR_22.u.mode = VAR_19->bss_set[VAR_20].bss_type;
  VAR_21 = FUNC_0(VAR_16, VAR_21,
        VAR_18 + VAR_8,
        &VAR_22, VAR_7);
  VAR_22.cmd = VAR_12;
  VAR_22.u.freq.m = VAR_19->bss_set[VAR_20].ds_pset.chan;
  VAR_22.u.freq.e = 0;
  VAR_21 = FUNC_0(VAR_16, VAR_21,
        VAR_18 + VAR_8,
        &VAR_22, VAR_6);
  VAR_22.cmd = VAR_10;
  if (VAR_19->bss_set[VAR_20].cap_info & VAR_14)
   VAR_22.u.data.flags = VAR_3 | VAR_4;
  else
   VAR_22.u.data.flags = VAR_2;
  VAR_22.u.data.length = 0;
  VAR_21 = FUNC_1(VAR_16, VAR_21,
        VAR_18 + VAR_8,
        &VAR_22, ((void*)0));
 }

 VAR_17->data.length = (VAR_21 - VAR_18);
 VAR_17->data.flags = 0;
 return 0;
}
