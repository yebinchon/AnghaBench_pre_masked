
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {int cmd_privileges; } ;



__attribute__((used)) static inline bool FUNC_0(struct be_adapter *VAR_0, u32 VAR_1)
{
 return VAR_1 & VAR_0->cmd_privileges ? 1 : 0;
}
