
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct rtl_sta_info {TYPE_2__* tids; } ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {scalar_t__ opmode; int cnt_after_linked; scalar_t__ act_scanning; } ;
struct TYPE_3__ {scalar_t__ agg_state; } ;
struct TYPE_4__ {TYPE_1__ agg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;

__attribute__((used)) static bool FUNC_1(struct rtl_priv *VAR_2,
          struct rtl_sta_info *VAR_3, u16 VAR_4)
{
 struct rtl_mac *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->act_scanning)
  return 0;

 if (VAR_5->opmode == VAR_0 &&
     VAR_5->cnt_after_linked < 3)
  return 0;

 if (VAR_3->tids[VAR_4].agg.agg_state == VAR_1)
  return 1;

 return 0;
}
