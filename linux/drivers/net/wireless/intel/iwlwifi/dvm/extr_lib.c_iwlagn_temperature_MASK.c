
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int temperature; } ;
struct TYPE_4__ {TYPE_1__ common; int lock; } ;
struct iwl_priv {TYPE_2__ statistics; int temperature; } ;


 int FUNC_0 (struct iwl_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iwl_priv *VAR_0)
{
 FUNC_2(&VAR_0->statistics.lock);


 VAR_0->temperature = FUNC_1(VAR_0->statistics.common.temperature);
 FUNC_0(VAR_0);
}
