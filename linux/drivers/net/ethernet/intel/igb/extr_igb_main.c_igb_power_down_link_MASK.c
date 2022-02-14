
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ media_type; } ;
struct TYPE_5__ {TYPE_1__ phy; } ;
struct igb_adapter {TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_1)
{
 if (VAR_1->hw.phy.media_type == VAR_0)
  FUNC_0(&VAR_1->hw);
 else
  FUNC_1(&VAR_1->hw);
}
