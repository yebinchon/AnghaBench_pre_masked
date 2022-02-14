
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; struct iscsi_conn* sk_user_data; } ;
struct iscsi_conn {void (* orig_state_change ) (struct sock*) ;int login_work; int login_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_4)
{
 struct iscsi_conn *VAR_5;
 void (*VAR_6)(struct sock *);
 bool VAR_7;

 FUNC_1("Entering iscsi_target_sk_state_change\n");

 FUNC_5(&VAR_4->sk_callback_lock);
 VAR_5 = VAR_4->sk_user_data;
 if (!VAR_5) {
  FUNC_6(&VAR_4->sk_callback_lock);
  return;
 }
 VAR_6 = VAR_5->orig_state_change;

 if (!FUNC_4(VAR_2, &VAR_5->login_flags)) {
  FUNC_1("Got LOGIN_FLAGS_READY=0 sk_state_change conn: %p\n",
    VAR_5);
  FUNC_6(&VAR_4->sk_callback_lock);
  VAR_6(VAR_4);
  return;
 }
 VAR_7 = FUNC_0(VAR_4);
 FUNC_1("__iscsi_target_sk_close_change: state: %d\n", VAR_7);

 if (FUNC_4(VAR_3, &VAR_5->login_flags)) {
  FUNC_1("Got LOGIN_FLAGS_READ_ACTIVE=1 sk_state_change"
    " conn: %p\n", VAR_5);
  if (VAR_7)
   FUNC_3(VAR_0, &VAR_5->login_flags);
  FUNC_6(&VAR_4->sk_callback_lock);
  VAR_6(VAR_4);
  return;
 }
 if (FUNC_4(VAR_0, &VAR_5->login_flags)) {
  FUNC_1("Got LOGIN_FLAGS_CLOSED=1 sk_state_change conn: %p\n",
    VAR_5);
  FUNC_6(&VAR_4->sk_callback_lock);
  VAR_6(VAR_4);
  return;
 }
 if (VAR_7) {
  FUNC_1("iscsi_target_sk_state_change got failed state\n");
  FUNC_3(VAR_0, &VAR_5->login_flags);
  VAR_7 = FUNC_4(VAR_1, &VAR_5->login_flags);
  FUNC_6(&VAR_4->sk_callback_lock);

  VAR_6(VAR_4);

  if (!VAR_7)
   FUNC_2(&VAR_5->login_work, 0);
  return;
 }
 FUNC_6(&VAR_4->sk_callback_lock);

 VAR_6(VAR_4);
}
