
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_7__ {int (* connect ) (struct fm10k_hw*,TYPE_4__*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct fm10k_vf_info {TYPE_4__ mbx; } ;
struct fm10k_iov_data {struct fm10k_vf_info* vf_info; } ;
struct TYPE_5__ {int (* set_lport ) (struct fm10k_hw*,struct fm10k_vf_info*,int,int ) ;int (* reset_resources ) (struct fm10k_hw*,struct fm10k_vf_info*) ;int (* reset_lport ) (struct fm10k_hw*,struct fm10k_vf_info*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ iov; } ;
struct fm10k_intfc {struct fm10k_iov_data* iov_data; struct fm10k_hw hw; struct pci_dev* pdev; } ;
struct fm10k_fault {int func; int specinfo; int address; int type; } ;


 int FUNC_0 (int ) ;



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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int *,char*,char*,int ,int ,int ,int ) ;
 int FUNC_4 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_5 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_6 (struct fm10k_hw*,struct fm10k_vf_info*,int,int ) ;
 int FUNC_7 (struct fm10k_hw*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(struct fm10k_intfc *VAR_21, int VAR_22,
          struct fm10k_fault *VAR_23)
{
 struct pci_dev *VAR_24 = VAR_21->pdev;
 struct fm10k_hw *VAR_25 = &VAR_21->hw;
 struct fm10k_iov_data *VAR_26 = VAR_21->iov_data;
 char *VAR_27;

 switch (VAR_22) {
 case 129:
  switch (VAR_23->type) {
  default:
   VAR_27 = "Unknown PCA error";
   break;
  FUNC_0(VAR_15);
  FUNC_0(VAR_18);
  FUNC_0(VAR_12);
  FUNC_0(VAR_13);
  FUNC_0(VAR_14);
  FUNC_0(VAR_16);
  FUNC_0(VAR_17);
  }
  break;
 case 128:
  switch (VAR_23->type) {
  default:
   VAR_27 = "Unknown THI error";
   break;
  FUNC_0(VAR_20);
  FUNC_0(VAR_19);
  }
  break;
 case 130:
  switch (VAR_23->type) {
  default:
   VAR_27 = "Unknown FUM error";
   break;
  FUNC_0(VAR_8);
  FUNC_0(VAR_11);
  FUNC_0(VAR_2);
  FUNC_0(VAR_1);
  FUNC_0(VAR_10);
  FUNC_0(VAR_9);
  FUNC_0(VAR_3);
  FUNC_0(VAR_7);
  FUNC_0(VAR_6);
  FUNC_0(VAR_5);
  FUNC_0(VAR_4);
  }
  break;
 default:
  VAR_27 = "Undocumented fault";
  break;
 }

 FUNC_3(&VAR_24->dev,
   "%s Address: 0x%llx SpecInfo: 0x%x Func: %02x.%0x\n",
   VAR_27, VAR_23->address, VAR_23->specinfo,
   FUNC_2(VAR_23->func), FUNC_1(VAR_23->func));
 if (VAR_23->func && VAR_26) {
  int VAR_28 = VAR_23->func - 1;
  struct fm10k_vf_info *VAR_29 = &VAR_26->vf_info[VAR_28];

  VAR_25->iov.ops.reset_lport(VAR_25, VAR_29);
  VAR_25->iov.ops.reset_resources(VAR_25, VAR_29);


  VAR_25->iov.ops.set_lport(VAR_25, VAR_29, VAR_28,
          VAR_0);


  VAR_29->mbx.ops.connect(VAR_25, &VAR_29->mbx);
 }
}
