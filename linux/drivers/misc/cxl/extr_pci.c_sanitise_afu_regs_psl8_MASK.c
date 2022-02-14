
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct cxl_afu {int dev; TYPE_3__* adapter; } ;
struct TYPE_8__ {scalar_t__ (* afu_reset ) (struct cxl_afu*) ;} ;
struct TYPE_7__ {TYPE_2__* native; } ;
struct TYPE_6__ {TYPE_1__* sl_ops; } ;
struct TYPE_5__ {scalar_t__ register_serr_irq; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_0 (struct cxl_afu*) ;
 TYPE_4__* VAR_22 ;
 int FUNC_1 (struct cxl_afu*,int ) ;
 int FUNC_2 (struct cxl_afu*,int ,int) ;
 int FUNC_3 (struct cxl_afu*,int ) ;
 int FUNC_4 (struct cxl_afu*,int ,int) ;
 scalar_t__ FUNC_5 (struct cxl_afu*) ;
 int FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (struct cxl_afu*) ;

__attribute__((used)) static int FUNC_8(struct cxl_afu *VAR_23)
{
 u64 VAR_24;






 VAR_24 = FUNC_3(VAR_23, VAR_0);
 if ((VAR_24 & VAR_2) != VAR_1) {
  FUNC_6(&VAR_23->dev, "WARNING: AFU was not disabled: %#016llx\n", VAR_24);
  if (VAR_22->afu_reset(VAR_23))
   return -VAR_21;
  if (FUNC_0(VAR_23))
   return -VAR_21;
  if (FUNC_5(VAR_23))
   return -VAR_21;
 }
 FUNC_2(VAR_23, VAR_14, 0x0000000000000000);
 FUNC_2(VAR_23, VAR_11, 0x0000000000000000);
 FUNC_2(VAR_23, VAR_12, 0x0000000000000000);
 FUNC_2(VAR_23, VAR_7, 0x0000000000000000);
 FUNC_2(VAR_23, VAR_15, 0x0000000000000000);
 FUNC_2(VAR_23, VAR_6, 0x0000000000000000);
 FUNC_4(VAR_23, VAR_5, 0x0000000000000000);
 FUNC_4(VAR_23, VAR_4, 0x0000000000000000);
 FUNC_4(VAR_23, VAR_3, 0x0000000000000000);
 FUNC_4(VAR_23, VAR_20, 0x0000000000000000);
 FUNC_4(VAR_23, VAR_19, 0x0000000000000000);
 VAR_24 = FUNC_3(VAR_23, VAR_8);
 if (VAR_24) {
  FUNC_6(&VAR_23->dev, "AFU had pending DSISR: %#016llx\n", VAR_24);
  if (VAR_24 & VAR_9)
   FUNC_4(VAR_23, VAR_16, VAR_18);
  else
   FUNC_4(VAR_23, VAR_16, VAR_17);
 }
 if (VAR_23->adapter->native->sl_ops->register_serr_irq) {
  VAR_24 = FUNC_1(VAR_23, VAR_13);
  if (VAR_24) {
   if (VAR_24 & ~0xffff)
    FUNC_6(&VAR_23->dev, "AFU had pending SERR: %#016llx\n", VAR_24);
   FUNC_2(VAR_23, VAR_13, VAR_24 & ~0xffff);
  }
 }
 VAR_24 = FUNC_3(VAR_23, VAR_10);
 if (VAR_24) {
  FUNC_6(&VAR_23->dev, "AFU had pending error status: %#016llx\n", VAR_24);
  FUNC_4(VAR_23, VAR_10, VAR_24);
 }

 return 0;
}
