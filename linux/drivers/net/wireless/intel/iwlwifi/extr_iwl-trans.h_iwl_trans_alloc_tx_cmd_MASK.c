
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dev_cmd_pool; } ;
struct iwl_device_cmd {int dummy; } ;


 int VAR_0 ;
 struct iwl_device_cmd* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct iwl_device_cmd *
FUNC_1(struct iwl_trans *VAR_1)
{
 return FUNC_0(VAR_1->dev_cmd_pool, VAR_0);
}
