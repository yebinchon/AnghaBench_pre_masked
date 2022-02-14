
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rcb_common_cb {scalar_t__ desc_num; TYPE_1__* dsaf_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rcb_common_cb*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct rcb_common_cb*,scalar_t__) ;

int FUNC_3(
 struct rcb_common_cb *VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 =
  FUNC_2(VAR_4, VAR_5);

 if (VAR_6 == VAR_7)
  return 0;

 if (VAR_6 >= VAR_4->desc_num ||
     VAR_6 > VAR_1 ||
     VAR_6 < VAR_2) {
  FUNC_0(VAR_4->dsaf_dev->dev,
   "error: not support coalesce_frames setting!\n");
  return -VAR_0;
 }

 FUNC_1(VAR_4, VAR_3 + VAR_5 * 4,
         VAR_6);
 return 0;
}
