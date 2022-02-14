
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfc_hci_dev {int dummy; } ;
struct microread_info {int phy_id; TYPE_1__* phy_ops; } ;
struct TYPE_2__ {int (* write ) (int ,struct sk_buff*) ;} ;


 struct microread_info* FUNC_0 (struct nfc_hci_dev*) ;
 int FUNC_1 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct microread_info *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->phy_ops->write(VAR_2->phy_id, VAR_1);
}
