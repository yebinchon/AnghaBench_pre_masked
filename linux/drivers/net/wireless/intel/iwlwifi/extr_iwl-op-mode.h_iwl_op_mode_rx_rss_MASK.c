
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct napi_struct {int dummy; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_op_mode {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* rx_rss ) (struct iwl_op_mode*,struct napi_struct*,struct iwl_rx_cmd_buffer*,unsigned int) ;} ;


 int FUNC_0 (struct iwl_op_mode*,struct napi_struct*,struct iwl_rx_cmd_buffer*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_op_mode *VAR_0,
          struct napi_struct *VAR_1,
          struct iwl_rx_cmd_buffer *VAR_2,
          unsigned int VAR_3)
{
 VAR_0->ops->rx_rss(VAR_0, VAR_1, VAR_2, VAR_3);
}
