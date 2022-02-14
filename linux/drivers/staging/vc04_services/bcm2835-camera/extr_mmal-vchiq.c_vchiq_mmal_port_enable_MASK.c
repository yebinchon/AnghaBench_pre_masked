
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vchiq_mmal_buffer_cb ;
struct vchiq_mmal_port {int buffer_cb; scalar_t__ enabled; } ;
struct vchiq_mmal_instance {int vchiq_mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vchiq_mmal_instance*,struct vchiq_mmal_port*) ;

int FUNC_3(struct vchiq_mmal_instance *VAR_1,
      struct vchiq_mmal_port *VAR_2,
      vchiq_mmal_buffer_cb VAR_3)
{
 int VAR_4;

 if (FUNC_0(&VAR_1->vchiq_mutex))
  return -VAR_0;


 if (VAR_2->enabled) {
  VAR_4 = 0;
  goto unlock;
 }

 VAR_2->buffer_cb = VAR_3;

 VAR_4 = FUNC_2(VAR_1, VAR_2);

unlock:
 FUNC_1(&VAR_1->vchiq_mutex);

 return VAR_4;
}
