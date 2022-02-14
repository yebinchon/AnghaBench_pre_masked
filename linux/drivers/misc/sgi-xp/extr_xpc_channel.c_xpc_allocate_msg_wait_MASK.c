
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_channel {int flags; scalar_t__ reason; int n_on_msg_allocate_wq; int msg_allocate_wq; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

enum xp_retval
FUNC_7(struct xpc_channel *VAR_5)
{
 enum xp_retval VAR_6;
 FUNC_1(VAR_2);

 if (VAR_5->flags & VAR_1) {
  FUNC_0(VAR_5->reason == VAR_3);
  return VAR_5->reason;
 }

 FUNC_3(&VAR_5->n_on_msg_allocate_wq);
 FUNC_5(&VAR_5->msg_allocate_wq, &VAR_2, VAR_0);
 VAR_6 = FUNC_6(1);
 FUNC_4(&VAR_5->msg_allocate_wq, &VAR_2);
 FUNC_2(&VAR_5->n_on_msg_allocate_wq);

 if (VAR_5->flags & VAR_1) {
  VAR_6 = VAR_5->reason;
  FUNC_0(VAR_5->reason == VAR_3);
 } else if (VAR_6 == 0) {
  VAR_6 = VAR_4;
 } else {
  VAR_6 = VAR_3;
 }

 return VAR_6;
}
