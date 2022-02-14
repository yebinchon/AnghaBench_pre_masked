
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct iscsi_session {scalar_t__ state; int frwd_lock; } ;
struct iscsi_conn {unsigned long recv_timeout; unsigned long last_recv; unsigned long ping_timeout; unsigned long last_ping; int transport_timer; struct iscsi_session* session; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct iscsi_conn* VAR_4 ;
 struct iscsi_conn* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct iscsi_conn*,int ) ;
 int FUNC_3 (int ,struct iscsi_conn*,char*,unsigned long,unsigned long,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_4 (struct iscsi_conn*) ;
 scalar_t__ FUNC_5 (struct iscsi_conn*,int *) ;
 int VAR_5 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (unsigned long,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_7)
{
 struct iscsi_conn *VAR_8 = FUNC_1(VAR_8, VAR_7, VAR_6);
 struct iscsi_session *VAR_9 = VAR_8->session;
 unsigned long VAR_10, VAR_11 = 0, VAR_12;

 FUNC_7(&VAR_9->frwd_lock);
 if (VAR_9->state != VAR_2)
  goto done;

 VAR_10 = VAR_8->recv_timeout;
 if (!VAR_10)
  goto done;

 VAR_10 *= VAR_0;
 VAR_12 = VAR_8->last_recv;

 if (FUNC_4(VAR_8)) {
  FUNC_3(VAR_3, VAR_8, "ping timeout of %d secs "
      "expired, recv timeout %d, last rx %lu, "
      "last ping %lu, now %lu\n",
      VAR_8->ping_timeout, VAR_8->recv_timeout,
      VAR_12, VAR_8->last_ping, VAR_5);
  FUNC_8(&VAR_9->frwd_lock);
  FUNC_2(VAR_8, VAR_1);
  return;
 }

 if (FUNC_9(VAR_12 + VAR_10, VAR_5)) {

  FUNC_0(VAR_8, "Sending nopout as ping\n");
  if (FUNC_5(VAR_8, ((void*)0)))
   VAR_11 = VAR_5 + (1 * VAR_0);
  else
   VAR_11 = VAR_8->last_ping + (VAR_8->ping_timeout * VAR_0);
 } else
  VAR_11 = VAR_12 + VAR_10;

 FUNC_0(VAR_8, "Setting next tmo %lu\n", VAR_11);
 FUNC_6(&VAR_8->transport_timer, VAR_11);
done:
 FUNC_8(&VAR_9->frwd_lock);
}
