
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usb_hub {int hdev; TYPE_1__** ports; } ;
struct usb_device {int rx_lanes; int tx_lanes; int speed; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int *,char*,char*,unsigned int) ;
 int FUNC_3 (struct usb_hub*,int,int ,int*,int*,int*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct usb_hub*) ;
 int FUNC_7 (struct usb_hub*,int,int*,int*) ;
 scalar_t__ FUNC_8 (struct usb_hub*,int,int) ;
 int FUNC_9 (unsigned int) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int,int ) ;

__attribute__((used)) static int FUNC_12(struct usb_hub *VAR_21, int VAR_22,
   struct usb_device *VAR_23, unsigned int VAR_24, bool VAR_25)
{
 int VAR_26, VAR_27;
 u16 VAR_28;
 u16 VAR_29;
 u32 VAR_30 = 0;

 for (VAR_26 = 0;
   VAR_26 < VAR_5;
   VAR_26 += VAR_24) {

  FUNC_9(VAR_24);


  if (FUNC_5(VAR_21->hdev))
   VAR_27 = FUNC_3(VAR_21, VAR_22,
        VAR_3,
        &VAR_28, &VAR_29,
        &VAR_30);
  else
   VAR_27 = FUNC_7(VAR_21, VAR_22, &VAR_28,
           &VAR_29);
  if (VAR_27 < 0)
   return VAR_27;
  if (!(VAR_28 & VAR_14) &&
      (VAR_28 & VAR_9))
   break;


  if (VAR_26 >= 2 * VAR_6)
   VAR_24 = VAR_4;

  FUNC_2(&VAR_21->ports[VAR_22 - 1]->dev,
    "not %sreset yet, waiting %dms\n",
    VAR_25 ? "warm " : "", VAR_24);
 }

 if ((VAR_28 & VAR_14))
  return -VAR_1;

 if (FUNC_8(VAR_21, VAR_22, VAR_28))
  return -VAR_2;


 if (!(VAR_28 & VAR_9))
  return -VAR_2;





 if (!FUNC_4(VAR_21->hdev) &&
     (VAR_29 & VAR_10)) {
  FUNC_11(VAR_21->hdev, VAR_22,
           VAR_8);
  return -VAR_0;
 }

 if (!(VAR_28 & VAR_11))
  return -VAR_1;

 if (!VAR_23)
  return 0;

 if (FUNC_5(VAR_21->hdev)) {

  VAR_23->rx_lanes = FUNC_0(VAR_30) + 1;
  VAR_23->tx_lanes = FUNC_1(VAR_30) + 1;
 } else {
  VAR_23->rx_lanes = 1;
  VAR_23->tx_lanes = 1;
 }
 if (FUNC_6(VAR_21))
  VAR_23->speed = VAR_20;
 else if (FUNC_5(VAR_21->hdev) &&
   FUNC_10(VAR_21->hdev, VAR_30 &
       VAR_7))
  VAR_23->speed = VAR_19;
 else if (FUNC_4(VAR_21->hdev))
  VAR_23->speed = VAR_18;
 else if (VAR_28 & VAR_12)
  VAR_23->speed = VAR_16;
 else if (VAR_28 & VAR_13)
  VAR_23->speed = VAR_17;
 else
  VAR_23->speed = VAR_15;
 return 0;
}
