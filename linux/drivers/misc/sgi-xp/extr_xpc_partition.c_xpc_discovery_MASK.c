
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_rsvd_page {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* request_partition_activation ) (struct xpc_rsvd_page*,unsigned long,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 () ;
 unsigned long* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct xpc_rsvd_page*,unsigned long,int) ;
 scalar_t__ FUNC_5 (int,unsigned long*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int,unsigned long*,struct xpc_rsvd_page*,unsigned long*) ;
 struct xpc_rsvd_page* FUNC_7 (scalar_t__,int ,void**) ;
 unsigned long* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long* VAR_11 ;

void
FUNC_8(void)
{
 void *VAR_12;
 struct xpc_rsvd_page *VAR_13;
 unsigned long VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 unsigned long *VAR_19;
 enum xp_retval VAR_20;

 VAR_13 = FUNC_7(VAR_1 +
        VAR_8,
        VAR_0, &VAR_12);
 if (VAR_13 == ((void*)0))
  return;

 VAR_19 = FUNC_2(VAR_9, sizeof(long),
        VAR_0);
 if (VAR_19 == ((void*)0)) {
  FUNC_3(VAR_12);
  return;
 }






 VAR_16 = VAR_4;

 if (FUNC_1())
  VAR_17 = 256;
 else {
  VAR_17 = 64;

  switch (VAR_16) {
  case 128:
   VAR_17 *= 2;

  case 64:
   VAR_17 *= 2;

  case 32:
   VAR_17 *= 2;
   VAR_16 = 16;
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {

  if (VAR_6)
   break;

  FUNC_0(VAR_10, "searching region %d\n", VAR_15);

  for (VAR_18 = (VAR_15 * VAR_16 * 2);
       VAR_18 < ((VAR_15 + 1) * VAR_16 * 2); VAR_18 += 2) {

   if (VAR_6)
    break;

   FUNC_0(VAR_10, "checking nasid %d\n", VAR_18);

   if (FUNC_5(VAR_18 / 2, VAR_11)) {
    FUNC_0(VAR_10, "PROM indicates Nasid %d is "
     "part of the local partition; skipping "
     "region\n", VAR_18);
    break;
   }

   if (!(FUNC_5(VAR_18 / 2, VAR_7))) {
    FUNC_0(VAR_10, "PROM indicates Nasid %d was "
     "not on Numa-Link network at reset\n",
     VAR_18);
    continue;
   }

   if (FUNC_5(VAR_18 / 2, VAR_19)) {
    FUNC_0(VAR_10, "Nasid %d is part of a "
     "partition which was previously "
     "discovered\n", VAR_18);
    continue;
   }



   VAR_20 = FUNC_6(VAR_18, VAR_19,
      VAR_13, &VAR_14);
   if (VAR_20 != VAR_3) {
    FUNC_0(VAR_10, "unable to get reserved page "
     "from nasid %d, reason=%d\n", VAR_18,
     VAR_20);

    if (VAR_20 == VAR_2)
     break;

    continue;
   }

   VAR_5.request_partition_activation(VAR_13,
        VAR_14, VAR_18);
  }
 }

 FUNC_3(VAR_19);
 FUNC_3(VAR_12);
}
