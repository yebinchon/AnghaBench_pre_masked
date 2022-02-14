
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int enabled_state; int p; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_1;

 if (FUNC_0(VAR_0->enabled_state))
  return;
 VAR_1 = FUNC_2(VAR_0->p, VAR_0->enabled_state);
 if (VAR_1)
  FUNC_1(VAR_0->dev, "failed to enable pins\n");
}
