
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pf_id; } ;
struct i40e_pf {TYPE_2__ hw; TYPE_1__* pdev; int state; } ;
struct i40e_info {struct i40e_pf* pf; } ;
struct i40e_client {int dummy; } ;
struct TYPE_3__ {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct i40e_info *VAR_1,
          struct i40e_client *VAR_2,
          u32 VAR_3)
{
 struct i40e_pf *VAR_4 = VAR_1->pf;

 switch (VAR_3) {
 case 128:
  FUNC_2(VAR_0, VAR_4->state);
  break;
 case 129:
  FUNC_2(VAR_0, VAR_4->state);
  break;
 default:
  FUNC_0(&VAR_4->pdev->dev,
    "Client for PF id %d requested an unsupported reset: %d.\n",
    VAR_4->hw.pf_id, VAR_3);
  break;
 }

 FUNC_1(VAR_4);
}
