
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pqi_ctrl_info {int heartbeat_counter; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct pqi_ctrl_info *VAR_0)
{
 if (!VAR_0->heartbeat_counter)
  return 0;

 return FUNC_0(VAR_0->heartbeat_counter);
}
