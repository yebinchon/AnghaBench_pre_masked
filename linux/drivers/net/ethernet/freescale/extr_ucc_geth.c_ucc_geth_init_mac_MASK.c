
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucc_geth_private {TYPE_1__* ug_regs; struct net_device* ndev; } ;
struct net_device {int * dev_addr; } ;
struct TYPE_2__ {int macstnaddr2; int macstnaddr1; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucc_geth_private*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_2 (struct ucc_geth_private*,int ,struct net_device*,char*) ;
 int FUNC_3 (struct ucc_geth_private*) ;
 int FUNC_4 (struct ucc_geth_private*) ;
 int FUNC_5 (struct ucc_geth_private*) ;
 int FUNC_6 (struct ucc_geth_private*,int ) ;

__attribute__((used)) static int FUNC_7(struct ucc_geth_private *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->ndev;
 int VAR_4;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2, VAR_1, VAR_3, "Cannot configure internal struct, aborting\n");
  goto err;
 }

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2, VAR_1, VAR_3, "Cannot configure net device, aborting\n");
  goto err;
 }

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2, VAR_1, VAR_3, "Cannot configure net device, aborting\n");
  goto err;
 }



 FUNC_1(VAR_3->dev_addr[0],
       VAR_3->dev_addr[1],
       VAR_3->dev_addr[2],
       VAR_3->dev_addr[3],
       VAR_3->dev_addr[4],
       VAR_3->dev_addr[5],
       &VAR_2->ug_regs->macstnaddr1,
       &VAR_2->ug_regs->macstnaddr2);

 VAR_4 = FUNC_6(VAR_2, VAR_0);
 if (VAR_4) {
  FUNC_2(VAR_2, VAR_1, VAR_3, "Cannot enable net device, aborting\n");
  goto err;
 }

 return 0;
err:
 FUNC_4(VAR_2);
 return VAR_4;
}
