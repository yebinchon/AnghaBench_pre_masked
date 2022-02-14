
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_instance {int context_map_lock; int context_map; } ;
struct mmal_msg_context {int handle; struct vchiq_mmal_instance* instance; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mmal_msg_context*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mmal_msg_context *VAR_0)
{
 struct vchiq_mmal_instance *VAR_1 = VAR_0->instance;

 FUNC_2(&VAR_1->context_map_lock);
 FUNC_0(&VAR_1->context_map, VAR_0->handle);
 FUNC_3(&VAR_1->context_map_lock);
 FUNC_1(VAR_0);
}
