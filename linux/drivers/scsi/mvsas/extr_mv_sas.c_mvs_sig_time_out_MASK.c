
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct timer_list {int dummy; } ;
struct mvs_phy {struct mvs_info* mvi; } ;
struct mvs_info {size_t id; TYPE_1__* chip; struct mvs_phy* phy; } ;
struct TYPE_4__ {int (* phy_reset ) (struct mvs_info*,size_t,int ) ;} ;
struct TYPE_3__ {size_t n_phy; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 struct mvs_phy* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (char*,size_t) ;
 struct mvs_phy* VAR_2 ;
 int FUNC_2 (struct mvs_info*,size_t,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct mvs_phy *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct mvs_info *VAR_6 = VAR_5->mvi;
 u8 VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->chip->n_phy; VAR_7++) {
  if (&VAR_6->phy[VAR_7] == VAR_5) {
   FUNC_1("Get signature time out, reset phy %d\n",
    VAR_7+VAR_6->id*VAR_6->chip->n_phy);
   VAR_0->phy_reset(VAR_6, VAR_7, VAR_1);
  }
 }
}
