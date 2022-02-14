
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_afu {int enabled; int afu_cntl_lock; int adapter; int dev; } ;
struct TYPE_2__ {int (* link_ok ) (int ,struct cxl_afu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct cxl_afu*,int ) ;
 int FUNC_2 (struct cxl_afu*,int ,int) ;
 int FUNC_3 (int *,char*) ;
 unsigned long VAR_7 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct cxl_afu*) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (struct cxl_afu*,int) ;
 int FUNC_11 (struct cxl_afu*,int,int) ;

__attribute__((used)) static int FUNC_12(struct cxl_afu *VAR_8, u64 VAR_9, u64 VAR_10,
         u64 VAR_11, u64 VAR_12, bool VAR_13)
{
 u64 VAR_14;
 unsigned long VAR_15 = VAR_7 + (VAR_5 * VAR_2);
 int VAR_16 = 0;

 FUNC_6(&VAR_8->afu_cntl_lock);
 FUNC_4("AFU command starting: %llx\n", VAR_9);

 FUNC_10(VAR_8, VAR_9);

 VAR_14 = FUNC_1(VAR_8, VAR_0);
 FUNC_2(VAR_8, VAR_0, (VAR_14 & ~VAR_10) | VAR_9);

 VAR_14 = FUNC_1(VAR_8, VAR_0);
 while ((VAR_14 & VAR_12) != VAR_11) {
  if (FUNC_9(VAR_7, VAR_15)) {
   FUNC_3(&VAR_8->dev, "WARNING: AFU control timed out!\n");
   VAR_16 = -VAR_3;
   goto out;
  }

  if (!VAR_6->link_ok(VAR_8->adapter, VAR_8)) {
   VAR_8->enabled = VAR_13;
   VAR_16 = -VAR_4;
   goto out;
  }

  FUNC_5("AFU control... (0x%016llx)\n",
         VAR_14 | VAR_9);
  FUNC_0();
  VAR_14 = FUNC_1(VAR_8, VAR_0);
 }

 if (VAR_14 & VAR_1) {





  FUNC_2(VAR_8, VAR_0, VAR_14 & ~VAR_1);
 }

 FUNC_4("AFU command complete: %llx\n", VAR_9);
 VAR_8->enabled = VAR_13;
out:
 FUNC_11(VAR_8, VAR_9, VAR_16);
 FUNC_7(&VAR_8->afu_cntl_lock);

 return VAR_16;
}
