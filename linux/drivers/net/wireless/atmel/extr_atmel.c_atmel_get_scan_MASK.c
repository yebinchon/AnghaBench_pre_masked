
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; scalar_t__ flags; } ;
struct TYPE_11__ {int length; int flags; } ;
struct TYPE_9__ {int level; int qual; } ;
struct TYPE_8__ {scalar_t__ e; int m; } ;
struct TYPE_7__ {int sa_data; int sa_family; } ;
struct TYPE_12__ {TYPE_5__ data; TYPE_3__ qual; TYPE_2__ freq; int mode; TYPE_1__ ap_addr; } ;
struct iw_event {TYPE_6__ u; int cmd; } ;
struct atmel_private {scalar_t__ site_survey_state; int BSS_list_entries; TYPE_4__* BSSinfo; } ;
struct TYPE_10__ {int SSIDsize; scalar_t__ UsingWEP; int RSSI; int channel; int BSStype; int * SSID; int BSSID; } ;


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
 scalar_t__ VAR_17 ;
 char* FUNC_0 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 struct atmel_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_18,
     struct iw_request_info *VAR_19,
     struct iw_point *VAR_20,
     char *VAR_21)
{
 struct atmel_private *VAR_22 = FUNC_3(VAR_18);
 int VAR_23;
 char *VAR_24 = VAR_21;
 struct iw_event VAR_25;

 if (VAR_22->site_survey_state != VAR_17)
  return -VAR_1;

 for (VAR_23 = 0; VAR_23 < VAR_22->BSS_list_entries; VAR_23++) {
  VAR_25.cmd = VAR_12;
  VAR_25.u.ap_addr.sa_family = VAR_0;
  FUNC_2(VAR_25.u.ap_addr.sa_data, VAR_22->BSSinfo[VAR_23].BSSID, VAR_2);
  VAR_24 = FUNC_0(VAR_19, VAR_24,
        VAR_21 + VAR_11,
        &VAR_25, VAR_7);

  VAR_25.u.data.length = VAR_22->BSSinfo[VAR_23].SSIDsize;
  if (VAR_25.u.data.length > 32)
   VAR_25.u.data.length = 32;
  VAR_25.cmd = VAR_14;
  VAR_25.u.data.flags = 1;
  VAR_24 = FUNC_1(VAR_19, VAR_24,
        VAR_21 + VAR_11,
        &VAR_25, VAR_22->BSSinfo[VAR_23].SSID);

  VAR_25.cmd = VAR_16;
  VAR_25.u.mode = VAR_22->BSSinfo[VAR_23].BSStype;
  VAR_24 = FUNC_0(VAR_19, VAR_24,
        VAR_21 + VAR_11,
        &VAR_25, VAR_10);

  VAR_25.cmd = VAR_15;
  VAR_25.u.freq.m = VAR_22->BSSinfo[VAR_23].channel;
  VAR_25.u.freq.e = 0;
  VAR_24 = FUNC_0(VAR_19, VAR_24,
        VAR_21 + VAR_11,
        &VAR_25, VAR_8);


  VAR_25.cmd = VAR_3;
  VAR_25.u.qual.level = VAR_22->BSSinfo[VAR_23].RSSI;
  VAR_25.u.qual.qual = VAR_25.u.qual.level;

  VAR_24 = FUNC_0(VAR_19, VAR_24,
        VAR_21 + VAR_11,
        &VAR_25, VAR_9);


  VAR_25.cmd = VAR_13;
  if (VAR_22->BSSinfo[VAR_23].UsingWEP)
   VAR_25.u.data.flags = VAR_5 | VAR_6;
  else
   VAR_25.u.data.flags = VAR_4;
  VAR_25.u.data.length = 0;
  VAR_24 = FUNC_1(VAR_19, VAR_24,
        VAR_21 + VAR_11,
        &VAR_25, ((void*)0));
 }


 VAR_20->length = (VAR_24 - VAR_21);
 VAR_20->flags = 0;

 return 0;
}
