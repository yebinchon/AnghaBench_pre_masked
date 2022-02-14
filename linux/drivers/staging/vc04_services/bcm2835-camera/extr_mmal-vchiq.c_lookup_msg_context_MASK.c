
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_instance {int context_map; } ;
struct mmal_msg_context {int dummy; } ;


 struct mmal_msg_context* FUNC_0 (int *,int) ;

__attribute__((used)) static struct mmal_msg_context *
FUNC_1(struct vchiq_mmal_instance *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->context_map, VAR_1);
}
