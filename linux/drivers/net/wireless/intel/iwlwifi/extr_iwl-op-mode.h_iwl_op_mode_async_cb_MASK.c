
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_op_mode {TYPE_1__* ops; } ;
struct iwl_device_cmd {int dummy; } ;
struct TYPE_2__ {int (* async_cb ) (struct iwl_op_mode*,struct iwl_device_cmd const*) ;} ;


 int FUNC_0 (struct iwl_op_mode*,struct iwl_device_cmd const*) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_op_mode *VAR_0,
     const struct iwl_device_cmd *VAR_1)
{
 if (VAR_0->ops->async_cb)
  VAR_0->ops->async_cb(VAR_0, VAR_1);
}
