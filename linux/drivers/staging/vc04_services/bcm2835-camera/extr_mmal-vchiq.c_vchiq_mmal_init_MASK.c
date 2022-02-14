
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_mmal_instance {int bulk_scratch; int bulk_wq; int handle; int context_map; int context_map_lock; int vchiq_mutex; } ;
struct service_creation {struct vchiq_mmal_instance* callback_param; int callback; int service_id; int version; } ;
struct mmal_port {int dummy; } ;
struct mmal_msg_header {int dummy; } ;
struct mmal_msg {int dummy; } ;
typedef int VCHI_INSTANCE_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct vchiq_mmal_instance*) ;
 struct vchiq_mmal_instance* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct service_creation*,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

int FUNC_16(struct vchiq_mmal_instance **VAR_11)
{
 int VAR_12;
 struct vchiq_mmal_instance *VAR_13;
 static VCHI_INSTANCE_T VAR_14;
 struct service_creation VAR_15 = {
  .version = FUNC_1(VAR_8, VAR_6),
  .service_id = VAR_7,
  .callback = VAR_10,
  .callback_param = ((void*)0),
 };






 FUNC_0(sizeof(struct mmal_msg_header) != 24);


 FUNC_0(sizeof(struct mmal_msg) > VAR_4);


 FUNC_0(sizeof(struct mmal_port) != 64);


 VAR_12 = FUNC_10(&VAR_14);
 if (VAR_12) {
  FUNC_8("Failed to initialise VCHI instance (status=%d)\n",
         VAR_12);
  return -VAR_0;
 }

 VAR_12 = FUNC_9(VAR_14);
 if (VAR_12) {
  FUNC_8("Failed to connect VCHI instance (status=%d)\n", VAR_12);
  return -VAR_0;
 }

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_3);

 if (!VAR_13)
  return -VAR_2;

 FUNC_7(&VAR_13->vchiq_mutex);

 VAR_13->bulk_scratch = FUNC_15(VAR_5);

 FUNC_7(&VAR_13->context_map_lock);
 FUNC_4(&VAR_13->context_map, 1);

 VAR_15.callback_param = VAR_13;

 VAR_13->bulk_wq = FUNC_2("mmal-vchiq",
          VAR_9);
 if (!VAR_13->bulk_wq)
  goto err_free;

 VAR_12 = FUNC_12(VAR_14, &VAR_15, &VAR_13->handle);
 if (VAR_12) {
  FUNC_8("Failed to open VCHI service connection (status=%d)\n",
         VAR_12);
  goto err_close_services;
 }

 FUNC_13(VAR_13->handle);

 *VAR_11 = VAR_13;

 return 0;

err_close_services:
 FUNC_11(VAR_13->handle);
 FUNC_3(VAR_13->bulk_wq);
err_free:
 FUNC_14(VAR_13->bulk_scratch);
 FUNC_5(VAR_13);
 return -VAR_1;
}
