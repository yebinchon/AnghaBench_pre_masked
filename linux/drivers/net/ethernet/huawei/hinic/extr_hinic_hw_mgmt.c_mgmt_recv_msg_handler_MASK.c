
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_recv_msg {size_t mod; int msg_id; int cmd; int async_mgmt_to_pf; int msg_len; int msg; int * buf_out; } ;
struct hinic_pf_to_mgmt {struct hinic_mgmt_cb* mgmt_cb; struct hinic_hwif* hwif; } ;
struct hinic_mgmt_cb {unsigned long state; int handle; int (* cb ) (int ,int ,int ,int ,int *,int *) ;} ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (struct hinic_pf_to_mgmt*,size_t,int ,int *,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct hinic_pf_to_mgmt *VAR_4,
      struct hinic_recv_msg *VAR_5)
{
 struct hinic_hwif *VAR_6 = VAR_4->hwif;
 struct pci_dev *VAR_7 = VAR_6->pdev;
 u8 *VAR_8 = VAR_5->buf_out;
 struct hinic_mgmt_cb *VAR_9;
 unsigned long VAR_10;
 u16 VAR_11 = 0;

 if (VAR_5->mod >= VAR_2) {
  FUNC_1(&VAR_7->dev, "Unknown MGMT MSG module = %d\n",
   VAR_5->mod);
  return;
 }

 VAR_9 = &VAR_4->mgmt_cb[VAR_5->mod];

 VAR_10 = FUNC_0(&VAR_9->state,
      VAR_0,
      VAR_0 | VAR_1);

 if ((VAR_10 == VAR_0) && (VAR_9->cb))
  VAR_9->cb(VAR_9->handle, VAR_5->cmd,
       VAR_5->msg, VAR_5->msg_len,
       VAR_8, &VAR_11);
 else
  FUNC_1(&VAR_7->dev, "No MGMT msg handler, mod = %d\n",
   VAR_5->mod);

 VAR_9->state &= ~VAR_1;

 if (!VAR_5->async_mgmt_to_pf)

  FUNC_2(VAR_4, VAR_5->mod, VAR_5->cmd,
      VAR_8, VAR_11, VAR_3,
      VAR_5->msg_id);
}
