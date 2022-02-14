
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct i40e_link_status {int link_speed; } ;
struct TYPE_3__ {struct i40e_link_status link_info; } ;
struct i40e_hw {TYPE_1__ phy; } ;
struct i40e_pf {int ptp_adj_mult; TYPE_2__* pdev; struct i40e_hw hw; } ;
struct TYPE_4__ {int dev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i40e_hw*,int,int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct i40e_hw*,int ,int) ;

void FUNC_5(struct i40e_pf *VAR_5)
{
 struct i40e_link_status *VAR_6;
 struct i40e_hw *VAR_7 = &VAR_5->hw;
 u64 VAR_8;
 u32 VAR_9;

 VAR_6 = &VAR_7->phy.link_info;

 FUNC_2(&VAR_5->hw, 1, ((void*)0), ((void*)0));

 switch (VAR_6->link_speed) {
 case 130:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 case 131:
 {
  static int VAR_10;

  if (!VAR_10) {
   FUNC_1(&VAR_5->pdev->dev,
     "1588 functionality is not supported at 100 Mbps. Stopping the PHC.\n");
   VAR_10++;
  }
  VAR_9 = 0;
  break;
 }
 case 128:
 default:
  VAR_9 = 1;
  break;
 }




 VAR_8 = VAR_4 * VAR_9;





 FUNC_4(VAR_7, VAR_1, VAR_8 & 0xFFFFFFFF);
 FUNC_4(VAR_7, VAR_0, VAR_8 >> 32);


 FUNC_0(VAR_5->ptp_adj_mult, VAR_9);
 FUNC_3();
}
