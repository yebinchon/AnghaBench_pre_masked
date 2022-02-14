
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vchiq_mmal_instance {int dummy; } ;
struct TYPE_13__ {unsigned long buffer_used; int buffer_to_host_work; int pts; int dts; TYPE_1__* buffer; } ;
struct TYPE_14__ {TYPE_6__ bulk; } ;
struct mmal_msg_context {TYPE_7__ u; TYPE_5__* instance; } ;
struct TYPE_9__ {unsigned long length; int pts; int dts; } ;
struct TYPE_10__ {TYPE_2__ buffer_header; } ;
struct TYPE_11__ {TYPE_3__ buffer_from_host; } ;
struct mmal_msg {TYPE_4__ u; } ;
struct TYPE_12__ {int bulk_wq; } ;
struct TYPE_8__ {unsigned long buffer_size; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct vchiq_mmal_instance *VAR_1,
   struct mmal_msg *VAR_2,
   struct mmal_msg_context *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_2->u.buffer_from_host.buffer_header.length;

 if (!VAR_3->u.bulk.buffer) {
  FUNC_0("bulk.buffer not configured - error in buffer_from_host\n");
  return -VAR_0;
 }


 if (VAR_4 > VAR_3->u.bulk.buffer->buffer_size) {
  VAR_4 = VAR_3->u.bulk.buffer->buffer_size;
  FUNC_1("short read as not enough receive buffer space\n");



 }


 VAR_3->u.bulk.buffer_used = VAR_4;
 VAR_3->u.bulk.dts = VAR_2->u.buffer_from_host.buffer_header.dts;
 VAR_3->u.bulk.pts = VAR_2->u.buffer_from_host.buffer_header.pts;

 FUNC_2(VAR_3->instance->bulk_wq,
     &VAR_3->u.bulk.buffer_to_host_work);

 return 0;
}
