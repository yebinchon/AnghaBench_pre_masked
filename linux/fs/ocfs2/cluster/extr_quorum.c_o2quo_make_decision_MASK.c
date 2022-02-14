
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct o2quo_state {int qs_heartbeating; int qs_connected; int qs_lock; int qs_hb_bm; int qs_conn_bm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int,int,int,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct o2quo_state VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8 = 0;
 struct o2quo_state *VAR_9 = &VAR_3;

 FUNC_4(&VAR_9->qs_lock);

 VAR_6 = FUNC_0(VAR_9->qs_hb_bm, VAR_2);
 if (VAR_6 != VAR_2)
  VAR_7 = FUNC_6(VAR_6, VAR_9->qs_conn_bm);

 FUNC_1(0, "heartbeating: %d, connected: %d, "
      "lowest: %d (%sreachable)\n", VAR_9->qs_heartbeating,
      VAR_9->qs_connected, VAR_6, VAR_7 ? "" : "un");

 if (!FUNC_6(FUNC_2(), VAR_9->qs_hb_bm) ||
     VAR_9->qs_heartbeating == 1)
  goto out;

 if (VAR_9->qs_heartbeating & 1) {


  VAR_5 = (VAR_9->qs_heartbeating + 1)/2;
  if (VAR_9->qs_connected < VAR_5) {
   FUNC_1(VAR_0, "fencing this node because it is "
        "only connected to %u nodes and %u is needed "
        "to make a quorum out of %u heartbeating nodes\n",
        VAR_9->qs_connected, VAR_5,
        VAR_9->qs_heartbeating);
   VAR_8 = 1;
  }
 } else {




  VAR_5 = VAR_9->qs_heartbeating / 2;
  if (VAR_9->qs_connected < VAR_5) {
   FUNC_1(VAR_0, "fencing this node because it is "
        "only connected to %u nodes and %u is needed "
        "to make a quorum out of %u heartbeating nodes\n",
        VAR_9->qs_connected, VAR_5,
        VAR_9->qs_heartbeating);
   VAR_8 = 1;
  }
  else if ((VAR_9->qs_connected == VAR_5) &&
    !VAR_7) {
   FUNC_1(VAR_0, "fencing this node because it is "
        "connected to a half-quorum of %u out of %u "
        "nodes which doesn't include the lowest active "
        "node %u\n", VAR_5, VAR_9->qs_heartbeating,
        VAR_6);
   VAR_8 = 1;
  }
 }

out:
 if (VAR_8) {
  FUNC_5(&VAR_9->qs_lock);
  FUNC_3();
 } else {
  FUNC_1(VAR_1, "not fencing this node, heartbeating: %d, "
   "connected: %d, lowest: %d (%sreachable)\n",
   VAR_9->qs_heartbeating, VAR_9->qs_connected, VAR_6,
   VAR_7 ? "" : "un");
  FUNC_5(&VAR_9->qs_lock);

 }

}
