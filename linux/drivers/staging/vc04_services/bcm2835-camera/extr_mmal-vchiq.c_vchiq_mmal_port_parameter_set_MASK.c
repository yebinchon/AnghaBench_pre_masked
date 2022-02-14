
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vchiq_mmal_port {int dummy; } ;
struct vchiq_mmal_instance {int vchiq_mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vchiq_mmal_instance*,struct vchiq_mmal_port*,int ,void*,int ) ;

int FUNC_3(struct vchiq_mmal_instance *VAR_1,
      struct vchiq_mmal_port *VAR_2,
      u32 VAR_3, void *VAR_4, u32 VAR_5)
{
 int VAR_6;

 if (FUNC_0(&VAR_1->vchiq_mutex))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_1(&VAR_1->vchiq_mutex);

 return VAR_6;
}
