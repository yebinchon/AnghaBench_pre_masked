
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_capability {int dummy; } ;
struct tcpm_port {scalar_t__ port_type; scalar_t__ state; int pwr_role; int swap_status; int swap_pending; int swap_lock; int lock; int swap_complete; } ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tcpm_port*,int ,int ) ;
 struct tcpm_port* FUNC_5 (struct typec_capability const*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(const struct typec_capability *VAR_8,
         enum typec_role VAR_9)
{
 struct tcpm_port *VAR_10 = FUNC_5(VAR_8);
 int VAR_11;

 FUNC_1(&VAR_10->swap_lock);
 FUNC_1(&VAR_10->lock);

 if (VAR_10->port_type != VAR_7) {
  VAR_11 = -VAR_1;
  goto port_unlock;
 }
 if (VAR_10->state != VAR_6 && VAR_10->state != VAR_5) {
  VAR_11 = -VAR_0;
  goto port_unlock;
 }

 if (VAR_9 == VAR_10->pwr_role) {
  VAR_11 = 0;
  goto port_unlock;
 }

 VAR_10->swap_status = 0;
 VAR_10->swap_pending = 1;
 FUNC_3(&VAR_10->swap_complete);
 FUNC_4(VAR_10, VAR_4, 0);
 FUNC_2(&VAR_10->lock);

 if (!FUNC_6(&VAR_10->swap_complete,
    FUNC_0(VAR_3)))
  VAR_11 = -VAR_2;
 else
  VAR_11 = VAR_10->swap_status;

 goto swap_unlock;

port_unlock:
 FUNC_2(&VAR_10->lock);
swap_unlock:
 FUNC_2(&VAR_10->swap_lock);
 return VAR_11;
}
