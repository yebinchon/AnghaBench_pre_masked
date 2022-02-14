
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uio_info {struct hv_uio_private_data* priv; } ;
struct hv_uio_private_data {struct hv_device* device; } ;
struct hv_device {TYPE_3__* channel; } ;
typedef int s32 ;
struct TYPE_5__ {TYPE_1__* ring_buffer; } ;
struct TYPE_6__ {TYPE_2__ inbound; } ;
struct TYPE_4__ {int interrupt_mask; } ;


 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct uio_info *VAR_0, s32 VAR_1)
{
 struct hv_uio_private_data *VAR_2 = VAR_0->priv;
 struct hv_device *VAR_3 = VAR_2->device;

 VAR_3->channel->inbound.ring_buffer->interrupt_mask = !VAR_1;
 FUNC_0();

 return 0;
}
