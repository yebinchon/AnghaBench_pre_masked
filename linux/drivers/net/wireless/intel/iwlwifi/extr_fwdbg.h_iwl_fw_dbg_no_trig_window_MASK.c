
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {scalar_t__* non_collect_ts_start; } ;
struct iwl_fw_runtime {TYPE_1__ dump; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 unsigned long FUNC_1 (size_t) ;

__attribute__((used)) static inline bool
FUNC_2(struct iwl_fw_runtime *VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_3);


 if (VAR_1->dump.non_collect_ts_start[VAR_2] &&
     (FUNC_0(VAR_1->dump.non_collect_ts_start[VAR_2] + VAR_4,
   VAR_0)))
  return 1;

 VAR_1->dump.non_collect_ts_start[VAR_2] = VAR_0;
 return 0;
}
