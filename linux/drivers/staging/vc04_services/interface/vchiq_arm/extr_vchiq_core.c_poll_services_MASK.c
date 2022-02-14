
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vchiq_state {int id; int * poll_services; int unused_service; } ;
struct vchiq_service {int bulk_rx; int bulk_tx; int remoteport; int localport; int public_fourcc; int poll_flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 struct vchiq_service* FUNC_2 (struct vchiq_state*,int) ;
 int FUNC_3 (struct vchiq_service*,int *,int) ;
 int FUNC_4 (struct vchiq_state*,struct vchiq_service*,int) ;
 int FUNC_5 (struct vchiq_service*) ;
 scalar_t__ FUNC_6 (struct vchiq_service*,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct vchiq_state *VAR_7)
{
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->unused_service); VAR_8++) {
  u32 VAR_10;

  VAR_10 = FUNC_1(&VAR_7->poll_services[VAR_8], 0);
  for (VAR_9 = 0; VAR_10; VAR_9++) {
   if (VAR_10 & (1 << VAR_9)) {
    struct vchiq_service *VAR_11 =
     FUNC_2(VAR_7,
      (VAR_8<<5) + VAR_9);
    u32 VAR_12;

    VAR_10 &= ~(1 << VAR_9);
    if (!VAR_11)
     continue;
    VAR_12 =
     FUNC_1(&VAR_11->poll_flags, 0);
    if (VAR_12 &
     (1 << VAR_1)) {
     FUNC_7(VAR_6,
      "%d: ps - remove %d<->%d",
      VAR_7->id, VAR_11->localport,
      VAR_11->remoteport);




     VAR_11->public_fourcc =
      VAR_0;

     if (FUNC_6(
      VAR_11, 0 ) !=
      VAR_5)
      FUNC_4(VAR_7, VAR_11,
       VAR_1);
    } else if (VAR_12 &
     (1 << VAR_3)) {
     FUNC_7(VAR_6,
      "%d: ps - terminate %d<->%d",
      VAR_7->id, VAR_11->localport,
      VAR_11->remoteport);
     if (FUNC_6(
      VAR_11, 0 ) !=
      VAR_5)
      FUNC_4(VAR_7, VAR_11,
       VAR_3);
    }
    if (VAR_12 & (1 << VAR_4))
     FUNC_3(VAR_11,
      &VAR_11->bulk_tx,
      1 );
    if (VAR_12 & (1 << VAR_2))
     FUNC_3(VAR_11,
      &VAR_11->bulk_rx,
      1 );
    FUNC_5(VAR_11);
   }
  }
 }
}
