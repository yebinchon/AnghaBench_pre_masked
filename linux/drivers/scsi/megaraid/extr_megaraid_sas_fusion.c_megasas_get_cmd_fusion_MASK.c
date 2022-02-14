
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {int dummy; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; } ;



inline struct megasas_cmd_fusion *FUNC_0(struct megasas_instance
        *VAR_0, u32 VAR_1)
{
 struct fusion_context *VAR_2;

 VAR_2 = VAR_0->ctrl_context;
 return VAR_2->cmd_list[VAR_1];
}
