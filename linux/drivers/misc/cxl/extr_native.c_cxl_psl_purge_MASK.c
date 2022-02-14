
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_afu {int dev; int adapter; } ;
struct TYPE_2__ {int (* link_ok ) (int ,struct cxl_afu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct cxl_afu*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* VAR_18 ;
 int FUNC_5 (struct cxl_afu*,int ) ;
 int FUNC_6 (struct cxl_afu*,int ,int) ;
 int FUNC_7 (struct cxl_afu*,int ) ;
 int FUNC_8 (struct cxl_afu*,int ,int ) ;
 int FUNC_9 (int *,char*,int,...) ;
 int FUNC_10 (int *,char*) ;
 unsigned long VAR_19 ;
 int FUNC_11 () ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,int,int) ;
 int FUNC_14 (int ,struct cxl_afu*) ;
 int FUNC_15 (int ,struct cxl_afu*) ;
 scalar_t__ FUNC_16 (unsigned long,unsigned long) ;
 int FUNC_17 (struct cxl_afu*,int) ;
 int FUNC_18 (struct cxl_afu*,int,int) ;

int FUNC_19(struct cxl_afu *VAR_20)
{
 u64 VAR_21 = FUNC_5(VAR_20, VAR_7);
 u64 VAR_22 = FUNC_7(VAR_20, VAR_0);
 u64 VAR_23, VAR_24;
 u64 VAR_25, VAR_26;
 u64 VAR_27 = 0x0ULL;
 unsigned long VAR_28 = VAR_19 + (VAR_17 * VAR_14);
 int VAR_29 = 0;

 FUNC_17(VAR_20, VAR_8);

 FUNC_12("PSL purge request\n");

 if (FUNC_3())
  VAR_27 = VAR_6;
 if (FUNC_4())
  VAR_27 = VAR_3;

 if (!VAR_18->link_ok(VAR_20->adapter, VAR_20)) {
  FUNC_10(&VAR_20->dev, "PSL Purge called with link down, ignoring\n");
  VAR_29 = -VAR_16;
  goto out;
 }

 if ((VAR_22 & VAR_2) != VAR_1) {
  FUNC_0(1, "psl_purge request while AFU not disabled!\n");
  FUNC_2(VAR_20);
 }

 FUNC_6(VAR_20, VAR_7,
         VAR_21 | VAR_8);
 VAR_25 = FUNC_11();
 VAR_21 = FUNC_5(VAR_20, VAR_7);
 while ((VAR_21 & VAR_9)
   == VAR_10) {
  if (FUNC_16(VAR_19, VAR_28)) {
   FUNC_10(&VAR_20->dev, "WARNING: PSL Purge timed out!\n");
   VAR_29 = -VAR_15;
   goto out;
  }
  if (!VAR_18->link_ok(VAR_20->adapter, VAR_20)) {
   VAR_29 = -VAR_16;
   goto out;
  }

  VAR_23 = FUNC_7(VAR_20, VAR_5);
  FUNC_13("PSL purging... PSL_CNTL: 0x%016llx  PSL_DSISR: 0x%016llx\n",
         VAR_21, VAR_23);

  if (VAR_23 & VAR_27) {
   VAR_24 = FUNC_7(VAR_20, VAR_4);
   FUNC_9(&VAR_20->dev, "PSL purge terminating pending translation, DSISR: 0x%016llx, DAR: 0x%016llx\n",
       VAR_23, VAR_24);
   FUNC_8(VAR_20, VAR_11, VAR_13);
  } else if (VAR_23) {
   FUNC_9(&VAR_20->dev, "PSL purge acknowledging pending non-translation fault, DSISR: 0x%016llx\n",
       VAR_23);
   FUNC_8(VAR_20, VAR_11, VAR_12);
  } else {
   FUNC_1();
  }
  VAR_21 = FUNC_5(VAR_20, VAR_7);
 }
 VAR_26 = FUNC_11();
 FUNC_12("PSL purged in %lld ns\n", VAR_26 - VAR_25);

 FUNC_6(VAR_20, VAR_7,
         VAR_21 & ~VAR_8);
out:
 FUNC_18(VAR_20, VAR_8, VAR_29);
 return VAR_29;
}
