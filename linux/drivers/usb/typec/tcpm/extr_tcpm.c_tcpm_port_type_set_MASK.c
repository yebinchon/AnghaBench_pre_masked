
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_capability {int dummy; } ;
struct tcpm_port {int port_type; scalar_t__ pwr_role; scalar_t__ data_role; int lock; int connected; } ;
typedef enum typec_port_type { ____Placeholder_typec_port_type } typec_port_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcpm_port*,int ,int ) ;
 struct tcpm_port* FUNC_3 (struct typec_capability const*) ;

__attribute__((used)) static int FUNC_4(const struct typec_capability *VAR_7,
         enum typec_port_type VAR_8)
{
 struct tcpm_port *VAR_9 = FUNC_3(VAR_7);

 FUNC_0(&VAR_9->lock);
 if (VAR_8 == VAR_9->port_type)
  goto port_unlock;

 VAR_9->port_type = VAR_8;

 if (!VAR_9->connected) {
  FUNC_2(VAR_9, VAR_0, 0);
 } else if (VAR_8 == VAR_3) {
  if (!(VAR_9->pwr_role == VAR_5 &&
        VAR_9->data_role == VAR_1))
   FUNC_2(VAR_9, VAR_0, 0);
 } else if (VAR_8 == VAR_4) {
  if (!(VAR_9->pwr_role == VAR_6 &&
        VAR_9->data_role == VAR_2))
   FUNC_2(VAR_9, VAR_0, 0);
 }

port_unlock:
 FUNC_1(&VAR_9->lock);
 return 0;
}
