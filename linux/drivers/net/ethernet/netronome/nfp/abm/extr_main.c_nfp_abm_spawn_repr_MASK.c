
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfp_reprs {int * reprs; } ;
struct nfp_repr {struct nfp_abm_link* app_priv; } ;
struct nfp_port {int eth_forced; int pf_split; size_t pf_split_id; int vnic; int pf_id; } ;
struct nfp_app {int cpp; TYPE_5__* pf; } ;
struct nfp_abm_link {size_t id; TYPE_4__* vnic; TYPE_1__* abm; } ;
struct net_device {int name; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;
typedef enum nfp_port_type { ____Placeholder_nfp_port_type } nfp_port_type ;
struct TYPE_10__ {int max_data_vnics; } ;
struct TYPE_8__ {int netdev; int ctrl_bar; } ;
struct TYPE_9__ {unsigned int max_rx_rings; TYPE_3__ dp; TYPE_2__* pdev; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int pf_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfp_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nfp_port*) ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct net_device*) ;
 struct nfp_repr* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,size_t) ;
 int FUNC_7 (int ,char*,char*,size_t,int ) ;
 struct nfp_port* FUNC_8 (struct nfp_app*,int,struct net_device*) ;
 int FUNC_9 (struct nfp_port*) ;
 int FUNC_10 (TYPE_5__*,struct nfp_app*,struct nfp_port*,size_t) ;
 struct net_device* FUNC_11 (struct nfp_app*,unsigned int,int) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct nfp_app*,struct nfp_reprs*,size_t) ;
 int FUNC_14 (struct nfp_app*,struct net_device*,int ,struct nfp_port*,int ) ;
 struct nfp_reprs* FUNC_15 (struct nfp_app*,int) ;
 int FUNC_16 (int ,struct net_device*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;

__attribute__((used)) static int
FUNC_19(struct nfp_app *VAR_5, struct nfp_abm_link *VAR_6,
     enum nfp_port_type VAR_7)
{
 struct net_device *VAR_8;
 enum nfp_repr_type VAR_9;
 struct nfp_reprs *VAR_10;
 struct nfp_repr *VAR_11;
 struct nfp_port *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 if (VAR_7 == VAR_2) {
  VAR_9 = VAR_4;
  VAR_13 = 1;
 } else {
  VAR_9 = VAR_3;
  VAR_13 = VAR_6->vnic->max_rx_rings;
 }

 VAR_8 = FUNC_11(VAR_5, VAR_13, 1);
 if (!VAR_8)
  return -VAR_0;
 VAR_11 = FUNC_5(VAR_8);
 VAR_11->app_priv = VAR_6;

 VAR_12 = FUNC_8(VAR_5, VAR_7, VAR_8);
 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_1(VAR_12);
  goto err_free_repr;
 }

 if (VAR_7 == VAR_2) {
  VAR_12->eth_forced = 1;
  VAR_14 = FUNC_10(VAR_5->pf, VAR_5, VAR_12, VAR_6->id);
  if (VAR_14)
   goto err_free_port;
 } else {
  VAR_12->pf_id = VAR_6->abm->pf_id;
  VAR_12->pf_split = VAR_5->pf->max_data_vnics > 1;
  VAR_12->pf_split_id = VAR_6->id;
  VAR_12->vnic = VAR_6->vnic->dp.ctrl_bar;
 }

 FUNC_2(VAR_8, &VAR_6->vnic->pdev->dev);
 FUNC_4(VAR_8);

 VAR_14 = FUNC_14(VAR_5, VAR_8, FUNC_6(VAR_9, VAR_6->id),
       VAR_12, VAR_6->vnic->dp.netdev);
 if (VAR_14)
  goto err_free_port;

 VAR_10 = FUNC_15(VAR_5, VAR_9);
 FUNC_3(FUNC_13(VAR_5, VAR_10, VAR_6->id), "duplicate repr");
 FUNC_17();
 FUNC_16(VAR_10->reprs[VAR_6->id], VAR_8);
 FUNC_18();

 FUNC_7(VAR_5->cpp, "%s Port %d Representor(%s) created\n",
   VAR_7 == VAR_1 ? "PCIe" : "Phys",
   VAR_6->id, VAR_8->name);

 return 0;

err_free_port:
 FUNC_9(VAR_12);
err_free_repr:
 FUNC_12(VAR_8);
 return VAR_14;
}
