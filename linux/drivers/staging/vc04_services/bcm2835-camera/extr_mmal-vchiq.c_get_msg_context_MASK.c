
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_instance {int context_map_lock; int context_map; } ;
struct mmal_msg_context {int handle; struct vchiq_mmal_instance* instance; } ;


 int VAR_0 ;
 struct mmal_msg_context* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mmal_msg_context*,int ,int ,int ) ;
 int FUNC_2 (struct mmal_msg_context*) ;
 struct mmal_msg_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct mmal_msg_context *
FUNC_6(struct vchiq_mmal_instance *VAR_2)
{
 struct mmal_msg_context *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);

 if (!VAR_3)
  return FUNC_0(-VAR_0);





 FUNC_4(&VAR_2->context_map_lock);
 VAR_4 = FUNC_1(&VAR_2->context_map, VAR_3,
      0, 0, VAR_1);
 FUNC_5(&VAR_2->context_map_lock);

 if (VAR_4 < 0) {
  FUNC_2(VAR_3);
  return FUNC_0(VAR_4);
 }

 VAR_3->instance = VAR_2;
 VAR_3->handle = VAR_4;

 return VAR_3;
}
