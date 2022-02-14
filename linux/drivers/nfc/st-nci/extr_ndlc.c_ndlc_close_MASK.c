
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nci_mode_set_cmd {scalar_t__ mode; int cmd_type; } ;
struct llt_ndlc {int phy_id; TYPE_1__* ops; scalar_t__ powered; int ndev; } ;
typedef int __u8 ;
struct TYPE_2__ {int (* disable ) (int ) ;int (* enable ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct llt_ndlc *VAR_2)
{
 struct nci_mode_set_cmd VAR_3;

 VAR_3.cmd_type = VAR_1;
 VAR_3.mode = 0;


 VAR_2->ops->enable(VAR_2->phy_id);

 FUNC_0(VAR_2->ndev, VAR_0,
       sizeof(struct nci_mode_set_cmd), (__u8 *)&VAR_3);

 VAR_2->powered = 0;
 VAR_2->ops->disable(VAR_2->phy_id);
}
