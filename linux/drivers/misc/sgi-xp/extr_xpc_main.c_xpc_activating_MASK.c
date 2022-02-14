
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef short u64 ;
struct xpc_partition {scalar_t__ act_state; scalar_t__ reason; int act_lock; scalar_t__ remote_rp_pa; } ;
struct TYPE_2__ {scalar_t__ (* make_first_contact ) (struct xpc_partition*) ;int (* request_partition_reactivation ) (struct xpc_partition*) ;int (* disallow_hb ) (short) ;int (* allow_hb ) (short) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct xpc_partition*,int ,int ) ;
 int FUNC_2 (int ,char*,short) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (short) ;
 scalar_t__ FUNC_6 (struct xpc_partition*) ;
 int FUNC_7 (short) ;
 int FUNC_8 (struct xpc_partition*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 short VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_9 (struct xpc_partition*) ;
 int FUNC_10 (struct xpc_partition*) ;
 int FUNC_11 (struct xpc_partition*) ;
 int VAR_8 ;
 int FUNC_12 (struct xpc_partition*) ;
 int FUNC_13 (struct xpc_partition*) ;
 struct xpc_partition* VAR_9 ;
 scalar_t__ FUNC_14 (struct xpc_partition*) ;
 int FUNC_15 (struct xpc_partition*) ;

__attribute__((used)) static int
FUNC_16(void *VAR_10)
{
 short VAR_11 = (u64)VAR_10;
 struct xpc_partition *VAR_12 = &VAR_9[VAR_11];
 unsigned long VAR_13;

 FUNC_0(VAR_11 < 0 || VAR_11 >= VAR_6);

 FUNC_3(&VAR_12->act_lock, VAR_13);

 if (VAR_12->act_state == VAR_2) {
  VAR_12->act_state = VAR_3;
  FUNC_4(&VAR_12->act_lock, VAR_13);
  VAR_12->remote_rp_pa = 0;
  return 0;
 }


 FUNC_0(VAR_12->act_state != VAR_1);
 VAR_12->act_state = VAR_0;

 FUNC_1(VAR_12, 0, 0);
 FUNC_4(&VAR_12->act_lock, VAR_13);

 FUNC_2(VAR_8, "activating partition %d\n", VAR_11);

 VAR_7.allow_hb(VAR_11);

 if (FUNC_14(VAR_12) == VAR_5) {
  (void)FUNC_13(VAR_12);

  if (VAR_7.make_first_contact(VAR_12) == VAR_5) {
   FUNC_10(VAR_12);
   FUNC_9(VAR_12);

  }

  FUNC_12(VAR_12);
  FUNC_15(VAR_12);
 }

 VAR_7.disallow_hb(VAR_11);
 FUNC_11(VAR_12);

 if (VAR_12->reason == VAR_4) {

  VAR_7.request_partition_reactivation(VAR_12);
 }

 return 0;
}
