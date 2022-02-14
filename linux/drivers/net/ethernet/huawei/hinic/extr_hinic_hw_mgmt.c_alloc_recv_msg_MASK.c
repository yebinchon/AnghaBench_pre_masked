
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_recv_msg {void* buf_out; void* msg; } ;
struct hinic_pf_to_mgmt {struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hinic_pf_to_mgmt *VAR_3,
     struct hinic_recv_msg *VAR_4)
{
 struct hinic_hwif *VAR_5 = VAR_3->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;

 VAR_4->msg = FUNC_0(&VAR_6->dev, VAR_2,
         VAR_1);
 if (!VAR_4->msg)
  return -VAR_0;

 VAR_4->buf_out = FUNC_0(&VAR_6->dev, VAR_2,
      VAR_1);
 if (!VAR_4->buf_out)
  return -VAR_0;

 return 0;
}
