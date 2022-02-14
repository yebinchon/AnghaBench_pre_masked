
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {scalar_t__ link; int delay; int dev; int last_link_up; } ;
struct TYPE_2__ {int updelay; int miimon; int num_peer_notif; scalar_t__ resend_igmp; int peer_notif_delay; scalar_t__ fail_over_mac; } ;
struct bonding {int send_peer_notif; scalar_t__ igmp_retrans; int mcast_work; int wq; TYPE_1__ params; int dev; int curr_active_slave; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bonding*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct slave*,int ) ;
 int FUNC_3 (struct bonding*,struct slave*) ;
 int FUNC_4 (struct bonding*,struct slave*,int ) ;
 int FUNC_5 (struct bonding*,struct slave*,struct slave*) ;
 int FUNC_6 (struct bonding*,struct slave*,struct slave*) ;
 scalar_t__ FUNC_7 (struct bonding*) ;
 int FUNC_8 (struct slave*,int ) ;
 int FUNC_9 (struct slave*,int ) ;
 int FUNC_10 (struct slave*,int ,int ) ;
 int FUNC_11 (struct bonding*) ;
 scalar_t__ FUNC_12 (struct bonding*) ;
 int FUNC_13 (int ,int ) ;
 int VAR_8 ;
 int FUNC_14 (int,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int *,int) ;
 int FUNC_17 (int ,struct slave*) ;
 struct slave* FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,char*,...) ;

void FUNC_20(struct bonding *VAR_9, struct slave *VAR_10)
{
 struct slave *VAR_11;

 FUNC_0();

 VAR_11 = FUNC_18(VAR_9->curr_active_slave);

 if (VAR_11 == VAR_10)
  return;

 if (VAR_10) {
  VAR_10->last_link_up = VAR_8;

  if (VAR_10->link == VAR_0) {
   if (FUNC_12(VAR_9)) {
    FUNC_19(VAR_9->dev, VAR_10->dev, "making interface the new active one %d ms earlier\n",
        (VAR_9->params.updelay - VAR_10->delay) * VAR_9->params.miimon);
   }

   VAR_10->delay = 0;
   FUNC_10(VAR_10, VAR_1,
        VAR_5);

   if (FUNC_1(VAR_9) == VAR_2)
    FUNC_2(VAR_10, VAR_1);

   if (FUNC_7(VAR_9))
    FUNC_4(VAR_9, VAR_10, VAR_1);
  } else {
   if (FUNC_12(VAR_9)) {
    FUNC_19(VAR_9->dev, VAR_10->dev, "making interface the new active one\n");
   }
  }
 }

 if (FUNC_12(VAR_9))
  FUNC_6(VAR_9, VAR_10, VAR_11);

 if (FUNC_7(VAR_9)) {
  FUNC_3(VAR_9, VAR_10);
  if (VAR_11)
   FUNC_9(VAR_11,
            VAR_5);
  if (VAR_10)
   FUNC_8(VAR_10,
          VAR_5);
 } else {
  FUNC_17(VAR_9->curr_active_slave, VAR_10);
 }

 if (FUNC_1(VAR_9) == VAR_3) {
  if (VAR_11)
   FUNC_9(VAR_11,
            VAR_5);

  if (VAR_10) {
   bool VAR_12 = 0;

   FUNC_8(VAR_10,
          VAR_5);

   if (VAR_9->params.fail_over_mac)
    FUNC_5(VAR_9, VAR_10,
            VAR_11);

   if (FUNC_15(VAR_9->dev)) {
    VAR_9->send_peer_notif =
     VAR_9->params.num_peer_notif *
     FUNC_14(1, VAR_9->params.peer_notif_delay);
    VAR_12 =
     FUNC_11(VAR_9);
   }

   FUNC_13(VAR_6, VAR_9->dev);
   if (VAR_12) {
    VAR_9->send_peer_notif--;
    FUNC_13(VAR_7,
        VAR_9->dev);
   }
  }
 }






 if (FUNC_15(VAR_9->dev) && (VAR_9->params.resend_igmp > 0) &&
     ((FUNC_12(VAR_9) && VAR_10) ||
      FUNC_1(VAR_9) == VAR_4)) {
  VAR_9->igmp_retrans = VAR_9->params.resend_igmp;
  FUNC_16(VAR_9->wq, &VAR_9->mcast_work, 1);
 }
}
