
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_instance {int dummy; } ;
struct mmal_msg_context {int dummy; } ;
struct mmal_buffer {struct mmal_msg_context* msg_context; } ;


 scalar_t__ FUNC_0 (struct mmal_msg_context*) ;
 int FUNC_1 (struct mmal_msg_context*) ;
 struct mmal_msg_context* FUNC_2 (struct vchiq_mmal_instance*) ;

int FUNC_3(struct vchiq_mmal_instance *VAR_0,
     struct mmal_buffer *VAR_1)
{
 struct mmal_msg_context *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_2))
  return (FUNC_1(VAR_2));

 VAR_1->msg_context = VAR_2;
 return 0;
}
