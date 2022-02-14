
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qoriq_tmu_data {TYPE_2__* regs; } ;
struct qoriq_sensor {size_t id; struct qoriq_tmu_data* qdata; } ;
struct TYPE_4__ {TYPE_1__* site; } ;
struct TYPE_3__ {int tritsr; } ;


 int FUNC_0 (struct qoriq_tmu_data*,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int *VAR_1)
{
 struct qoriq_sensor *VAR_2 = VAR_0;
 struct qoriq_tmu_data *VAR_3 = VAR_2->qdata;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, &VAR_3->regs->site[VAR_2->id].tritsr);
 *VAR_1 = (VAR_4 & 0xff) * 1000;

 return 0;
}
