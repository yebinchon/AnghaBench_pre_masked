
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct napi_struct {int dummy; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_op_mode {TYPE_1__* ops; } ;
struct TYPE_2__ {void (* rx ) (struct iwl_op_mode*,struct napi_struct*,struct iwl_rx_cmd_buffer*) ;} ;


 void FUNC_0 (struct iwl_op_mode*,struct napi_struct*,struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_op_mode *VAR_0,
      struct napi_struct *VAR_1,
      struct iwl_rx_cmd_buffer *VAR_2)
{
 return VAR_0->ops->rx(VAR_0, VAR_1, VAR_2);
}
