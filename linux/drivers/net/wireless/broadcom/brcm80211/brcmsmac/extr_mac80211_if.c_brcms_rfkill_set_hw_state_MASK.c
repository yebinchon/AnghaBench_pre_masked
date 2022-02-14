
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcms_info {int lock; TYPE_2__* pub; int wlc; } ;
struct TYPE_4__ {TYPE_1__* ieee_hw; } ;
struct TYPE_3__ {int wiphy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

bool FUNC_5(struct brcms_info *VAR_0)
{
 bool VAR_1 = FUNC_0(VAR_0->wlc);

 FUNC_2(&VAR_0->lock);
 FUNC_3(VAR_0->pub->ieee_hw->wiphy, VAR_1);
 if (VAR_1)
  FUNC_4(VAR_0->pub->ieee_hw->wiphy);
 FUNC_1(&VAR_0->lock);
 return VAR_1;
}
