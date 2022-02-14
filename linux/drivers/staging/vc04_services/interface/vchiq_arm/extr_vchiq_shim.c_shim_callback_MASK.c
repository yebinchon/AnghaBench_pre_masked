
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_header {int dummy; } ;
struct shim_service {int handle; int callback_param; int (* callback ) (int ,int ,void*) ;int queue; } ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_REASON_T ;






 scalar_t__ FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (int ,int ,void*) ;
 int FUNC_4 (int ,int ,void*) ;
 int FUNC_5 (int ,int ,void*) ;
 int FUNC_6 (int ,int ,void*) ;
 int FUNC_7 (int ,int ,void*) ;
 int FUNC_8 (int ,struct vchiq_header*) ;
 int FUNC_9 (int *,struct vchiq_header*) ;

__attribute__((used)) static VCHIQ_STATUS_T FUNC_10(VCHIQ_REASON_T VAR_7,
        struct vchiq_header *VAR_8,
        VCHIQ_SERVICE_HANDLE_T VAR_9,
        void *VAR_10)
{
 struct shim_service *VAR_11 =
  (struct shim_service *)FUNC_0(VAR_9);

 if (!VAR_11->callback)
  goto release;

 switch (VAR_7) {
 case 130:
  FUNC_9(&VAR_11->queue, VAR_8);

  VAR_11->callback(VAR_11->callback_param,
      VAR_5, ((void*)0));

  goto done;

 case 131:
  VAR_11->callback(VAR_11->callback_param,
      VAR_3, VAR_10);
  break;

 case 133:
  VAR_11->callback(VAR_11->callback_param,
      VAR_1, VAR_10);
  break;

 case 129:
  VAR_11->callback(VAR_11->callback_param,
      VAR_6, ((void*)0));
  break;

 case 128:

  break;

 case 132:
  VAR_11->callback(VAR_11->callback_param,
      VAR_4,
      VAR_10);
  break;

 case 134:
  VAR_11->callback(VAR_11->callback_param,
      VAR_2,
      VAR_10);
  break;

 default:
  FUNC_1(1, "not supported\n");
  break;
 }

release:
 FUNC_8(VAR_11->handle, VAR_8);
done:
 return VAR_0;
}
