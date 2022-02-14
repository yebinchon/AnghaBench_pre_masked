
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vchiq_mmal_instance {int dummy; } ;
struct vchiq_mmal_component {int handle; } ;
struct vchi_held_msg {int dummy; } ;
struct TYPE_5__ {int status; } ;
struct TYPE_7__ {int component_handle; } ;
struct TYPE_8__ {TYPE_1__ component_destroy_reply; TYPE_3__ component_destroy; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct mmal_msg {TYPE_4__ u; TYPE_2__ h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vchiq_mmal_instance*,struct mmal_msg*,int,struct mmal_msg**,struct vchi_held_msg*) ;
 int FUNC_1 (struct vchi_held_msg*) ;

__attribute__((used)) static int FUNC_2(struct vchiq_mmal_instance *VAR_2,
        struct vchiq_mmal_component *VAR_3)
{
 int VAR_4;
 struct mmal_msg VAR_5;
 struct mmal_msg *VAR_6;
 struct vchi_held_msg VAR_7;

 VAR_5.h.type = VAR_1;
 VAR_5.u.component_destroy.component_handle = VAR_3->handle;

 VAR_4 = FUNC_0(VAR_2, &VAR_5,
     sizeof(VAR_5.u.component_destroy),
     &VAR_6, &VAR_7);
 if (VAR_4)
  return VAR_4;

 if (VAR_6->h.type != VAR_5.h.type) {

  VAR_4 = -VAR_0;
  goto release_msg;
 }

 VAR_4 = -VAR_6->u.component_destroy_reply.status;

release_msg:

 FUNC_1(&VAR_7);

 return VAR_4;
}
