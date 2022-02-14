
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vchiq_mmal_instance {int dummy; } ;
struct TYPE_7__ {int buffer_used; TYPE_1__* buffer; } ;
struct TYPE_8__ {TYPE_2__ bulk; } ;
struct mmal_msg_context {TYPE_3__ u; } ;
struct TYPE_10__ {int payload_in_message; int short_data; } ;
struct TYPE_9__ {TYPE_5__ buffer_from_host; } ;
struct mmal_msg {TYPE_4__ u; } ;
struct TYPE_6__ {int buffer; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vchiq_mmal_instance *VAR_0,
     struct mmal_msg *VAR_1,
     struct mmal_msg_context *VAR_2)
{
 FUNC_0(VAR_2->u.bulk.buffer->buffer,
        VAR_1->u.buffer_from_host.short_data,
        VAR_1->u.buffer_from_host.payload_in_message);

 VAR_2->u.bulk.buffer_used =
     VAR_1->u.buffer_from_host.payload_in_message;

 return 0;
}
