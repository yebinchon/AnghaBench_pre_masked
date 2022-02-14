
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


struct zd1201 {int mac_enabled; int rxlen; int* rxdata; scalar_t__ rxdatas; int rxdataq; scalar_t__ ap; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; scalar_t__ flags; } ;
struct TYPE_11__ {int qual; int noise; int level; int updated; } ;
struct TYPE_10__ {int length; int flags; } ;
struct TYPE_9__ {int value; scalar_t__ disabled; scalar_t__ fixed; } ;
struct TYPE_8__ {int m; scalar_t__ e; } ;
struct TYPE_7__ {int sa_data; int sa_family; } ;
struct TYPE_12__ {TYPE_5__ qual; TYPE_4__ data; TYPE_3__ bitrate; TYPE_2__ freq; int mode; TYPE_1__ ap_addr; } ;
struct iw_event {TYPE_6__ u; int cmd; } ;
typedef int __le16 ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 char* FUNC_0 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int) ;
 struct zd1201* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct zd1201*) ;
 int FUNC_7 (struct zd1201*,int ,scalar_t__,int ,int ) ;
 int FUNC_8 (struct zd1201*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_22,
    struct iw_request_info *VAR_23, struct iw_point *VAR_24, char *VAR_25)
{
 struct zd1201 *VAR_26 = FUNC_4(VAR_22);
 int VAR_27, VAR_28, VAR_29, VAR_30;
 struct iw_event VAR_31;
 char *VAR_32 = VAR_25;
 char *VAR_33 = VAR_25 + VAR_13;


 if (VAR_26->ap)
  return -VAR_2;


 VAR_30 = VAR_26->mac_enabled;
 FUNC_8(VAR_26);

 VAR_26->rxdatas = 0;
 VAR_27 = FUNC_7(VAR_26, VAR_20,
      VAR_21, 0, 0);
 if (VAR_27)
  return VAR_27;

 FUNC_5(VAR_26->rxdataq, VAR_26->rxdatas);
 if (!VAR_26->rxlen)
  return -VAR_1;

 if (FUNC_2(*(__le16*)&VAR_26->rxdata[2]) != VAR_21)
  return -VAR_1;

 for(VAR_28=8; VAR_28<VAR_26->rxlen; VAR_28+=62) {
  VAR_31.cmd = VAR_14;
  VAR_31.u.ap_addr.sa_family = VAR_0;
  FUNC_3(VAR_31.u.ap_addr.sa_data, VAR_26->rxdata+VAR_28+6, 6);
  VAR_32 = FUNC_0(VAR_23, VAR_32, VAR_33,
        &VAR_31, VAR_6);

  VAR_31.cmd = VAR_16;
  VAR_31.u.data.length = VAR_26->rxdata[VAR_28+16];
  VAR_31.u.data.flags = 1;
  VAR_32 = FUNC_1(VAR_23, VAR_32, VAR_33,
        &VAR_31, VAR_26->rxdata+VAR_28+18);

  VAR_31.cmd = VAR_18;
  if (VAR_26->rxdata[VAR_28+14]&0x01)
   VAR_31.u.mode = VAR_12;
  else
   VAR_31.u.mode = VAR_11;
  VAR_32 = FUNC_0(VAR_23, VAR_32, VAR_33,
        &VAR_31, VAR_10);

  VAR_31.cmd = VAR_17;
  VAR_31.u.freq.m = VAR_26->rxdata[VAR_28+0];
  VAR_31.u.freq.e = 0;
  VAR_32 = FUNC_0(VAR_23, VAR_32, VAR_33,
        &VAR_31, VAR_7);

  VAR_31.cmd = VAR_19;
  VAR_31.u.bitrate.fixed = 0;
  VAR_31.u.bitrate.disabled = 0;
  for (VAR_29=0; VAR_29<10; VAR_29++) if (VAR_26->rxdata[VAR_28+50+VAR_29]) {
   VAR_31.u.bitrate.value = (VAR_26->rxdata[VAR_28+50+VAR_29]&0x7f)*500000;
   VAR_32 = FUNC_0(VAR_23, VAR_32, VAR_33,
         &VAR_31, VAR_8);
  }

  VAR_31.cmd = VAR_15;
  VAR_31.u.data.length = 0;
  if (VAR_26->rxdata[VAR_28+14]&0x10)
   VAR_31.u.data.flags = VAR_5;
  else
   VAR_31.u.data.flags = VAR_4;
  VAR_32 = FUNC_1(VAR_23, VAR_32, VAR_33, &VAR_31, ((void*)0));

  VAR_31.cmd = VAR_3;
  VAR_31.u.qual.qual = VAR_26->rxdata[VAR_28+4];
  VAR_31.u.qual.noise= VAR_26->rxdata[VAR_28+2]/10-100;
  VAR_31.u.qual.level = (256+VAR_26->rxdata[VAR_28+4]*100)/255-100;
  VAR_31.u.qual.updated = 7;
  VAR_32 = FUNC_0(VAR_23, VAR_32, VAR_33,
        &VAR_31, VAR_9);
 }

 if (!VAR_30)
  FUNC_6(VAR_26);

 VAR_24->length = VAR_32 - VAR_25;
 VAR_24->flags = 0;

 return 0;
}
