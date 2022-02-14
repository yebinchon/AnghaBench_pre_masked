
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_3__ {scalar_t__ (* init_hw ) (struct igc_hw*) ;int (* reset_hw ) (struct igc_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct igc_fc_info {int high_water; int low_water; int pause_time; int send_xon; int requested_mode; int current_mode; } ;
struct igc_hw {TYPE_2__ mac; struct igc_fc_info fc; } ;
struct igc_adapter {int max_frame_size; int netdev; struct igc_hw hw; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct igc_hw*) ;
 int FUNC_2 (struct igc_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct igc_hw*) ;
 scalar_t__ FUNC_5 (struct igc_hw*) ;

void FUNC_6(struct igc_adapter *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct igc_hw *VAR_4 = &VAR_2->hw;
 struct igc_fc_info *VAR_5 = &VAR_4->fc;
 u32 VAR_6, VAR_7;


 VAR_6 = VAR_0;
 VAR_7 = (VAR_6 << 10) - (VAR_2->max_frame_size + VAR_1);

 VAR_5->high_water = VAR_7 & 0xFFFFFFF0;
 VAR_5->low_water = VAR_5->high_water - 16;
 VAR_5->pause_time = 0xFFFF;
 VAR_5->send_xon = 1;
 VAR_5->current_mode = VAR_5->requested_mode;

 VAR_4->mac.ops.reset_hw(VAR_4);

 if (VAR_4->mac.ops.init_hw(VAR_4))
  FUNC_0(&VAR_3->dev, "Hardware Error\n");

 if (!FUNC_3(VAR_2->netdev))
  FUNC_2(VAR_2);

 FUNC_1(VAR_4);
}
