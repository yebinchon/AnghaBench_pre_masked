
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct TYPE_2__ {int len; } ;
struct carl9170_cmd {TYPE_1__ hdr; } ;
struct ar9170 {int tx_cmd; int udev; scalar_t__ usb_ep_cmd_is_bulk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ar9170*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct carl9170_cmd*) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ,int ,struct carl9170_cmd*,int,int ,struct ar9170*) ;
 int FUNC_7 (struct urb*,int ,int ,struct carl9170_cmd*,int,int ,struct ar9170*,int) ;
 int FUNC_8 (struct urb*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(struct ar9170 *VAR_8, struct carl9170_cmd *VAR_9,
   const bool VAR_10)
{
 struct urb *VAR_11;
 int VAR_12 = 0;

 if (!FUNC_0(VAR_8)) {
  VAR_12 = -VAR_4;
  goto err_free;
 }

 if (FUNC_1(VAR_9->hdr.len > VAR_1 - 4)) {
  VAR_12 = -VAR_2;
  goto err_free;
 }

 VAR_11 = FUNC_4(0, VAR_5);
 if (!VAR_11) {
  VAR_12 = -VAR_3;
  goto err_free;
 }

 if (VAR_8->usb_ep_cmd_is_bulk)
  FUNC_6(VAR_11, VAR_8->udev,
      FUNC_9(VAR_8->udev, VAR_0),
      VAR_9, VAR_9->hdr.len + 4,
      VAR_7, VAR_8);
 else
  FUNC_7(VAR_11, VAR_8->udev,
     FUNC_10(VAR_8->udev, VAR_0),
     VAR_9, VAR_9->hdr.len + 4,
     VAR_7, VAR_8, 1);

 if (VAR_10)
  VAR_11->transfer_flags |= VAR_6;

 FUNC_5(VAR_11, &VAR_8->tx_cmd);
 FUNC_8(VAR_11);

 return FUNC_2(VAR_8);

err_free:
 if (VAR_10)
  FUNC_3(VAR_9);

 return VAR_12;
}
