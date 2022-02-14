
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_instance {int context_map; int bulk_scratch; int bulk_wq; int vchiq_mutex; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vchiq_mmal_instance*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct vchiq_mmal_instance *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2)
  return -VAR_1;

 if (FUNC_4(&VAR_2->vchiq_mutex))
  return -VAR_0;

 FUNC_8(VAR_2->handle);

 VAR_3 = FUNC_7(VAR_2->handle);
 if (VAR_3 != 0)
  FUNC_6("mmal-vchiq: VCHIQ close failed\n");

 FUNC_5(&VAR_2->vchiq_mutex);

 FUNC_1(VAR_2->bulk_wq);
 FUNC_0(VAR_2->bulk_wq);

 FUNC_9(VAR_2->bulk_scratch);

 FUNC_2(&VAR_2->context_map);

 FUNC_3(VAR_2);

 return VAR_3;
}
