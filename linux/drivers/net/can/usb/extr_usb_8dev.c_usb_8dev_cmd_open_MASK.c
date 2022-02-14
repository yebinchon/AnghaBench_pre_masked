
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct can_bittiming {scalar_t__ brp; scalar_t__ sjw; scalar_t__ phase_seg2; scalar_t__ phase_seg1; scalar_t__ prop_seg; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct usb_8dev_priv {TYPE_1__ can; } ;
struct usb_8dev_cmd_msg {scalar_t__* data; int opt1; int command; } ;
typedef int outmsg ;
typedef int beflags ;
typedef int bebrp ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,int *,int) ;
 int FUNC_3 (struct usb_8dev_cmd_msg*,int ,int) ;
 int FUNC_4 (struct usb_8dev_priv*,struct usb_8dev_cmd_msg*,struct usb_8dev_cmd_msg*) ;

__attribute__((used)) static int FUNC_5(struct usb_8dev_priv *VAR_9)
{
 struct can_bittiming *VAR_10 = &VAR_9->can.bittiming;
 struct usb_8dev_cmd_msg VAR_11;
 struct usb_8dev_cmd_msg VAR_12;
 u32 VAR_13 = VAR_9->can.ctrlmode;
 u32 VAR_14 = VAR_8;
 __be32 VAR_15;
 __be16 VAR_16;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.command = VAR_6;
 VAR_11.opt1 = VAR_3;
 VAR_11.data[0] = VAR_10->prop_seg + VAR_10->phase_seg1;
 VAR_11.data[1] = VAR_10->phase_seg2;
 VAR_11.data[2] = VAR_10->sjw;


 VAR_16 = FUNC_0((u16)VAR_10->brp);
 FUNC_2(&VAR_11.data[3], &VAR_16, sizeof(VAR_16));


 if (VAR_13 & VAR_1)
  VAR_14 |= VAR_5;
 if (VAR_13 & VAR_0)
  VAR_14 |= VAR_7;
 if (VAR_13 & VAR_2)
  VAR_14 |= VAR_4;

 VAR_15 = FUNC_1(VAR_14);
 FUNC_2(&VAR_11.data[5], &VAR_15, sizeof(VAR_15));

 return FUNC_4(VAR_9, &VAR_11, &VAR_12);
}
