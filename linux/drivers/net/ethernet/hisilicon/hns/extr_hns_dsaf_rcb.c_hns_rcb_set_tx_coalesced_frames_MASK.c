
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct rcb_common_cb {TYPE_1__* dsaf_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rcb_common_cb*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct rcb_common_cb*,scalar_t__) ;

int FUNC_3(
 struct rcb_common_cb *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 =
  FUNC_2(VAR_3, VAR_4);
 u64 VAR_7;

 if (VAR_5 == VAR_6)
  return 0;

 if (VAR_5 != 1) {
  FUNC_0(VAR_3->dsaf_dev->dev,
   "error: not support tx coalesce_frames setting!\n");
  return -VAR_0;
 }

 VAR_7 = VAR_2 + (VAR_4 + VAR_1) * 4;
 FUNC_1(VAR_3, VAR_7, VAR_5);
 return 0;
}
