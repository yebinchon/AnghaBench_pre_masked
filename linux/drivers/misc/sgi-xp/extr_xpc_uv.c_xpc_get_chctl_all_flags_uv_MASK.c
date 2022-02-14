
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union xpc_channel_ctl_flags {scalar_t__ all_flags; } ;
typedef scalar_t__ u64 ;
struct xpc_partition {int chctl_lock; union xpc_channel_ctl_flags chctl; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u64
FUNC_2(struct xpc_partition *VAR_0)
{
 unsigned long VAR_1;
 union xpc_channel_ctl_flags VAR_2;

 FUNC_0(&VAR_0->chctl_lock, VAR_1);
 VAR_2 = VAR_0->chctl;
 if (VAR_2.all_flags != 0)
  VAR_0->chctl.all_flags = 0;

 FUNC_1(&VAR_0->chctl_lock, VAR_1);
 return VAR_2.all_flags;
}
