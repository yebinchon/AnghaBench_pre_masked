
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {scalar_t__ act_state; unsigned long disengage_timeout; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* any_partition_engaged ) () ;} ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct xpc_partition*,int) ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 unsigned long VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_13 () ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_14 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (struct xpc_partition*) ;
 struct xpc_partition* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_16 () ;
 int FUNC_17 () ;

__attribute__((used)) static void
FUNC_18(enum xp_retval VAR_17)
{
 short VAR_18;
 int VAR_19, VAR_20 = 0;
 struct xpc_partition *VAR_21;
 unsigned long VAR_22, VAR_23 = 0;


 FUNC_0(VAR_11 == 1);






 VAR_11 = 1;
 FUNC_12(&VAR_6);


 FUNC_11(&VAR_9);


 FUNC_11(&VAR_12);


 (void)FUNC_4(300);



 VAR_22 = VAR_3 + (VAR_1 * VAR_0);
 VAR_10 = 0;

 do {
  VAR_19 = 0;

  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
   VAR_21 = &VAR_14[VAR_18];

   if (FUNC_15(VAR_21) &&
       VAR_21->act_state == VAR_2) {
    continue;
   }

   VAR_19++;

   FUNC_1(VAR_21, VAR_17);

   if (VAR_21->disengage_timeout > VAR_23)
    VAR_23 = VAR_21->disengage_timeout;
  }

  if (VAR_7.any_partition_engaged()) {
   if (FUNC_7(VAR_22)) {
    FUNC_2(VAR_13, "waiting for remote "
      "partitions to deactivate, timeout in "
      "%ld seconds\n", (VAR_23 -
      VAR_3) / VAR_0);
    VAR_22 = VAR_3 +
        (VAR_1 * VAR_0);
    VAR_20 = 1;
   }

  } else if (VAR_19 > 0) {
   if (VAR_20) {
    FUNC_2(VAR_13, "waiting for local partition"
      " to deactivate\n");
    VAR_20 = 0;
   }

  } else {
   if (!VAR_10) {
    FUNC_2(VAR_13, "all partitions have "
      "deactivated\n");
   }
   break;
  }


  (void)FUNC_4(300);

 } while (1);

 FUNC_0(VAR_7.any_partition_engaged());

 FUNC_17();

 if (VAR_17 == VAR_4) {
  (void)FUNC_8(&VAR_8);
  (void)FUNC_9(&VAR_15);
 }


 FUNC_13();

 if (VAR_16)
  FUNC_10(VAR_16);

 FUNC_16();

 if (FUNC_3())
  FUNC_14();
}
