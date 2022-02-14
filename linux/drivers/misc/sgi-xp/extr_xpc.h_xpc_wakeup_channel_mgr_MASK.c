
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {int channel_mgr_wq; int channel_mgr_requests; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct xpc_partition *VAR_0)
{
 if (FUNC_0(&VAR_0->channel_mgr_requests) == 1)
  FUNC_1(&VAR_0->channel_mgr_wq);
}
