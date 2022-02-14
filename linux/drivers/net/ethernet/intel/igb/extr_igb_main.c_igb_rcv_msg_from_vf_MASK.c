
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vf_data_storage {int flags; int pf_vlan; scalar_t__ last_nack; } ;
struct pci_dev {int dev; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct vf_data_storage* vf_data; struct e1000_hw hw; struct pci_dev* pdev; } ;
typedef int s32 ;


 int VAR_0 ;
 size_t VAR_1 ;





 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (struct e1000_hw*,size_t*,int,size_t,int) ;
 int FUNC_3 (struct igb_adapter*,size_t*,size_t) ;
 int FUNC_4 (struct igb_adapter*,size_t*,size_t) ;
 int FUNC_5 (struct igb_adapter*,size_t*,size_t) ;
 int FUNC_6 (struct igb_adapter*,size_t,size_t) ;
 int FUNC_7 (struct igb_adapter*,size_t*,size_t) ;
 int FUNC_8 (struct e1000_hw*,size_t) ;
 int FUNC_9 (struct igb_adapter*,size_t) ;
 int FUNC_10 (struct e1000_hw*,size_t*,int,size_t) ;
 int VAR_7 ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct igb_adapter *VAR_8, u32 VAR_9)
{
 struct pci_dev *VAR_10 = VAR_8->pdev;
 u32 VAR_11[VAR_0];
 struct e1000_hw *VAR_12 = &VAR_8->hw;
 struct vf_data_storage *VAR_13 = &VAR_8->vf_data[VAR_9];
 s32 VAR_14;

 VAR_14 = FUNC_2(VAR_12, VAR_11, VAR_0, VAR_9, 0);

 if (VAR_14) {

  FUNC_0(&VAR_10->dev, "Error receiving message from VF\n");
  VAR_13->flags &= ~VAR_6;
  if (!FUNC_11(VAR_7, VAR_13->last_nack + (2 * VAR_5)))
   goto unlock;
  goto out;
 }


 if (VAR_11[0] & (VAR_2 | VAR_4))
  goto unlock;




 if (VAR_11[0] == VAR_1) {

  FUNC_9(VAR_8, VAR_9);
  return;
 }

 if (!(VAR_13->flags & VAR_6)) {
  if (!FUNC_11(VAR_7, VAR_13->last_nack + (2 * VAR_5)))
   goto unlock;
  VAR_14 = -1;
  goto out;
 }

 switch ((VAR_11[0] & 0xFFFF)) {
 case 131:
  VAR_14 = FUNC_3(VAR_8, VAR_11, VAR_9);
  break;
 case 129:
  VAR_14 = FUNC_5(VAR_8, VAR_11, VAR_9);
  break;
 case 130:
  VAR_14 = FUNC_4(VAR_8, VAR_11, VAR_9);
  break;
 case 132:
  VAR_14 = FUNC_6(VAR_8, VAR_11[1], VAR_9);
  break;
 case 128:
  VAR_14 = -1;
  if (VAR_13->pf_vlan)
   FUNC_1(&VAR_10->dev,
     "VF %d attempted to override administratively set VLAN tag\nReload the VF driver to resume operations\n",
     VAR_9);
  else
   VAR_14 = FUNC_7(VAR_8, VAR_11, VAR_9);
  break;
 default:
  FUNC_0(&VAR_10->dev, "Unhandled Msg %08x\n", VAR_11[0]);
  VAR_14 = -1;
  break;
 }

 VAR_11[0] |= VAR_3;
out:

 if (VAR_14)
  VAR_11[0] |= VAR_4;
 else
  VAR_11[0] |= VAR_2;


 FUNC_10(VAR_12, VAR_11, 1, VAR_9);
 return;

unlock:
 FUNC_8(VAR_12, VAR_9);
}
