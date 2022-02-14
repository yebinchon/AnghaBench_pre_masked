
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int actual_length; int transfer_buffer; } ;
struct tty_struct {int dummy; } ;
struct hso_serial {scalar_t__* rx_urb_filled; TYPE_2__* parent; int port; } ;
struct TYPE_4__ {TYPE_1__* usb; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,char*) ;
 size_t FUNC_2 (struct hso_serial*,struct urb*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct tty_struct*) ;
 struct tty_struct* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_9(struct urb *VAR_0, struct hso_serial *VAR_1)
{
 struct tty_struct *VAR_2;
 int VAR_3;


 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
  FUNC_1(0x1, "serial = NULL\n");
  return -2;
 }

 VAR_2 = FUNC_7(&VAR_1->port);

 if (VAR_2 && FUNC_8(VAR_2)) {
  FUNC_6(VAR_2);
  return -1;
 }


 FUNC_1(0x1, "data to push to tty\n");
 VAR_3 = FUNC_3(&VAR_1->port, VAR_0->actual_length);
 if (VAR_3 >= VAR_0->actual_length) {
  FUNC_5(&VAR_1->port, VAR_0->transfer_buffer,
           VAR_0->actual_length);
  FUNC_4(&VAR_1->port);
 } else {
  FUNC_0(&VAR_1->parent->usb->dev,
    "dropping data, %d bytes lost\n", VAR_0->actual_length);
 }

 FUNC_6(VAR_2);

 VAR_1->rx_urb_filled[FUNC_2(VAR_1, VAR_0)] = 0;

 return 0;
}
