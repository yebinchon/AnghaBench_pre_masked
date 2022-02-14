
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vchiq_state {int id; int sync_trigger_event; TYPE_1__* remote; struct vchiq_shared_state* local; } ;
struct vchiq_shared_state {int sync_trigger; } ;
struct TYPE_4__ {int fourcc; } ;
struct vchiq_service {unsigned int remoteport; int sync; int srvstate; int remove_event; int peer_version; TYPE_2__ base; } ;
struct vchiq_openack_payload {int version; } ;
struct vchiq_header {int msgid; int size; scalar_t__ data; } ;
struct TYPE_3__ {int slot_sync; } ;


 scalar_t__ FUNC_0 (struct vchiq_state*,int ) ;
 struct vchiq_header* FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char,char,char,char) ;
 int VAR_1 ;

 unsigned int FUNC_3 (int) ;

 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 struct vchiq_service* FUNC_7 (struct vchiq_state*,unsigned int) ;
 int FUNC_8 (struct vchiq_service*,int ,struct vchiq_header*,int *) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct vchiq_state*,struct vchiq_header*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct vchiq_service*) ;
 int FUNC_15 (char*,int ,scalar_t__,int ) ;
 int FUNC_16 (scalar_t__,char*,unsigned int,...) ;
 int FUNC_17 (scalar_t__,char*,int ,struct vchiq_header*,int,unsigned int,unsigned int,int ) ;
 int FUNC_18 (scalar_t__,char*,int ,struct vchiq_header*,int,unsigned int,unsigned int) ;
 int FUNC_19 (struct vchiq_service*,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_20(void *VAR_6)
{
 struct vchiq_state *VAR_7 = VAR_6;
 struct vchiq_shared_state *VAR_8 = VAR_7->local;
 struct vchiq_header *VAR_9 =
  (struct vchiq_header *)FUNC_0(VAR_7,
   VAR_7->remote->slot_sync);

 while (1) {
  struct vchiq_service *VAR_10;
  int VAR_11, VAR_12;
  int VAR_13;
  unsigned int VAR_14, VAR_15;

  FUNC_12(&VAR_7->sync_trigger_event, &VAR_8->sync_trigger);

  FUNC_13();

  VAR_11 = VAR_9->msgid;
  VAR_12 = VAR_9->size;
  VAR_13 = FUNC_5(VAR_11);
  VAR_14 = FUNC_3(VAR_11);
  VAR_15 = FUNC_4(VAR_11);

  VAR_10 = FUNC_7(VAR_7, VAR_14);

  if (!VAR_10) {
   FUNC_16(VAR_5,
    "%d: sf %s@%pK (%d->%d) - invalid/closed service %d",
    VAR_7->id, FUNC_10(VAR_13),
    VAR_9, VAR_15, VAR_14, VAR_14);
   FUNC_11(VAR_7, VAR_9);
   continue;
  }

  if (VAR_5 >= VAR_0) {
   int VAR_16;

   VAR_16 = VAR_10
    ? VAR_10->base.fourcc
    : FUNC_2('?', '?', '?', '?');
   FUNC_18(VAR_5,
    "Rcvd Msg %s from %c%c%c%c s:%d d:%d len:%d",
    FUNC_10(VAR_13),
    FUNC_1(VAR_16),
    VAR_15, VAR_14, VAR_12);
   if (VAR_12 > 0)
    FUNC_15("Rcvd", 0, VAR_9->data,
     FUNC_9(16, VAR_12));
  }

  switch (VAR_13) {
  case 128:
   if (VAR_12 >= sizeof(struct vchiq_openack_payload)) {
    const struct vchiq_openack_payload *VAR_17 =
     (struct vchiq_openack_payload *)
     VAR_9->data;
    VAR_10->peer_version = VAR_17->version;
   }
   FUNC_17(VAR_5,
    "%d: sf OPENACK@%pK,%x (%d->%d) v:%d",
    VAR_7->id, VAR_9, VAR_12, VAR_15, VAR_14,
    VAR_10->peer_version);
   if (VAR_10->srvstate == VAR_3) {
    VAR_10->remoteport = VAR_15;
    FUNC_19(VAR_10,
     VAR_4);
    VAR_10->sync = 1;
    FUNC_6(&VAR_10->remove_event);
   }
   FUNC_11(VAR_7, VAR_9);
   break;

  case 129:
   FUNC_18(VAR_5,
    "%d: sf DATA@%pK,%x (%d->%d)",
    VAR_7->id, VAR_9, VAR_12, VAR_15, VAR_14);

   if ((VAR_10->remoteport == VAR_15) &&
    (VAR_10->srvstate ==
    VAR_4)) {
    if (FUNC_8(VAR_10,
     VAR_1, VAR_9,
     ((void*)0)) == VAR_2)
     FUNC_16(VAR_5,
      "synchronous callback to "
      "service %d returns "
      "VCHIQ_RETRY",
      VAR_14);
   }
   break;

  default:
   FUNC_16(VAR_5,
    "%d: sf unexpected msgid %x@%pK,%x",
    VAR_7->id, VAR_11, VAR_9, VAR_12);
   FUNC_11(VAR_7, VAR_9);
   break;
  }

  FUNC_14(VAR_10);
 }

 return 0;
}
