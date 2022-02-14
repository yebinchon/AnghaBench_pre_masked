
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fourcc; } ;
struct vchiq_service {int client_id; scalar_t__ srvstate; int ref_count; TYPE_2__* state; int remove_event; int localport; int version_min; int version; TYPE_1__ base; } ;
struct vchiq_open_payload {int member_1; int member_3; int member_2; int member_0; } ;
typedef int payload ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct vchiq_service*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ,int ,struct vchiq_open_payload*,int,int ) ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (struct vchiq_service*) ;
 int FUNC_5 (struct vchiq_service*) ;
 scalar_t__ FUNC_6 (int *) ;

VCHIQ_STATUS_T
FUNC_7(struct vchiq_service *VAR_12, int VAR_13)
{
 struct vchiq_open_payload VAR_14 = {
  VAR_12->base.fourcc,
  VAR_13,
  VAR_12->version,
  VAR_12->version_min
 };
 VCHIQ_STATUS_T VAR_15 = VAR_7;

 VAR_12->client_id = VAR_13;
 FUNC_5(VAR_12);
 VAR_15 = FUNC_2(VAR_12->state,
          ((void*)0),
          FUNC_0(VAR_2,
           VAR_12->localport,
           0),
          VAR_9,
          &VAR_14,
          sizeof(VAR_14),
          VAR_0);
 if (VAR_15 == VAR_7) {

  if (FUNC_6(&VAR_12->remove_event)) {
   VAR_15 = VAR_3;
   FUNC_4(VAR_12);
  } else if ((VAR_12->srvstate != VAR_5) &&
   (VAR_12->srvstate != VAR_6)) {
   if (VAR_12->srvstate != VAR_4)
    FUNC_3(VAR_11,
     "%d: osi - srvstate = %s (ref %d)",
     VAR_12->state->id,
     VAR_10[VAR_12->srvstate],
     VAR_12->ref_count);
   VAR_15 = VAR_1;
   FUNC_1(VAR_12, VAR_8);
   FUNC_4(VAR_12);
  }
 }
 return VAR_15;
}
