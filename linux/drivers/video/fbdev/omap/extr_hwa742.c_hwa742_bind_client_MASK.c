
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_notifier_block {int dummy; } ;
struct TYPE_4__ {scalar_t__ update_mode; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(struct omapfb_notifier_block *VAR_3)
{
 FUNC_0(VAR_2->dev, "update_mode %d\n", VAR_2);
 if (VAR_2 == VAR_1) {
  FUNC_1(VAR_2, VAR_0);
 }
}
