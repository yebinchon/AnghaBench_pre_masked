
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vchiq_mmal_instance {int vchiq_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct vchiq_mmal_instance*,int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct vchiq_mmal_instance *VAR_1,
         u32 *VAR_2, u32 *VAR_3)
{
 int VAR_4;

 if (FUNC_1(&VAR_1->vchiq_mutex))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2(&VAR_1->vchiq_mutex);

 return VAR_4;
}
