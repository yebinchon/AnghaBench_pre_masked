
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_rsvd_page {int SAL_version; int SAL_partid; int max_npartitions; int SAL_nasids_size; unsigned long ts_jiffies; int version; } ;
struct TYPE_2__ {int (* setup_rsvd_page ) (struct xpc_rsvd_page*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct xpc_rsvd_page*) ;
 int FUNC_3 (struct xpc_rsvd_page*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 unsigned long VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct xpc_rsvd_page*) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (unsigned long) ;
 TYPE_1__ VAR_7 ;
 unsigned long FUNC_12 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct xpc_rsvd_page* VAR_13 ;

int
FUNC_13(void)
{
 int VAR_14;
 struct xpc_rsvd_page *VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;



 FUNC_6();
 VAR_16 = FUNC_12(FUNC_10(FUNC_8()));
 FUNC_7();
 if (VAR_16 == 0) {
  FUNC_5(VAR_11, "SAL failed to locate the reserved page\n");
  return -VAR_2;
 }
 VAR_15 = (struct xpc_rsvd_page *)FUNC_4(FUNC_11(VAR_16));

 if (VAR_15->SAL_version < 3) {

  VAR_15->SAL_partid &= 0xff;
 }
 FUNC_1(VAR_15->SAL_partid != VAR_6);

 if (VAR_15->SAL_partid < 0 || VAR_15->SAL_partid >= VAR_5) {
  FUNC_5(VAR_11, "the reserved page's partid of %d is outside "
   "supported range (< 0 || >= %d)\n", VAR_15->SAL_partid,
   VAR_5);
  return -VAR_1;
 }

 VAR_15->version = VAR_3;
 VAR_15->max_npartitions = VAR_5;


 if (VAR_15->SAL_version == 1) {

  VAR_15->SAL_nasids_size = 128;
 }
 VAR_9 = VAR_15->SAL_nasids_size;
 VAR_10 = FUNC_0(VAR_15->SAL_nasids_size *
           VAR_0);


 VAR_12 = FUNC_3(VAR_15);
 VAR_8 = FUNC_2(VAR_15);

 VAR_14 = VAR_7.setup_rsvd_page(VAR_15);
 if (VAR_14 != 0)
  return VAR_14;






 VAR_17 = VAR_4;
 if (VAR_17 == 0 || VAR_17 == VAR_15->ts_jiffies)
  VAR_17++;
 VAR_15->ts_jiffies = VAR_17;

 VAR_13 = VAR_15;
 return 0;
}
