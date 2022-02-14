
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vchiq_mmal_instance {int handle; } ;
struct vchi_held_msg {int dummy; } ;
struct TYPE_5__ {int cmplt; int msg_len; struct mmal_msg* msg; struct vchi_held_msg msg_handle; } ;
struct TYPE_6__ {TYPE_2__ sync; } ;
struct mmal_msg_context {TYPE_3__ u; } ;
struct TYPE_4__ {int const context; int type; } ;
struct mmal_msg {TYPE_1__ h; } ;
typedef int VCHI_CALLBACK_REASON_T ;


 int FUNC_0 (struct mmal_msg*,int ,char*) ;







 int VAR_0 ;
 int FUNC_1 (struct vchiq_mmal_instance*,struct mmal_msg*,int ) ;
 int FUNC_2 (struct vchiq_mmal_instance*,void*) ;
 int FUNC_3 (struct vchiq_mmal_instance*,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vchiq_mmal_instance*,struct mmal_msg*,int ) ;
 struct mmal_msg_context* FUNC_6 (struct vchiq_mmal_instance*,int const) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct vchi_held_msg*) ;
 int FUNC_9 (int ,void**,int *,int ,struct vchi_held_msg*) ;

__attribute__((used)) static void FUNC_10(void *VAR_1,
        const VCHI_CALLBACK_REASON_T VAR_2,
        void *VAR_3)
{
 struct vchiq_mmal_instance *VAR_4 = VAR_1;
 int VAR_5;
 u32 VAR_6;
 struct mmal_msg *VAR_7;
 struct vchi_held_msg VAR_8;
 struct mmal_msg_context *VAR_9;

 if (!VAR_4) {
  FUNC_7("Message callback passed NULL instance\n");
  return;
 }

 switch (VAR_2) {
 case 129:
  VAR_5 = FUNC_9(VAR_4->handle, (void **)&VAR_7,
           &VAR_6, VAR_0, &VAR_8);
  if (VAR_5) {
   FUNC_7("Unable to dequeue a message (%d)\n", VAR_5);
   break;
  }

  FUNC_0(VAR_7, VAR_6, "<<< reply message");


  switch (VAR_7->h.type) {
  case 134:
   FUNC_8(&VAR_8);
   break;

  case 132:
   FUNC_5(VAR_4, VAR_7, VAR_6);
   FUNC_8(&VAR_8);

   break;

  case 133:
   FUNC_1(VAR_4, VAR_7, VAR_6);
   FUNC_8(&VAR_8);
   break;

  default:

   if (!VAR_7->h.context) {
    FUNC_7("received message context was null!\n");
    FUNC_8(&VAR_8);
    break;
   }

   VAR_9 = FUNC_6(VAR_4,
        VAR_7->h.context);
   if (!VAR_9) {
    FUNC_7("received invalid message context %u!\n",
           VAR_7->h.context);
    FUNC_8(&VAR_8);
    break;
   }


   VAR_9->u.sync.msg_handle = VAR_8;
   VAR_9->u.sync.msg = VAR_7;
   VAR_9->u.sync.msg_len = VAR_6;
   FUNC_4(&VAR_9->u.sync.cmplt);
   break;
  }

  break;

 case 131:
  FUNC_3(VAR_4, VAR_3);
  break;

 case 130:
  FUNC_2(VAR_4, VAR_3);
  break;

 case 128:



  break;

 default:
  FUNC_7("Received unhandled message reason %d\n", VAR_2);
  break;
 }
}
