
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchiq_service_quota {int slot_use_count; int slot_quota; int message_quota; int message_use_count; int quota_event; } ;
struct vchiq_service {int auto_close; size_t localport; int sync; int trace; int srvstate; TYPE_1__* state; } ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_OPTION_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_2__ {int default_slot_quota; int default_message_quota; struct vchiq_service_quota* service_quotas; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct vchiq_service* FUNC_1 (int ) ;
 int FUNC_2 (struct vchiq_service*) ;

VCHIQ_STATUS_T
FUNC_3(VCHIQ_SERVICE_HANDLE_T VAR_4,
 VCHIQ_SERVICE_OPTION_T VAR_5, int VAR_6)
{
 struct vchiq_service *VAR_7 = FUNC_1(VAR_4);
 VCHIQ_STATUS_T VAR_8 = VAR_0;

 if (VAR_7) {
  switch (VAR_5) {
  case 132:
   VAR_7->auto_close = VAR_6;
   VAR_8 = VAR_3;
   break;

  case 130: {
   struct vchiq_service_quota *VAR_9 =
    &VAR_7->state->service_quotas[
     VAR_7->localport];
   if (VAR_6 == 0)
    VAR_6 = VAR_7->state->default_slot_quota;
   if ((VAR_6 >= VAR_9->slot_use_count) &&
     (VAR_6 < (unsigned short)~0)) {
    VAR_9->slot_quota = VAR_6;
    if ((VAR_6 >= VAR_9->slot_use_count) &&
     (VAR_9->message_quota >=
      VAR_9->message_use_count)) {


     FUNC_0(&VAR_9->quota_event);
    }
    VAR_8 = VAR_3;
   }
  } break;

  case 131: {
   struct vchiq_service_quota *VAR_10 =
    &VAR_7->state->service_quotas[
     VAR_7->localport];
   if (VAR_6 == 0)
    VAR_6 = VAR_7->state->default_message_quota;
   if ((VAR_6 >= VAR_10->message_use_count) &&
     (VAR_6 < (unsigned short)~0)) {
    VAR_10->message_quota = VAR_6;
    if ((VAR_6 >=
     VAR_10->message_use_count) &&
     (VAR_10->slot_quota >=
     VAR_10->slot_use_count))


     FUNC_0(&VAR_10->quota_event);
    VAR_8 = VAR_3;
   }
  } break;

  case 129:
   if ((VAR_7->srvstate == VAR_1) ||
    (VAR_7->srvstate ==
    VAR_2)) {
    VAR_7->sync = VAR_6;
    VAR_8 = VAR_3;
   }
   break;

  case 128:
   VAR_7->trace = VAR_6;
   VAR_8 = VAR_3;
   break;

  default:
   break;
  }
  FUNC_2(VAR_7);
 }

 return VAR_8;
}
