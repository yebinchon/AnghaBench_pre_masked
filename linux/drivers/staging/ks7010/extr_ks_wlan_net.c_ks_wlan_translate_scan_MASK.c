
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


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_18__ {scalar_t__ id; scalar_t__ size; } ;
struct TYPE_17__ {int size; int* body; } ;
struct TYPE_14__ {int size; int body; } ;
struct local_ap {int capability; int channel; TYPE_9__ wpa_ie; TYPE_9__ rsn_ie; TYPE_8__ rate_set; TYPE_5__ ssid; int sq; scalar_t__ rssi; int bssid; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_15__ {int value; scalar_t__ disabled; scalar_t__ fixed; } ;
struct TYPE_13__ {int length; int flags; } ;
struct TYPE_12__ {scalar_t__ noise; int qual; scalar_t__ level; } ;
struct TYPE_11__ {int m; int e; } ;
struct TYPE_10__ {int sa_data; int sa_family; } ;
struct TYPE_16__ {TYPE_6__ bitrate; TYPE_4__ data; TYPE_3__ qual; TYPE_2__ freq; int mode; TYPE_1__ ap_addr; } ;
struct iw_event {TYPE_7__ u; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 (int ,int ) ;
 int* VAR_24 ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_2 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_3 (struct iw_request_info*,char*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_4 (char const*,char*,char*,TYPE_9__*,struct iw_event*,struct iw_request_info*) ;

__attribute__((used)) static inline char *FUNC_5(struct net_device *VAR_25,
        struct iw_request_info *VAR_26,
        char *VAR_27, char *VAR_28,
        struct local_ap *VAR_29)
{

 static const char VAR_30[] = "rsn_ie=";
 static const char VAR_31[] = "wpa_ie=";
 struct iw_event VAR_32;
 u16 VAR_33;
 char *VAR_34;
 int VAR_35;


 VAR_32.cmd = VAR_14;
 VAR_32.u.ap_addr.sa_family = VAR_0;
 FUNC_0(VAR_32.u.ap_addr.sa_data, VAR_29->bssid);
 VAR_27 = FUNC_1(VAR_26, VAR_27,
       VAR_28, &VAR_32, VAR_5);




 VAR_32.u.data.length = VAR_29->ssid.size;
 if (VAR_32.u.data.length > 32)
  VAR_32.u.data.length = 32;
 VAR_32.cmd = VAR_16;
 VAR_32.u.data.flags = 1;
 VAR_27 = FUNC_2(VAR_26, VAR_27,
       VAR_28, &VAR_32, VAR_29->ssid.body);


 VAR_32.cmd = VAR_18;
 VAR_33 = VAR_29->capability;
 if (VAR_33 & (VAR_20 | VAR_21)) {
  VAR_32.u.mode = (VAR_33 & VAR_20) ?
         VAR_12 : VAR_11;
  VAR_27 = FUNC_1(VAR_26, VAR_27,
        VAR_28, &VAR_32, VAR_10);
 }


 VAR_32.cmd = VAR_17;
 VAR_32.u.freq.m = VAR_29->channel;
 VAR_32.u.freq.m = VAR_24[VAR_32.u.freq.m - 1] * 100000;
 VAR_32.u.freq.e = 1;
 VAR_27 = FUNC_1(VAR_26, VAR_27,
       VAR_28, &VAR_32, VAR_6);


 VAR_32.cmd = VAR_1;
 VAR_32.u.qual.level = 256 - VAR_29->rssi;
 VAR_32.u.qual.qual = VAR_29->sq;
 VAR_32.u.qual.noise = 0;
 VAR_27 = FUNC_1(VAR_26, VAR_27, VAR_28,
       &VAR_32, VAR_9);


 VAR_32.cmd = VAR_15;
 VAR_32.u.data.flags = (VAR_33 & VAR_22) ?
       (VAR_3 | VAR_4) :
        VAR_2;
 VAR_32.u.data.length = 0;
 VAR_27 = FUNC_2(VAR_26, VAR_27, VAR_28,
       &VAR_32, VAR_29->ssid.body);





 VAR_34 = VAR_27 + VAR_7;

 VAR_32.cmd = VAR_19;


 VAR_32.u.bitrate.fixed = 0;
 VAR_32.u.bitrate.disabled = 0;


 for (VAR_35 = 0; VAR_35 < 16; VAR_35++) {

  if (VAR_35 >= VAR_29->rate_set.size)
   break;

  VAR_32.u.bitrate.value = ((VAR_29->rate_set.body[VAR_35] & 0x7f) * 500000);

  VAR_34 = FUNC_3(VAR_26, VAR_27,
         VAR_34, VAR_28, &VAR_32,
         VAR_8);
 }

 if ((VAR_34 - VAR_27) > VAR_7)
  VAR_27 = VAR_34;

 if (VAR_29->rsn_ie.id == VAR_13 && VAR_29->rsn_ie.size != 0)
  VAR_27 = FUNC_4(VAR_30, VAR_28,
            VAR_27, &VAR_29->rsn_ie,
            &VAR_32, VAR_26);

 if (VAR_29->wpa_ie.id == VAR_23 && VAR_29->wpa_ie.size != 0)
  VAR_27 = FUNC_4(VAR_31, VAR_28,
            VAR_27, &VAR_29->wpa_ie,
            &VAR_32, VAR_26);





 return VAR_27;
}
