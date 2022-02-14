
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_mdm6600 {TYPE_1__* cmd_gpios; } ;
struct TYPE_2__ {int info; int desc; } ;


 int FUNC_0 (int*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int*) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct phy_mdm6600 *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1, VAR_0);

 VAR_1[0] = VAR_3;

 FUNC_1(VAR_0,
           VAR_2->cmd_gpios->desc,
           VAR_2->cmd_gpios->info, VAR_1);
}
