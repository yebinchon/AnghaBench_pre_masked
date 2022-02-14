
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iscsi_login_stats {int lock; int last_fail_time; int last_intr_fail_sockaddr; int last_intr_fail_ip_family; int last_intr_fail_name; int last_fail_type; int other_fails; int negotiate_fails; int authorize_fails; int authenticate_fails; int redirects; int accepts; } ;
struct iscsi_tiqn {struct iscsi_login_stats login_stats; } ;
struct iscsi_param {char* value; } ;
struct iscsi_conn {int login_sockaddr; int login_family; scalar_t__ param_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 () ;
 struct iscsi_param* FUNC_1 (int ,scalar_t__) ;
 struct iscsi_tiqn* FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;

void FUNC_6(
 struct iscsi_conn *VAR_12,
 u8 VAR_13,
 u8 VAR_14)
{
 struct iscsi_param *VAR_15 = ((void*)0);
 struct iscsi_tiqn *VAR_16;
 struct iscsi_login_stats *VAR_17;

 VAR_16 = FUNC_2(VAR_12);
 if (!VAR_16)
  return;

 VAR_17 = &VAR_16->login_stats;

 FUNC_3(&VAR_17->lock);
 if (VAR_13 == VAR_11)
  VAR_17->accepts++;
 else if (VAR_13 == VAR_10) {
  VAR_17->redirects++;
  VAR_17->last_fail_type = VAR_5;
 } else if ((VAR_13 == VAR_9) &&
   (VAR_14 == VAR_6)) {
  VAR_17->authenticate_fails++;
  VAR_17->last_fail_type = VAR_1;
 } else if ((VAR_13 == VAR_9) &&
   (VAR_14 == VAR_8)) {
  VAR_17->authorize_fails++;
  VAR_17->last_fail_type = VAR_2;
 } else if ((VAR_13 == VAR_9) &&
   (VAR_14 == VAR_7)) {
  VAR_17->negotiate_fails++;
  VAR_17->last_fail_type = VAR_3;
 } else {
  VAR_17->other_fails++;
  VAR_17->last_fail_type = VAR_4;
 }


 if (VAR_13 != VAR_11) {
  if (VAR_12->param_list)
   VAR_15 = FUNC_1(VAR_0,
            VAR_12->param_list);
  FUNC_5(VAR_17->last_intr_fail_name,
         (VAR_15 ? VAR_15->value : "Unknown"),
         sizeof(VAR_17->last_intr_fail_name));

  VAR_17->last_intr_fail_ip_family = VAR_12->login_family;

  VAR_17->last_intr_fail_sockaddr = VAR_12->login_sockaddr;
  VAR_17->last_fail_time = FUNC_0();
 }

 FUNC_4(&VAR_17->lock);
}
