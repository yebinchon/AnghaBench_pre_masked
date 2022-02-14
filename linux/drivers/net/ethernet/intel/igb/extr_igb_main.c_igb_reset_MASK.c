
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union e1000_adv_tx_desc {int dummy; } e1000_adv_tx_desc ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_7__ {int (* get_invariants ) (struct e1000_hw*) ;} ;
struct TYPE_10__ {scalar_t__ media_type; } ;
struct TYPE_8__ {scalar_t__ func; } ;
struct TYPE_9__ {int (* init_thermal_sensor_thresh ) (struct e1000_hw*) ;scalar_t__ (* init_hw ) (struct e1000_hw*) ;int (* reset_hw ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int type; TYPE_4__ ops; int autoneg; } ;
struct e1000_fc_info {int high_water; int low_water; int pause_time; int send_xon; int requested_mode; int current_mode; } ;
struct e1000_hw {TYPE_5__ phy; TYPE_3__ bus; struct e1000_mac_info mac; struct e1000_fc_info fc; } ;
struct igb_adapter {int max_frame_size; int vfs_allocated_count; int flags; int ptp_flags; int netdev; scalar_t__ ets; int state; TYPE_2__ ei; TYPE_1__* vf_data; struct e1000_hw hw; struct pci_dev* pdev; } ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*) ;







 scalar_t__ VAR_16 ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct igb_adapter*,int) ;
 int FUNC_8 (struct igb_adapter*) ;
 int FUNC_9 (struct igb_adapter*) ;
 int FUNC_10 (struct igb_adapter*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct igb_adapter*) ;
 int FUNC_13 (struct e1000_hw*,int,int) ;
 int FUNC_14 (struct e1000_hw*,int,int) ;
 int FUNC_15 (struct igb_adapter*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct e1000_hw*) ;
 int FUNC_19 (struct e1000_hw*) ;
 scalar_t__ FUNC_20 (struct e1000_hw*) ;
 int FUNC_21 (struct e1000_hw*) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int ,int) ;

void FUNC_24(struct igb_adapter *VAR_17)
{
 struct pci_dev *VAR_18 = VAR_17->pdev;
 struct e1000_hw *VAR_19 = &VAR_17->hw;
 struct e1000_mac_info *VAR_20 = &VAR_19->mac;
 struct e1000_fc_info *VAR_21 = &VAR_19->fc;
 u32 VAR_22, VAR_23;




 switch (VAR_20->type) {
 case 129:
 case 128:
 case 132:
  VAR_22 = FUNC_17(VAR_2);
  VAR_22 = FUNC_11(VAR_22);
  break;
 case 133:
  VAR_22 = FUNC_17(VAR_2);
  VAR_22 &= VAR_3;
  break;
 case 134:
 case 131:
 case 130:
 default:
  VAR_22 = VAR_1;
  break;
 }

 if (VAR_20->type == 134) {
  u32 VAR_24, VAR_25, VAR_26;


  FUNC_23(VAR_0, VAR_22);
  VAR_24 = FUNC_0(VAR_14, 1024);






  VAR_25 = VAR_17->max_frame_size;
  VAR_25 += sizeof(union e1000_adv_tx_desc) - VAR_9;
  VAR_25 = FUNC_0(VAR_25, 512);


  VAR_26 = VAR_25 - (FUNC_17(VAR_0) >> 16);





  if (VAR_26 < VAR_22) {
   VAR_22 -= VAR_26;




   if (VAR_22 < VAR_24)
    VAR_22 = VAR_24;
  }


  FUNC_23(VAR_0, VAR_22);
 }
 VAR_23 = (VAR_22 << 10) - (VAR_17->max_frame_size + VAR_14);

 VAR_21->high_water = VAR_23 & 0xFFFFFFF0;
 VAR_21->low_water = VAR_21->high_water - 16;
 VAR_21->pause_time = 0xFFFF;
 VAR_21->send_xon = 1;
 VAR_21->current_mode = VAR_21->requested_mode;


 if (VAR_17->vfs_allocated_count) {
  int VAR_27;

  for (VAR_27 = 0 ; VAR_27 < VAR_17->vfs_allocated_count; VAR_27++)
   VAR_17->vf_data[VAR_27].flags &= VAR_13;


  FUNC_8(VAR_17);


  FUNC_23(VAR_5, 0);
  FUNC_23(VAR_6, 0);
 }


 VAR_19->mac.ops.reset_hw(VAR_19);
 FUNC_23(VAR_7, 0);

 if (VAR_17->flags & VAR_11) {

  VAR_17->ei.get_invariants(VAR_19);
  VAR_17->flags &= ~VAR_11;
 }
 if ((VAR_20->type == 134 || VAR_20->type == 129) &&
     (VAR_17->flags & VAR_10)) {
  FUNC_3(VAR_17);
 }
 if (VAR_19->mac.ops.init_hw(VAR_19))
  FUNC_2(&VAR_18->dev, "Hardware Error\n");


 FUNC_4(VAR_17);
 FUNC_1(VAR_17->netdev, ((void*)0));


 FUNC_12(VAR_17);




 if (!VAR_19->mac.autoneg)
  FUNC_5(VAR_19);

 FUNC_7(VAR_17, VAR_22);
 if (VAR_19->phy.media_type == VAR_16) {
  switch (VAR_20->type) {
  case 129:
  case 131:
  case 130:
   FUNC_13(VAR_19, 1, 1);
   break;
  case 128:
   FUNC_14(VAR_19, 1, 1);
   break;
  default:
   break;
  }
 }
 if (!FUNC_16(VAR_17->netdev))
  FUNC_9(VAR_17);

 FUNC_15(VAR_17);


 FUNC_23(VAR_4, VAR_8);


 if (VAR_17->ptp_flags & VAR_12)
  FUNC_10(VAR_17);

 FUNC_6(VAR_19);
}
