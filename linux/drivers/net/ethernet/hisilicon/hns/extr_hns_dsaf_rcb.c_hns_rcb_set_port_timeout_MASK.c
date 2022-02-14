
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcb_common_cb {TYPE_1__* dsaf_dev; } ;
struct TYPE_2__ {int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct rcb_common_cb*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(
 struct rcb_common_cb *VAR_5, u32 VAR_6, u32 VAR_7)
{
 if (FUNC_0(VAR_5->dsaf_dev->dsaf_ver)) {
  FUNC_2(VAR_5, VAR_2,
          VAR_7 * VAR_0);
 } else if (!FUNC_1(VAR_5->dsaf_dev)) {
  if (VAR_7 > VAR_1)
   FUNC_2(VAR_5,
           VAR_4 + VAR_6 * 4,
           VAR_1);
  else
   FUNC_2(VAR_5,
           VAR_4 + VAR_6 * 4,
           VAR_7);

  FUNC_2(VAR_5,
          VAR_3 + VAR_6 * 4,
          VAR_7);
 } else {
  FUNC_2(VAR_5,
          VAR_3 + VAR_6 * 4,
          VAR_7);
 }
}
