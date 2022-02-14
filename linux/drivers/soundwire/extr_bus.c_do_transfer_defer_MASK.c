
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdw_msg {int len; } ;
struct sdw_defer {int complete; int length; struct sdw_msg* msg; } ;
struct TYPE_4__ {int err_threshold; } ;
struct sdw_bus {TYPE_1__* ops; TYPE_2__ prop; } ;
typedef enum sdw_command_response { ____Placeholder_sdw_command_response } sdw_command_response ;
struct TYPE_3__ {int (* xfer_msg_defer ) (struct sdw_bus*,struct sdw_msg*,struct sdw_defer*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sdw_bus*,struct sdw_msg*,struct sdw_defer*) ;

__attribute__((used)) static inline int FUNC_3(struct sdw_bus *VAR_1,
        struct sdw_msg *VAR_2,
        struct sdw_defer *VAR_3)
{
 int VAR_4 = VAR_1->prop.err_threshold;
 enum sdw_command_response VAR_5;
 int VAR_6 = 0, VAR_7;

 VAR_3->msg = VAR_2;
 VAR_3->length = VAR_2->len;
 FUNC_1(&VAR_3->complete);

 for (VAR_7 = 0; VAR_7 <= VAR_4; VAR_7++) {
  VAR_5 = VAR_1->ops->xfer_msg_defer(VAR_1, VAR_2, VAR_3);
  VAR_6 = FUNC_0(VAR_5);

  if (VAR_6 == 0 || VAR_6 == -VAR_0)
   return VAR_6;
 }

 return VAR_6;
}
