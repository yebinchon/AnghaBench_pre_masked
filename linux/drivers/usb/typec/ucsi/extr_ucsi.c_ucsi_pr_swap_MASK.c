
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucsi_control {int dummy; } ;
struct TYPE_2__ {int pwr_dir; scalar_t__ pwr_op_mode; } ;
struct ucsi_connector {int lock; TYPE_1__ status; int complete; int partner; } ;
struct typec_capability {int dummy; } ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucsi_control,struct ucsi_connector*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ucsi_connector* FUNC_4 (struct typec_capability const*) ;
 int FUNC_5 (struct ucsi_connector*,int) ;
 int FUNC_6 (struct ucsi_connector*,struct ucsi_control*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(const struct typec_capability *VAR_5, enum typec_role VAR_6)
{
 struct ucsi_connector *VAR_7 = FUNC_4(VAR_5);
 struct ucsi_control VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_7->lock);

 if (!VAR_7->partner) {
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 if (VAR_7->status.pwr_dir == VAR_6)
  goto out_unlock;

 FUNC_0(VAR_8, VAR_7, VAR_6);
 VAR_9 = FUNC_6(VAR_7, &VAR_8);
 if (VAR_9 < 0)
  goto out_unlock;

 if (!FUNC_7(&VAR_7->complete,
    FUNC_1(VAR_4))) {
  VAR_9 = -VAR_2;
  goto out_unlock;
 }


 if (VAR_7->status.pwr_op_mode != VAR_3) {
  FUNC_5(VAR_7, 1);
  VAR_9 = -VAR_1;
 }

out_unlock:
 FUNC_3(&VAR_7->lock);

 return VAR_9;
}
