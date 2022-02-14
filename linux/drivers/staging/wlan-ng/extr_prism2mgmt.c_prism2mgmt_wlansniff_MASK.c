
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u16 ;
struct wlandevice {TYPE_9__* netdev; struct hfa384x* priv; } ;
struct TYPE_12__ {void* data; int status; } ;
struct TYPE_18__ {int const data; int status; } ;
struct TYPE_17__ {int const data; int status; } ;
struct TYPE_16__ {int data; int status; } ;
struct TYPE_15__ {int const data; int status; } ;
struct TYPE_14__ {int const data; int status; } ;
struct TYPE_13__ {int data; } ;
struct TYPE_11__ {int data; } ;
struct p80211msg_lnxreq_wlansniff {TYPE_2__ resultcode; TYPE_8__ wlanheader; TYPE_7__ prismheader; TYPE_6__ packet_trunc; TYPE_5__ stripfcs; TYPE_4__ keepwepflags; TYPE_3__ channel; TYPE_1__ enable; } ;
struct hfa384x {int presniff_wepflags; int presniff_port_type; int sniff_channel; int sniff_fcs; int sniffhdr; int sniff_truncate; int * port_enabled; } ;
struct TYPE_19__ {void* type; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;


 int FUNC_0 (struct hfa384x*,int ) ;
 int FUNC_1 (struct hfa384x*,int ) ;
 int FUNC_2 (struct hfa384x*,int ) ;
 int FUNC_3 (struct hfa384x*,int ,int*) ;
 int FUNC_4 (struct hfa384x*,int ,int) ;
 int FUNC_5 (struct hfa384x*) ;
 int FUNC_6 (struct hfa384x*) ;
 int FUNC_7 (TYPE_9__*,char*,int,...) ;
 int FUNC_8 (TYPE_9__*,char*) ;

int FUNC_9(struct wlandevice *VAR_15, void *VAR_16)
{
 int VAR_17 = 0;
 struct p80211msg_lnxreq_wlansniff *VAR_18 = VAR_16;

 struct hfa384x *VAR_19 = VAR_15->priv;
 u16 VAR_20;

 VAR_18->resultcode.status = VAR_11;
 switch (VAR_18->enable.data) {
 case 129:

  if (VAR_15->netdev->type == VAR_0) {
   VAR_18->resultcode.data =
       VAR_12;
   return 0;
  }

  VAR_17 = FUNC_0(VAR_19, VAR_3);
  if (VAR_17) {
   FUNC_7(VAR_15->netdev,
       "failed to disable monitor mode, result=%d\n",
       VAR_17);
   goto failed;
  }

  VAR_17 = FUNC_1(VAR_19, 0);
  if (VAR_17) {
   FUNC_7
   (VAR_15->netdev,
        "failed to disable port 0 after sniffing, result=%d\n",
        VAR_17);
   goto failed;
  }

  VAR_15->netdev->type = VAR_0;


  VAR_17 = FUNC_4(VAR_19,
        VAR_8,
        VAR_19->presniff_wepflags);
  if (VAR_17) {
   FUNC_7
       (VAR_15->netdev,
        "failed to restore wepflags=0x%04x, result=%d\n",
        VAR_19->presniff_wepflags, VAR_17);
   goto failed;
  }


  if (VAR_19->presniff_port_type != 0) {
   VAR_20 = VAR_19->presniff_port_type;
   VAR_17 = FUNC_4(VAR_19,
        VAR_7,
        VAR_20);
   if (VAR_17) {
    FUNC_7
        (VAR_15->netdev,
         "failed to restore porttype, result=%d\n",
         VAR_17);
    goto failed;
   }


   VAR_17 = FUNC_2(VAR_19, 0);
   if (VAR_17) {
    FUNC_7(VAR_15->netdev,
        "failed to enable port to presniff setting, result=%d\n",
        VAR_17);
    goto failed;
   }
  } else {
   VAR_17 = FUNC_1(VAR_19, 0);
  }

  FUNC_8(VAR_15->netdev, "monitor mode disabled\n");
  VAR_18->resultcode.data = VAR_14;
  return 0;
 case 128:

  if (VAR_19->port_enabled[0]) {
   if (VAR_15->netdev->type == VAR_0) {

    VAR_17 = FUNC_3(VAR_19,
        VAR_7,
        &VAR_19->presniff_port_type);
    if (VAR_17) {
     FUNC_7
     (VAR_15->netdev,
          "failed to read porttype, result=%d\n",
          VAR_17);
     goto failed;
    }

    VAR_17 = FUNC_3(VAR_19,
        VAR_8,
        &VAR_19->presniff_wepflags);
    if (VAR_17) {
     FUNC_7
     (VAR_15->netdev,
          "failed to read wepflags, result=%d\n",
          VAR_17);
     goto failed;
    }
    FUNC_6(VAR_19);
    VAR_17 = FUNC_5(VAR_19);
    if (VAR_17) {
     FUNC_7(VAR_15->netdev,
         "failed to restart the card for sniffing, result=%d\n",
         VAR_17);
     goto failed;
    }
   } else {

    VAR_17 = FUNC_1(VAR_19, 0);
    if (VAR_17) {
     FUNC_7(VAR_15->netdev,
         "failed to enable port for sniffing, result=%d\n",
         VAR_17);
     goto failed;
    }
   }
  } else {
   VAR_19->presniff_port_type = 0;
  }


  VAR_20 = VAR_18->channel.data;
  VAR_17 = FUNC_4(VAR_19,
        VAR_6,
        VAR_20);
  VAR_19->sniff_channel = VAR_20;

  if (VAR_17) {
   FUNC_7(VAR_15->netdev,
       "failed to set channel %d, result=%d\n",
       VAR_20, VAR_17);
   goto failed;
  }


  if (VAR_15->netdev->type != VAR_0) {

   VAR_20 = VAR_5;
   VAR_17 = FUNC_4(VAR_19,
        VAR_7,
        VAR_20);
   if (VAR_17) {
    FUNC_7
        (VAR_15->netdev,
         "failed to set porttype %d, result=%d\n",
         VAR_20, VAR_17);
    goto failed;
   }
   if ((VAR_18->keepwepflags.status ==
        VAR_11) &&
       (VAR_18->keepwepflags.data != 128)) {

    VAR_20 = VAR_10 |
        VAR_9;
    VAR_17 =
        FUNC_4(VAR_19,
           VAR_8,
           VAR_20);
   }

   if (VAR_17) {
    FUNC_7
      (VAR_15->netdev,
       "failed to set wepflags=0x%04x, result=%d\n",
       VAR_20, VAR_17);
    goto failed;
   }
  }


  if ((VAR_18->stripfcs.status ==
       VAR_11) &&
      (VAR_18->stripfcs.data == 128)) {
   VAR_19->sniff_fcs = 0;
  } else {
   VAR_19->sniff_fcs = 1;
  }


  if (VAR_18->packet_trunc.status ==
      VAR_11) {
   VAR_19->sniff_truncate = VAR_18->packet_trunc.data;
  } else {
   VAR_19->sniff_truncate = 0;
  }


  VAR_17 = FUNC_2(VAR_19, 0);
  if (VAR_17) {
   FUNC_7
       (VAR_15->netdev,
        "failed to enable port for sniffing, result=%d\n",
        VAR_17);
   goto failed;
  }

  VAR_17 = FUNC_0(VAR_19, VAR_4);
  if (VAR_17) {
   FUNC_7(VAR_15->netdev,
       "failed to enable monitor mode, result=%d\n",
       VAR_17);
   goto failed;
  }

  if (VAR_15->netdev->type == VAR_0)
   FUNC_8(VAR_15->netdev, "monitor mode enabled\n");



  if ((VAR_18->prismheader.status ==
       VAR_11) &&
      (VAR_18->prismheader.data == 128)) {
   VAR_19->sniffhdr = 0;
   VAR_15->netdev->type = VAR_2;
  } else if ((VAR_18->wlanheader.status ==
       VAR_11) &&
      (VAR_18->wlanheader.data == 128)) {
   VAR_19->sniffhdr = 1;
   VAR_15->netdev->type = VAR_2;
  } else {
   VAR_15->netdev->type = VAR_1;
  }

  VAR_18->resultcode.data = VAR_14;
  return 0;
 default:
  VAR_18->resultcode.data = VAR_12;
  return 0;
 }

failed:
 VAR_18->resultcode.data = VAR_13;
 return 0;
}
