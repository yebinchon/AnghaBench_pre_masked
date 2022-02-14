
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_reservation {int registration_lock; int registration_list; } ;
struct t10_pr_registration {scalar_t__ pr_res_type; scalar_t__ pr_res_holder; } ;
struct se_session {int se_node_acl; } ;
struct se_device {struct t10_reservation t10_pr; } ;
struct se_cmd {struct se_device* se_dev; struct se_session* se_sess; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct t10_pr_registration* FUNC_0 (struct se_device*,int ,struct se_session*) ;
 int FUNC_1 (struct t10_pr_registration*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct se_cmd *VAR_5)
{
 struct se_session *VAR_6 = VAR_5->se_sess;
 struct se_device *VAR_7 = VAR_5->se_dev;
 struct t10_pr_registration *VAR_8;
 struct t10_reservation *VAR_9 = &VAR_7->t10_pr;
 int VAR_10 = 0;

 VAR_8 = FUNC_0(VAR_5->se_dev, VAR_6->se_node_acl,
   VAR_6);
 if (VAR_8) {
  if (VAR_8->pr_res_holder) {
   FUNC_1(VAR_8);
   return 1;
  }
  if ((VAR_8->pr_res_type == VAR_4) ||
      (VAR_8->pr_res_type == VAR_2) ||
      (VAR_8->pr_res_type == VAR_3) ||
      (VAR_8->pr_res_type == VAR_1)) {
   FUNC_1(VAR_8);
   return 1;
  }
  FUNC_1(VAR_8);
  VAR_10 = 1;
 } else {
  FUNC_4(&VAR_9->registration_lock);
  VAR_10 = (FUNC_2(&VAR_9->registration_list)) ? 0 : 1;
  FUNC_5(&VAR_9->registration_lock);
 }

 if (VAR_10) {
  FUNC_3("Received legacy SPC-2 RESERVE/RELEASE"
   " while active SPC-3 registrations exist,"
   " returning RESERVATION_CONFLICT\n");
  return -VAR_0;
 }

 return 0;
}
