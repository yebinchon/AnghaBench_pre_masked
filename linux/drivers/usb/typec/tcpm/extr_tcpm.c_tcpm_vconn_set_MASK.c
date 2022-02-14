
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_capability {int dummy; } ;
struct tcpm_port {scalar_t__ state; int vconn_role; int swap_status; int swap_pending; int swap_lock; int lock; int swap_complete; } ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tcpm_port*,int ,int ) ;
 struct tcpm_port* FUNC_5 (struct typec_capability const*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(const struct typec_capability *VAR_6,
     enum typec_role VAR_7)
{
 struct tcpm_port *VAR_8 = FUNC_5(VAR_6);
 int VAR_9;

 FUNC_1(&VAR_8->swap_lock);
 FUNC_1(&VAR_8->lock);

 if (VAR_8->state != VAR_4 && VAR_8->state != VAR_3) {
  VAR_9 = -VAR_0;
  goto port_unlock;
 }

 if (VAR_7 == VAR_8->vconn_role) {
  VAR_9 = 0;
  goto port_unlock;
 }

 VAR_8->swap_status = 0;
 VAR_8->swap_pending = 1;
 FUNC_3(&VAR_8->swap_complete);
 FUNC_4(VAR_8, VAR_5, 0);
 FUNC_2(&VAR_8->lock);

 if (!FUNC_6(&VAR_8->swap_complete,
    FUNC_0(VAR_2)))
  VAR_9 = -VAR_1;
 else
  VAR_9 = VAR_8->swap_status;

 goto swap_unlock;

port_unlock:
 FUNC_2(&VAR_8->lock);
swap_unlock:
 FUNC_2(&VAR_8->swap_lock);
 return VAR_9;
}
