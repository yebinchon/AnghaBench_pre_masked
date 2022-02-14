
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {scalar_t__ version_common; int id; } ;
struct vchiq_service {short version; short version_min; short peer_version; scalar_t__ srvstate; unsigned int remoteport; int client_id; scalar_t__ sync; int localport; } ;
struct vchiq_openack_payload {short member_0; } ;
struct vchiq_open_payload {unsigned int fourcc; short version; short version_min; } ;
struct vchiq_header {int msgid; int size; scalar_t__ data; } ;
typedef int ack_payload ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int) ;
 int VAR_1 ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct vchiq_service* FUNC_4 (struct vchiq_state*,unsigned int) ;
 scalar_t__ FUNC_5 (struct vchiq_service*,int ,int *,int *) ;
 int * VAR_9 ;
 scalar_t__ FUNC_6 (struct vchiq_state*,int *,int ,int *,struct vchiq_openack_payload*,int,int ) ;
 scalar_t__ FUNC_7 (struct vchiq_state*,int *,int ,int *,struct vchiq_openack_payload*,int,int ) ;
 int FUNC_8 (struct vchiq_service*) ;
 int VAR_10 ;
 int FUNC_9 (int ,char*,int ,struct vchiq_header*,unsigned int,int ) ;
 int FUNC_10 (char*,int ,int ,int ,short,short,short,short) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct vchiq_service*,int ) ;

__attribute__((used)) static int
FUNC_14(struct vchiq_state *VAR_11, struct vchiq_header *VAR_12)
{
 struct vchiq_service *VAR_13 = ((void*)0);
 int VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17;

 VAR_14 = VAR_12->msgid;
 VAR_15 = VAR_12->size;
 VAR_16 = FUNC_2(VAR_14);
 VAR_17 = FUNC_3(VAR_14);
 if (VAR_15 >= sizeof(struct vchiq_open_payload)) {
  const struct vchiq_open_payload *VAR_18 =
   (struct vchiq_open_payload *)VAR_12->data;
  unsigned int VAR_19;

  VAR_19 = VAR_18->fourcc;
  FUNC_9(VAR_10,
   "%d: prs OPEN@%pK (%d->'%c%c%c%c')",
   VAR_11->id, VAR_12, VAR_16,
   FUNC_0(VAR_19));

  VAR_13 = FUNC_4(VAR_11, VAR_19);

  if (VAR_13) {

   short VAR_20 = VAR_18->version;
   short VAR_21 = VAR_18->version_min;

   if ((VAR_13->version < VAR_21) ||
    (VAR_20 < VAR_13->version_min)) {

    FUNC_12();
    FUNC_10("%d: service %d (%c%c%c%c) "
     "version mismatch - local (%d, min %d)"
     " vs. remote (%d, min %d)",
     VAR_11->id, VAR_13->localport,
     FUNC_0(VAR_19),
     VAR_13->version, VAR_13->version_min,
     VAR_20, VAR_21);
    FUNC_11();
    FUNC_8(VAR_13);
    VAR_13 = ((void*)0);
    goto fail_open;
   }
   VAR_13->peer_version = VAR_20;

   if (VAR_13->srvstate == VAR_5) {
    struct vchiq_openack_payload VAR_22 = {
     VAR_13->version
    };

    if (VAR_11->version_common <
        VAR_8)
     VAR_13->sync = 0;


    if (VAR_13->sync) {
     if (FUNC_7(
      VAR_11,
      ((void*)0),
      FUNC_1(
       VAR_1,
       VAR_13->localport,
       VAR_17),
      VAR_9,
      &VAR_22,
      sizeof(VAR_22),
      0) == VAR_3)
      goto bail_not_ready;
    } else {
     if (FUNC_6(VAR_11,
       ((void*)0),
       FUNC_1(
       VAR_1,
       VAR_13->localport,
       VAR_17),
      VAR_9,
      &VAR_22,
      sizeof(VAR_22),
      0) == VAR_3)
      goto bail_not_ready;
    }


    FUNC_13(VAR_13,
     VAR_13->sync ? VAR_7
     : VAR_6);
   }

   VAR_13->remoteport = VAR_17;
   VAR_13->client_id = ((int *)VAR_12->data)[1];
   if (FUNC_5(VAR_13, VAR_4,
    ((void*)0), ((void*)0)) == VAR_3) {

    VAR_13->remoteport = VAR_2;
    goto bail_not_ready;
   }


   FUNC_8(VAR_13);
   return 1;
  }
 }

fail_open:

 if (FUNC_6(VAR_11, ((void*)0),
  FUNC_1(VAR_0, 0, FUNC_3(VAR_14)),
  ((void*)0), ((void*)0), 0, 0) == VAR_3)
  goto bail_not_ready;

 return 1;

bail_not_ready:
 if (VAR_13)
  FUNC_8(VAR_13);

 return 0;
}
