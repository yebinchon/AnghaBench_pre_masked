
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucsi_control {int dummy; } ;
struct TYPE_2__ {scalar_t__ partner_type; } ;
struct ucsi_connector {int lock; int complete; TYPE_1__ status; int partner; } ;
struct typec_capability {int dummy; } ;
typedef enum typec_data_role { ____Placeholder_typec_data_role } typec_data_role ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ucsi_control,struct ucsi_connector*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ucsi_connector* FUNC_4 (struct typec_capability const*) ;
 int FUNC_5 (struct ucsi_connector*,struct ucsi_control*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(const struct typec_capability *VAR_7, enum typec_data_role VAR_8)
{
 struct ucsi_connector *VAR_9 = FUNC_4(VAR_7);
 struct ucsi_control VAR_10;
 int VAR_11 = 0;

 FUNC_2(&VAR_9->lock);

 if (!VAR_9->partner) {
  VAR_11 = -VAR_0;
  goto out_unlock;
 }

 if ((VAR_9->status.partner_type == VAR_4 &&
      VAR_8 == VAR_2) ||
     (VAR_9->status.partner_type == VAR_5 &&
      VAR_8 == VAR_3))
  goto out_unlock;

 FUNC_0(VAR_10, VAR_9, VAR_8);
 VAR_11 = FUNC_5(VAR_9, &VAR_10);
 if (VAR_11 < 0)
  goto out_unlock;

 if (!FUNC_6(&VAR_9->complete,
     FUNC_1(VAR_6)))
  VAR_11 = -VAR_1;

out_unlock:
 FUNC_3(&VAR_9->lock);

 return VAR_11 < 0 ? VAR_11 : 0;
}
