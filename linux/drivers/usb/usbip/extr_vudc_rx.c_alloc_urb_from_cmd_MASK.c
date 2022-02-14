
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ direction; } ;
struct TYPE_4__ {int setup; int number_of_packets; } ;
struct TYPE_5__ {TYPE_1__ cmd_submit; } ;
struct usbip_header {TYPE_3__ base; TYPE_2__ u; } ;
struct urb {scalar_t__ transfer_buffer_length; int * transfer_buffer; int pipe; int setup_packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int * FUNC_2 (scalar_t__,int ) ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct usbip_header*,struct urb*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct urb **VAR_7,
         struct usbip_header *VAR_8, u8 VAR_9)
{
 struct urb *VAR_10;

 if (VAR_9 == VAR_6)
  VAR_10 = FUNC_3(VAR_8->u.cmd_submit.number_of_packets,
       VAR_1);
 else
  VAR_10 = FUNC_3(0, VAR_1);

 if (!VAR_10)
  goto err;

 FUNC_5(VAR_8, VAR_10, VAR_2, 0);

 if (VAR_10->transfer_buffer_length > 0) {
  VAR_10->transfer_buffer = FUNC_2(VAR_10->transfer_buffer_length,
   VAR_1);
  if (!VAR_10->transfer_buffer)
   goto free_urb;
 }

 VAR_10->setup_packet = FUNC_1(&VAR_8->u.cmd_submit.setup, 8,
       VAR_1);
 if (!VAR_10->setup_packet)
  goto free_buffer;





 VAR_10->pipe |= VAR_8->base.direction == VAR_3 ?
   VAR_4 : VAR_5;

 *VAR_7 = VAR_10;
 return 0;

free_buffer:
 FUNC_0(VAR_10->transfer_buffer);
 VAR_10->transfer_buffer = ((void*)0);
free_urb:
 FUNC_4(VAR_10);
err:
 return -VAR_0;
}
