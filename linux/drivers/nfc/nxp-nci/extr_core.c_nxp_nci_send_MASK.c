
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nxp_nci_info {scalar_t__ mode; int phy_id; TYPE_1__* phy_ops; } ;
struct nci_dev {int dummy; } ;
struct TYPE_2__ {int (* write ) (int ,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct nxp_nci_info* FUNC_1 (struct nci_dev*) ;
 int FUNC_2 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct nci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct nxp_nci_info *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 if (!VAR_5->phy_ops->write) {
  VAR_6 = -VAR_1;
  goto send_exit;
 }

 if (VAR_5->mode != VAR_2) {
  VAR_6 = -VAR_0;
  goto send_exit;
 }

 VAR_6 = VAR_5->phy_ops->write(VAR_5->phy_id, VAR_4);
 if (VAR_6 < 0)
  FUNC_0(VAR_4);

send_exit:
 return VAR_6;
}
