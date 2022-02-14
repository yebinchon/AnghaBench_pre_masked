
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_ids {scalar_t__ in_use; int max_idx; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ipc_ids *VAR_1)
{
 if (VAR_1->in_use == 0)
  return -1;

 if (VAR_1->in_use == VAR_0)
  return VAR_0 - 1;

 return VAR_1->max_idx;
}
