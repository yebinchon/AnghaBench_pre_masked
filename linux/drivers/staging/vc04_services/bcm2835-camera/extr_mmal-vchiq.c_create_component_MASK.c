
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vchiq_mmal_instance {int dummy; } ;
struct vchiq_mmal_component {int clocks; int outputs; int inputs; int handle; } ;
struct vchi_held_msg {int dummy; } ;
struct TYPE_7__ {int status; int clock_num; int output_num; int input_num; int component_handle; } ;
struct TYPE_5__ {int name; scalar_t__ client_component; } ;
struct TYPE_8__ {TYPE_3__ component_create_reply; TYPE_1__ component_create; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct mmal_msg {TYPE_4__ u; TYPE_2__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct vchiq_mmal_instance*,struct mmal_msg*,int,struct mmal_msg**,struct vchi_held_msg*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (struct vchi_held_msg*) ;

__attribute__((used)) static int FUNC_4(struct vchiq_mmal_instance *VAR_3,
       struct vchiq_mmal_component *VAR_4,
       const char *VAR_5)
{
 int VAR_6;
 struct mmal_msg VAR_7;
 struct mmal_msg *VAR_8;
 struct vchi_held_msg VAR_9;


 VAR_7.h.type = VAR_2;
 VAR_7.u.component_create.client_component = (u32)(unsigned long)VAR_4;
 FUNC_2(VAR_7.u.component_create.name, VAR_5,
  sizeof(VAR_7.u.component_create.name));

 VAR_6 = FUNC_1(VAR_3, &VAR_7,
     sizeof(VAR_7.u.component_create),
     &VAR_8, &VAR_9);
 if (VAR_6)
  return VAR_6;

 if (VAR_8->h.type != VAR_7.h.type) {

  VAR_6 = -VAR_0;
  goto release_msg;
 }

 VAR_6 = -VAR_8->u.component_create_reply.status;
 if (VAR_6 != VAR_1)
  goto release_msg;


 VAR_4->handle = VAR_8->u.component_create_reply.component_handle;
 VAR_4->inputs = VAR_8->u.component_create_reply.input_num;
 VAR_4->outputs = VAR_8->u.component_create_reply.output_num;
 VAR_4->clocks = VAR_8->u.component_create_reply.clock_num;

 FUNC_0("Component handle:0x%x in:%d out:%d clock:%d\n",
   VAR_4->handle,
   VAR_4->inputs, VAR_4->outputs, VAR_4->clocks);

release_msg:
 FUNC_3(&VAR_9);

 return VAR_6;
}
