
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcb_common_cb {TYPE_1__* dsaf_dev; int desc_num; } ;
struct TYPE_2__ {int dsaf_ver; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
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
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct rcb_common_cb*,int ) ;
 int FUNC_4 (struct rcb_common_cb*,int ,int ,int) ;
 int FUNC_5 (struct rcb_common_cb*,int ,int) ;
 int FUNC_6 (struct rcb_common_cb*,int ) ;
 int FUNC_7 (struct rcb_common_cb*) ;
 int FUNC_8 (struct rcb_common_cb*,int,int ) ;
 int FUNC_9 (struct rcb_common_cb*,int,int ) ;
 int FUNC_10 (struct rcb_common_cb*,int,int ) ;
 int FUNC_11 (struct rcb_common_cb*,int,int ) ;

int FUNC_12(struct rcb_common_cb *VAR_15)
{
 u32 VAR_16;
 int VAR_17;
 int VAR_18 = FUNC_7(VAR_15);

 FUNC_6(VAR_15, 0);

 VAR_16 = FUNC_3(VAR_15, VAR_13);
 if (0x1 != (VAR_16 & 0x1)) {
  FUNC_2(VAR_15->dsaf_dev->dev,
   "RCB_COM_CFG_INIT_FLAG_REG reg = 0x%x\n", VAR_16);
  return -VAR_0;
 }

 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
  FUNC_8(VAR_15, VAR_17, VAR_15->desc_num);
  FUNC_10(
   VAR_15, VAR_17, VAR_3);
  if (!FUNC_0(VAR_15->dsaf_dev->dsaf_ver) &&
      !FUNC_1(VAR_15->dsaf_dev))
   FUNC_11(
    VAR_15, VAR_17, VAR_4);
  FUNC_9(
   VAR_15, VAR_17, VAR_2);
 }

 FUNC_5(VAR_15, VAR_8,
         VAR_1);

 if (FUNC_0(VAR_15->dsaf_dev->dsaf_ver)) {
  FUNC_5(VAR_15, VAR_12, 0x0);
  FUNC_5(VAR_15, VAR_10, 0x1);
 } else {
  FUNC_4(VAR_15, VAR_7,
     VAR_11, 0);
  FUNC_4(VAR_15, VAR_7,
     VAR_9, 1);
  FUNC_4(VAR_15, VAR_6,
     VAR_14, VAR_5);
 }

 return 0;
}
