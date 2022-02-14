
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnt_rcb {int in_use; int skb; struct urb* urb; } ;
struct vnt_private {TYPE_1__* usb; } ;
struct urb {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct urb*,TYPE_1__*,int ,int ,int ,int ,struct vnt_rcb*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct urb*,int ) ;
 int VAR_3 ;

int FUNC_6(struct vnt_private *VAR_4, struct vnt_rcb *VAR_5)
{
 int VAR_6 = 0;
 struct urb *VAR_7 = VAR_5->urb;

 if (!VAR_5->skb) {
  FUNC_0(&VAR_4->usb->dev, "rcb->skb is null\n");
  VAR_6 = -VAR_0;
  goto end;
 }

 FUNC_3(VAR_7,
     VAR_4->usb,
     FUNC_4(VAR_4->usb, 2),
     FUNC_1(VAR_5->skb, FUNC_2(VAR_5->skb)),
     VAR_2,
     VAR_3,
     VAR_5);

 VAR_6 = FUNC_5(VAR_7, VAR_1);
 if (VAR_6) {
  FUNC_0(&VAR_4->usb->dev, "Submit Rx URB failed %d\n", VAR_6);
  goto end;
 }

 VAR_5->in_use = 1;

end:
 return VAR_6;
}
