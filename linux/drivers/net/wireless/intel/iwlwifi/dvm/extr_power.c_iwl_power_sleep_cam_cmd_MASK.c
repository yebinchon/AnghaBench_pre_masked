
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bus_pm; } ;
struct iwl_priv {TYPE_1__ power_data; } ;
struct iwl_powertable_cmd {int flags; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_powertable_cmd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iwl_priv *VAR_1,
        struct iwl_powertable_cmd *VAR_2)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 if (VAR_1->power_data.bus_pm)
  VAR_2->flags |= VAR_0;

 FUNC_0(VAR_1, "Sleep command for CAM\n");
}
