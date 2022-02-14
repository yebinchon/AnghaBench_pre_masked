
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int netdev; } ;
struct nfp_net {TYPE_2__ dp; int max_rx_rings; struct nfp_abm_link* app_priv; } ;
struct nfp_eth_table_port {int index; } ;
struct nfp_app {TYPE_3__* pf; int cpp; struct nfp_abm* priv; } ;
struct nfp_abm_link {unsigned int id; struct nfp_abm_link* prio_map; int qdiscs; int dscp_map; struct nfp_net* vnic; int total_queues; struct nfp_abm* abm; } ;
struct nfp_abm {int prio_map_len; } ;
struct TYPE_6__ {TYPE_1__* eth_tbl; } ;
struct TYPE_4__ {struct nfp_eth_table_port* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nfp_abm_link*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nfp_abm_link*) ;
 int FUNC_6 (TYPE_3__*,struct nfp_abm*,struct nfp_net*,unsigned int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct nfp_app *VAR_2, struct nfp_net *VAR_3, unsigned int VAR_4)
{
 struct nfp_eth_table_port *VAR_5 = &VAR_2->pf->eth_tbl->ports[VAR_4];
 struct nfp_abm *VAR_6 = VAR_2->priv;
 struct nfp_abm_link *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_3->app_priv = VAR_7;
 VAR_7->abm = VAR_6;
 VAR_7->vnic = VAR_3;
 VAR_7->id = VAR_4;
 VAR_7->total_queues = VAR_7->vnic->max_rx_rings;

 FUNC_0(&VAR_7->dscp_map);

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8)
  goto err_free_alink;

 VAR_7->prio_map = FUNC_3(VAR_6->prio_map_len, VAR_1);
 if (!VAR_7->prio_map)
  goto err_free_alink;




 VAR_8 = FUNC_7(VAR_2->cpp, VAR_5->index, 1);
 if (VAR_8 < 0)
  goto err_free_priomap;

 FUNC_4(VAR_3->dp.netdev);

 FUNC_6(VAR_2->pf, VAR_6, VAR_3, VAR_4);
 FUNC_1(&VAR_7->qdiscs, VAR_1);

 return 0;

err_free_priomap:
 FUNC_2(VAR_7->prio_map);
err_free_alink:
 FUNC_2(VAR_7);
 return VAR_8;
}
