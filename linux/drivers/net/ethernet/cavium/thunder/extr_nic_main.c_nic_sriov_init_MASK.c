
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct nicpf {int num_vf_en; int flags; scalar_t__ num_sqs_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct nicpf*,int) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_4, struct nicpf *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 u16 VAR_9;

 VAR_6 = FUNC_4(VAR_4, VAR_2);
 if (!VAR_6) {
  FUNC_0(&VAR_4->dev, "SRIOV capability is not found in PCIe config space\n");
  return -VAR_0;
 }

 FUNC_5(VAR_4, (VAR_6 + VAR_3), &VAR_9);
 if (VAR_9 < VAR_5->num_vf_en)
  VAR_5->num_vf_en = VAR_9;

 if (!VAR_9)
  return 0;

 VAR_7 = VAR_5->num_vf_en;
 VAR_5->num_sqs_en = FUNC_2(VAR_5, VAR_5->num_vf_en);
 VAR_7 += VAR_5->num_sqs_en;

 VAR_8 = FUNC_3(VAR_4, VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_4->dev, "SRIOV enable failed, num VF is %d\n",
   VAR_7);
  VAR_5->num_vf_en = 0;
  return VAR_8;
 }

 FUNC_1(&VAR_4->dev, "SRIOV enabled, number of VF available %d\n",
   VAR_7);

 VAR_5->flags |= VAR_1;
 return 0;
}
