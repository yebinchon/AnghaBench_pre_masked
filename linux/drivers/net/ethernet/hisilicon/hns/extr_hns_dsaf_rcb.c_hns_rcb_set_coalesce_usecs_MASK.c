
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rcb_common_cb {TYPE_1__* dsaf_dev; } ;
struct TYPE_2__ {int dev; int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct rcb_common_cb*,scalar_t__) ;
 int FUNC_4 (struct rcb_common_cb*,scalar_t__,scalar_t__) ;

int FUNC_5(
 struct rcb_common_cb *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_2, VAR_3);

 if (VAR_4 == VAR_5)
  return 0;

 if (FUNC_0(VAR_2->dsaf_dev->dsaf_ver)) {
  if (!FUNC_1(VAR_2->dsaf_dev)) {
   FUNC_2(VAR_2->dsaf_dev->dev,
    "error: not support coalesce_usecs setting!\n");
   return -VAR_0;
  }
 }
 if (VAR_4 > VAR_1 || VAR_4 == 0) {
  FUNC_2(VAR_2->dsaf_dev->dev,
   "error: coalesce_usecs setting supports 1~1023us\n");
  return -VAR_0;
 }
 FUNC_4(VAR_2, VAR_3, VAR_4);
 return 0;
}
