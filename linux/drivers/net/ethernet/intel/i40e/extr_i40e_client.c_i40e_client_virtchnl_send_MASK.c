
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_pf {TYPE_2__* pdev; struct i40e_hw hw; } ;
struct i40e_info {struct i40e_pf* pf; } ;
struct i40e_client {int dummy; } ;
typedef int i40e_status ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (struct i40e_hw*,int ,int ,int ,int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct i40e_info *VAR_1,
         struct i40e_client *VAR_2,
         u32 VAR_3, u8 *VAR_4, u16 VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_1->pf;
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 i40e_status VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_0,
         0, VAR_4, VAR_5, ((void*)0));
 if (VAR_8)
  FUNC_0(&VAR_6->pdev->dev, "Unable to send iWarp message to VF, error %d, aq status %d\n",
   VAR_8, VAR_7->aq.asq_last_status);

 return VAR_8;
}
