
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmal_msg_context {int dummy; } ;
struct mmal_buffer {struct mmal_msg_context* msg_context; } ;


 int FUNC_0 (struct mmal_msg_context*) ;

int FUNC_1(struct mmal_buffer *VAR_0)
{
 struct mmal_msg_context *VAR_1 = VAR_0->msg_context;

 if (VAR_1)
  FUNC_0(VAR_1);
 VAR_0->msg_context = ((void*)0);

 return 0;
}
