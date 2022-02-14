
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {size_t curr_state; size_t prev_state; int * name; } ;
struct TYPE_5__ {TYPE_1__ idc; } ;


 int FUNC_0 (int *,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 u32 VAR_1, VAR_2;
 VAR_1 = VAR_0->ahw->idc.curr_state;
 VAR_2 = VAR_0->ahw->idc.prev_state;

 FUNC_0(&VAR_0->pdev->dev,
   "current state  = %s,  prev state = %s\n",
   VAR_0->ahw->idc.name[VAR_1],
   VAR_0->ahw->idc.name[VAR_2]);
}
