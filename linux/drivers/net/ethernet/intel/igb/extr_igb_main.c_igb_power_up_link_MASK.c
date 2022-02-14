
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ media_type; } ;
struct TYPE_7__ {TYPE_1__ phy; } ;
struct igb_adapter {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(struct igb_adapter *VAR_1)
{
 FUNC_2(&VAR_1->hw);

 if (VAR_1->hw.phy.media_type == VAR_0)
  FUNC_0(&VAR_1->hw);
 else
  FUNC_1(&VAR_1->hw);

 FUNC_3(&VAR_1->hw);
}
