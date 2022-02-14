
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {size_t lan_vsi; int hw_features; int flags; scalar_t__ wol_en; TYPE_1__* pdev; int state; int * vsi; int service_task; int service_timer; struct i40e_hw hw; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct i40e_pf*) ;
 int FUNC_3 (struct i40e_pf*) ;
 int FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (struct i40e_pf*) ;
 int FUNC_6 (struct i40e_pf*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct i40e_pf*,int) ;
 struct i40e_pf* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,scalar_t__) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_17(struct pci_dev *VAR_12)
{
 struct i40e_pf *VAR_13 = FUNC_9(VAR_12);
 struct i40e_hw *VAR_14 = &VAR_13->hw;

 FUNC_14(VAR_10, VAR_13->state);
 FUNC_14(VAR_8, VAR_13->state);

 FUNC_1(&VAR_13->service_timer);
 FUNC_0(&VAR_13->service_task);
 FUNC_4(VAR_13);
 FUNC_6(VAR_13);




 FUNC_7(VAR_13->vsi[VAR_13->lan_vsi], 0);

 if (VAR_13->wol_en && (VAR_13->hw_features & VAR_1))
  FUNC_5(VAR_13);

 FUNC_8(VAR_13, 0);

 FUNC_16(VAR_14, VAR_2,
      (VAR_13->wol_en ? VAR_3 : 0));
 FUNC_16(VAR_14, VAR_4,
      (VAR_13->wol_en ? VAR_5 : 0));


 if (FUNC_15(VAR_9, VAR_13->state) &&
     !(VAR_13->flags & VAR_0))
  FUNC_2(VAR_13->pdev->irq, VAR_13);





 FUNC_12();
 FUNC_3(VAR_13);
 FUNC_13();

 if (VAR_11 == VAR_7) {
  FUNC_11(VAR_12, VAR_13->wol_en);
  FUNC_10(VAR_12, VAR_6);
 }
}
