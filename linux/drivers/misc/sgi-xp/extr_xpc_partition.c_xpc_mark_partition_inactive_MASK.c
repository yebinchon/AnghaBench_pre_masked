
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_partition {scalar_t__ remote_rp_pa; int act_lock; int act_state; } ;


 int FUNC_0 (struct xpc_partition*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;

void
FUNC_4(struct xpc_partition *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(VAR_1, "setting partition %d to INACTIVE\n",
  FUNC_0(VAR_2));

 FUNC_2(&VAR_2->act_lock, VAR_3);
 VAR_2->act_state = VAR_0;
 FUNC_3(&VAR_2->act_lock, VAR_3);
 VAR_2->remote_rp_pa = 0;
}
