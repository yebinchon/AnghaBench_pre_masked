
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_capability {int dummy; } ;
struct tcpm_port {scalar_t__ port_type; scalar_t__ state; int data_role; scalar_t__ try_role; scalar_t__ pwr_role; int non_pd_role_swap; int swap_status; int swap_pending; int swap_lock; int lock; int swap_complete; int pd_capable; } ;
typedef enum typec_data_role { ____Placeholder_typec_data_role } typec_data_role ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tcpm_port*,int ,int ) ;
 struct tcpm_port* FUNC_5 (struct typec_capability const*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(const struct typec_capability *VAR_10,
         enum typec_data_role VAR_11)
{
 struct tcpm_port *VAR_12 = FUNC_5(VAR_10);
 int VAR_13;

 FUNC_1(&VAR_12->swap_lock);
 FUNC_1(&VAR_12->lock);

 if (VAR_12->port_type != VAR_9) {
  VAR_13 = -VAR_2;
  goto port_unlock;
 }
 if (VAR_12->state != VAR_7 && VAR_12->state != VAR_6) {
  VAR_13 = -VAR_1;
  goto port_unlock;
 }

 if (VAR_12->data_role == VAR_11) {
  VAR_13 = 0;
  goto port_unlock;
 }
 if (!VAR_12->pd_capable) {





  if (VAR_12->try_role == VAR_8 ||
      VAR_12->try_role == VAR_12->pwr_role) {
   VAR_13 = -VAR_2;
   goto port_unlock;
  }
  VAR_12->non_pd_role_swap = 1;
  FUNC_4(VAR_12, VAR_5, 0);
 } else {
  FUNC_4(VAR_12, VAR_0, 0);
 }

 VAR_12->swap_status = 0;
 VAR_12->swap_pending = 1;
 FUNC_3(&VAR_12->swap_complete);
 FUNC_2(&VAR_12->lock);

 if (!FUNC_6(&VAR_12->swap_complete,
    FUNC_0(VAR_4)))
  VAR_13 = -VAR_3;
 else
  VAR_13 = VAR_12->swap_status;

 VAR_12->non_pd_role_swap = 0;
 goto swap_unlock;

port_unlock:
 FUNC_2(&VAR_12->lock);
swap_unlock:
 FUNC_2(&VAR_12->swap_lock);
 return VAR_13;
}
