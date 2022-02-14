
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcb_common_cb {TYPE_1__* dsaf_dev; } ;
struct TYPE_2__ {int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rcb_common_cb*,scalar_t__) ;

u32 FUNC_2(
 struct rcb_common_cb *VAR_3, u32 VAR_4)
{
 if (FUNC_0(VAR_3->dsaf_dev->dsaf_ver))
  return FUNC_1(VAR_3, VAR_1) /
         VAR_0;
 else
  return FUNC_1(VAR_3,
         VAR_2 + VAR_4 * 4);
}
