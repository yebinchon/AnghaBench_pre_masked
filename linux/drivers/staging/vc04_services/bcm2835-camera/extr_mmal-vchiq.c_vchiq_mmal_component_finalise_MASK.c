
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_instance {int vchiq_mutex; } ;
struct vchiq_mmal_component {scalar_t__ enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct vchiq_mmal_instance*,struct vchiq_mmal_component*) ;
 int FUNC_1 (struct vchiq_mmal_instance*,struct vchiq_mmal_component*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct vchiq_mmal_instance *VAR_1,
      struct vchiq_mmal_component *VAR_2)
{
 int VAR_3;

 if (FUNC_2(&VAR_1->vchiq_mutex))
  return -VAR_0;

 if (VAR_2->enabled)
  VAR_3 = FUNC_1(VAR_1, VAR_2);

 VAR_3 = FUNC_0(VAR_1, VAR_2);

 FUNC_3(&VAR_1->vchiq_mutex);

 return VAR_3;
}
