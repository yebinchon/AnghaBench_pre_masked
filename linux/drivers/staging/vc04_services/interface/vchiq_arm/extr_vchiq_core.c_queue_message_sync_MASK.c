
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vchiq_state {int sync_mutex; TYPE_2__* remote; int slot_mutex; int id; int sync_release_event; struct vchiq_shared_state* local; } ;
struct vchiq_shared_state {int slot_sync; int sync_release; } ;
struct TYPE_3__ {int fourcc; } ;
struct vchiq_service {TYPE_1__ base; } ;
struct vchiq_header {int msgid; int size; int data; } ;
typedef scalar_t__ ssize_t ;
typedef int VCHIQ_STATUS_T ;
struct TYPE_4__ {int sync_trigger; } ;


 scalar_t__ FUNC_0 (struct vchiq_state*,int ) ;
 scalar_t__ FUNC_1 (struct vchiq_service*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char,char,char,char) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_6 ;
 int FUNC_7 (struct vchiq_service*,int ,int) ;
 int FUNC_8 (struct vchiq_service*,int ) ;
 int FUNC_9 (struct vchiq_state*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (ssize_t (*) (void*,void*,size_t,size_t),void*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (size_t,size_t) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 () ;
 int VAR_11 ;
 int FUNC_18 (char*,int ,int ,int ) ;
 int FUNC_19 (int ,char*,int ,int) ;
 int FUNC_20 (scalar_t__,char*,int ,int ,struct vchiq_header*,int,int ,int ) ;
 int FUNC_21 (scalar_t__,char*,int ,scalar_t__,int ,int ,int ,int) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_22(struct vchiq_state *VAR_13, struct vchiq_service *VAR_14,
     int VAR_15,
     ssize_t (*VAR_16)(void *VAR_17, void *VAR_18,
         size_t VAR_19, size_t VAR_20),
     void *VAR_21, int VAR_22, int VAR_23)
{
 struct vchiq_shared_state *VAR_24;
 struct vchiq_header *VAR_25;
 ssize_t VAR_26;

 VAR_24 = VAR_13->local;

 if (FUNC_6(VAR_15) != VAR_5 &&
     FUNC_13(&VAR_13->sync_mutex))
  return VAR_6;

 FUNC_16(&VAR_13->sync_release_event, &VAR_24->sync_release);

 FUNC_17();

 VAR_25 = (struct vchiq_header *)FUNC_0(VAR_13,
  VAR_24->slot_sync);

 {
  int VAR_27 = VAR_25->msgid;

  if (VAR_27 != VAR_3)
   FUNC_19(VAR_11,
    "%d: qms - msgid %x, not PADDING",
    VAR_13->id, VAR_27);
 }

 FUNC_20(VAR_12,
         "%d: qms %s@%pK,%x (%d->%d)", VAR_13->id,
         FUNC_12(FUNC_6(VAR_15)),
         VAR_25, VAR_22, FUNC_5(VAR_15),
         FUNC_4(VAR_15));

 VAR_26 =
  FUNC_10(VAR_16, VAR_21,
      VAR_25->data, VAR_22);

 if (VAR_26 < 0) {
  FUNC_14(&VAR_13->slot_mutex);
  FUNC_8(VAR_14,
     VAR_10);
  return VAR_0;
 }

 if (VAR_14) {
  if (FUNC_1(VAR_14,
         VAR_1))
   FUNC_18("Sent", 0,
        VAR_25->data,
        FUNC_11((size_t)16,
            (size_t)VAR_26));

  FUNC_8(VAR_14, VAR_9);
  FUNC_7(VAR_14, VAR_8, VAR_22);
 } else {
  FUNC_9(VAR_13, VAR_9);
 }

 VAR_25->size = VAR_22;
 VAR_25->msgid = VAR_15;

 if (VAR_12 >= VAR_2) {
  int VAR_28;

  VAR_28 = VAR_14
   ? VAR_14->base.fourcc
   : FUNC_3('?', '?', '?', '?');

  FUNC_21(VAR_12,
   "Sent Sync Msg %s(%u) to %c%c%c%c s:%u d:%d len:%d",
   FUNC_12(FUNC_6(VAR_15)),
   FUNC_6(VAR_15),
   FUNC_2(VAR_28),
   FUNC_5(VAR_15),
   FUNC_4(VAR_15),
   VAR_22);
 }

 FUNC_15(&VAR_13->remote->sync_trigger);

 if (FUNC_6(VAR_15) != VAR_4)
  FUNC_14(&VAR_13->sync_mutex);

 return VAR_7;
}
