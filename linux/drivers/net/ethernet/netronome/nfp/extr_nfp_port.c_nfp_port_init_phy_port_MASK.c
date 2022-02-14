
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_port {int eth_id; scalar_t__ eth_stats; TYPE_1__* eth_port; int type; } ;
struct nfp_pf {scalar_t__ mac_stats_mem; TYPE_2__* eth_tbl; } ;
struct nfp_app {int cpp; } ;
struct TYPE_4__ {unsigned int count; TYPE_1__* ports; } ;
struct TYPE_3__ {int index; scalar_t__ override_changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct nfp_pf *VAR_3, struct nfp_app *VAR_4,
      struct nfp_port *VAR_5, unsigned int VAR_6)
{

 if (!VAR_3->eth_tbl || VAR_6 >= VAR_3->eth_tbl->count) {
  FUNC_0(VAR_4->cpp,
   "NSP port entries don't match vNICs (no entry %d)\n",
   VAR_6);
  return -VAR_0;
 }
 if (VAR_3->eth_tbl->ports[VAR_6].override_changed) {
  FUNC_1(VAR_4->cpp,
    "Config changed for port #%d, reboot required before port will be operational\n",
    VAR_3->eth_tbl->ports[VAR_6].index);
  VAR_5->type = VAR_2;
  return 0;
 }

 VAR_5->eth_port = &VAR_3->eth_tbl->ports[VAR_6];
 VAR_5->eth_id = VAR_3->eth_tbl->ports[VAR_6].index;
 if (VAR_3->mac_stats_mem)
  VAR_5->eth_stats =
   VAR_3->mac_stats_mem + VAR_5->eth_id * VAR_1;

 return 0;
}
