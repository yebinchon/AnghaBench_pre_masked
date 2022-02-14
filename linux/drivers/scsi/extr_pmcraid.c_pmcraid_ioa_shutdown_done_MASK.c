
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_instance {TYPE_1__* host; } ;
struct pmcraid_cmd {struct pmcraid_instance* drv_inst; } ;
struct TYPE_2__ {int host_lock; } ;


 int FUNC_0 (struct pmcraid_cmd*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct pmcraid_cmd *VAR_0)
{
 struct pmcraid_instance *VAR_1 = VAR_0->drv_inst;
 unsigned long VAR_2;

 FUNC_1(VAR_1->host->host_lock, VAR_2);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1->host->host_lock, VAR_2);
}
