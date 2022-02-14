
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pvscsi_ctx {int dummy; } ;
struct pvscsi_adapter {struct pvscsi_ctx const* cmd_map; } ;



__attribute__((used)) static u64 FUNC_0(const struct pvscsi_adapter *VAR_0,
         const struct pvscsi_ctx *VAR_1)
{
 return VAR_1 - VAR_0->cmd_map + 1;
}
