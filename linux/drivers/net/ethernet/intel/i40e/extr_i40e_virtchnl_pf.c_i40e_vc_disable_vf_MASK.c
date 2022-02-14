
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vf {int vf_id; TYPE_2__* pf; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (struct i40e_vf*,int) ;
 int FUNC_2 (struct i40e_vf*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static inline void FUNC_4(struct i40e_vf *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);






 for (VAR_1 = 0; VAR_1 < 20; VAR_1++) {
  if (FUNC_1(VAR_0, 0))
   return;
  FUNC_3(10000, 20000);
 }

 FUNC_0(&VAR_0->pf->pdev->dev,
   "Failed to initiate reset for VF %d after 200 milliseconds\n",
   VAR_0->vf_id);
}
