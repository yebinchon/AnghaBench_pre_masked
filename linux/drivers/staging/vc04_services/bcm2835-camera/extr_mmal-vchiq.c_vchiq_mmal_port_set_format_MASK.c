
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_port {int dummy; } ;
struct vchiq_mmal_instance {int vchiq_mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vchiq_mmal_instance*,struct vchiq_mmal_port*) ;
 int FUNC_3 (struct vchiq_mmal_instance*,struct vchiq_mmal_port*) ;

int FUNC_4(struct vchiq_mmal_instance *VAR_1,
          struct vchiq_mmal_port *VAR_2)
{
 int VAR_3;

 if (FUNC_0(&VAR_1->vchiq_mutex))
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3)
  goto release_unlock;


 VAR_3 = FUNC_2(VAR_1, VAR_2);

release_unlock:
 FUNC_1(&VAR_1->vchiq_mutex);

 return VAR_3;
}
