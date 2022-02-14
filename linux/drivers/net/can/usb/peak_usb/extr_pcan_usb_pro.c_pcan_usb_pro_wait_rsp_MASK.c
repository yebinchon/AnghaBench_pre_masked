
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; } ;
union pcan_usb_pro_rec {size_t data_type; TYPE_2__ bus_act; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct peak_usb_device {int state; int netdev; int udev; } ;
struct TYPE_3__ {int* rec_buffer; scalar_t__* rec_cnt; } ;
struct pcan_usb_pro_msg {TYPE_1__ u; int rec_buffer_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int*,int) ;
 int* FUNC_3 (struct pcan_usb_pro_msg*,int*,int) ;
 int * VAR_7 ;
 int FUNC_4 (int ,int ,int*,int ,int*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct peak_usb_device *VAR_8,
     struct pcan_usb_pro_msg *VAR_9)
{
 u8 VAR_10, VAR_11;
 int VAR_12;
 int VAR_13, VAR_14 = 0;


 if (!(VAR_8->state & VAR_6))
  return 0;

 VAR_10 = VAR_9->u.rec_buffer[4];
 VAR_11 = VAR_9->u.rec_buffer[5];

 *VAR_9->u.rec_cnt = 0;
 for (VAR_13 = 0; !VAR_14 && VAR_13 < VAR_5; VAR_13++) {
  struct pcan_usb_pro_msg VAR_15;
  union pcan_usb_pro_rec *VAR_16;
  u32 VAR_17, VAR_18;
  u16 VAR_19;
  u8 *VAR_20;

  VAR_14 = FUNC_4(VAR_8->udev,
   FUNC_5(VAR_8->udev, VAR_3),
   VAR_9->u.rec_buffer, VAR_9->rec_buffer_len,
   &VAR_12, VAR_2);
  if (VAR_14) {
   FUNC_1(VAR_8->netdev, "waiting rsp error %d\n", VAR_14);
   break;
  }

  if (VAR_12 == 0)
   continue;

  VAR_14 = -VAR_0;
  if (VAR_12 < VAR_4) {
   FUNC_1(VAR_8->netdev,
       "got abnormal too small rsp (len=%d)\n",
       VAR_12);
   break;
  }

  VAR_20 = FUNC_3(&VAR_15, VAR_9->u.rec_buffer,
   VAR_12);

  VAR_18 = FUNC_0(*VAR_15.u.rec_cnt);


  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
   VAR_16 = (union pcan_usb_pro_rec *)VAR_20;
   VAR_19 = VAR_7[VAR_16->data_type];
   if (!VAR_19) {
    FUNC_1(VAR_8->netdev,
        "got unprocessed record in msg\n");
    FUNC_2("rcvd rsp msg", VAR_9->u.rec_buffer,
           VAR_12);
    break;
   }


   if (VAR_16->data_type != VAR_10)
    FUNC_1(VAR_8->netdev,
        "got unwanted rsp %xh: ignored\n",
        VAR_16->data_type);


   else if ((VAR_11 != 0xff) && (VAR_16->bus_act.channel != VAR_11))

    FUNC_1(VAR_8->netdev,
     "got rsp %xh but on chan%u: ignored\n",
     VAR_10, VAR_16->bus_act.channel);


   else
    return 0;


   VAR_20 += VAR_19;
  }
 }

 return (VAR_13 >= VAR_5) ? -VAR_1 : VAR_14;
}
