
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nfp_pf {int cpp; TYPE_1__* eth_tbl; } ;
struct nfp_nsp {int dummy; } ;
struct TYPE_5__ {TYPE_3__* netdev; } ;
struct nfp_net {TYPE_2__ dp; } ;
struct nfp_eth_table_port {int eth_index; } ;
struct nfp_abm {int pf_id; } ;
typedef int hwinfo ;
struct TYPE_6__ {int perm_addr; int dev_addr; } ;
struct TYPE_4__ {unsigned int count; struct nfp_eth_table_port* ports; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfp_nsp*) ;
 char* FUNC_1 (struct nfp_nsp*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct nfp_nsp*) ;
 int FUNC_5 (struct nfp_nsp*) ;
 int FUNC_6 (struct nfp_nsp*,char*,int) ;
 struct nfp_nsp* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*,int,char*,int,int) ;
 int FUNC_10 (char*,char*,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_11(struct nfp_pf *VAR_1, struct nfp_abm *VAR_2, struct nfp_net *VAR_3,
       unsigned int VAR_4)
{
 struct nfp_eth_table_port *VAR_5 = &VAR_1->eth_tbl->ports[VAR_4];
 u8 VAR_6[VAR_0];
 struct nfp_nsp *VAR_7;
 char VAR_8[32];
 int VAR_9;

 if (VAR_4 > VAR_1->eth_tbl->count) {
  FUNC_8(VAR_1->cpp, "No entry for persistent MAC address\n");
  FUNC_2(VAR_3->dp.netdev);
  return;
 }

 FUNC_9(VAR_8, sizeof(VAR_8), "eth%u.mac.pf%u",
   VAR_5->eth_index, VAR_2->pf_id);

 VAR_7 = FUNC_7(VAR_1->cpp);
 if (FUNC_0(VAR_7)) {
  FUNC_8(VAR_1->cpp, "Failed to access the NSP for persistent MAC address: %ld\n",
    FUNC_1(VAR_7));
  FUNC_2(VAR_3->dp.netdev);
  return;
 }

 if (!FUNC_5(VAR_7)) {
  FUNC_8(VAR_1->cpp, "NSP doesn't support PF MAC generation\n");
  FUNC_2(VAR_3->dp.netdev);
  return;
 }

 VAR_9 = FUNC_6(VAR_7, VAR_8, sizeof(VAR_8));
 FUNC_4(VAR_7);
 if (VAR_9) {
  FUNC_8(VAR_1->cpp, "Reading persistent MAC address failed: %d\n",
    VAR_9);
  FUNC_2(VAR_3->dp.netdev);
  return;
 }

 if (FUNC_10(VAR_8, "%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx",
     &VAR_6[0], &VAR_6[1], &VAR_6[2],
     &VAR_6[3], &VAR_6[4], &VAR_6[5]) != 6) {
  FUNC_8(VAR_1->cpp, "Can't parse persistent MAC address (%s)\n",
    VAR_8);
  FUNC_2(VAR_3->dp.netdev);
  return;
 }

 FUNC_3(VAR_3->dp.netdev->dev_addr, VAR_6);
 FUNC_3(VAR_3->dp.netdev->perm_addr, VAR_6);
}
