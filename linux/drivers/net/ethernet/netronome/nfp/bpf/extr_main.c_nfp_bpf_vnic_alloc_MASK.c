
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_pf {scalar_t__ max_data_vnics; TYPE_1__* eth_tbl; int cpp; } ;
struct nfp_net {struct nfp_bpf_vnic* app_priv; } ;
struct nfp_bpf_vnic {void* tgt_done; void* start_off; } ;
struct nfp_app {struct nfp_pf* pf; } ;
struct TYPE_2__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfp_bpf_vnic*) ;
 struct nfp_bpf_vnic* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nfp_app*,struct nfp_net*,unsigned int) ;
 int FUNC_3 (int ,char*,...) ;
 void* FUNC_4 (struct nfp_net*,int ) ;

__attribute__((used)) static int
FUNC_5(struct nfp_app *VAR_5, struct nfp_net *VAR_6, unsigned int VAR_7)
{
 struct nfp_pf *VAR_8 = VAR_5->pf;
 struct nfp_bpf_vnic *VAR_9;
 int VAR_10;

 if (!VAR_8->eth_tbl) {
  FUNC_3(VAR_8->cpp, "No ETH table\n");
  return -VAR_0;
 }
 if (VAR_8->max_data_vnics != VAR_8->eth_tbl->count) {
  FUNC_3(VAR_8->cpp, "ETH entries don't match vNICs (%d vs %d)\n",
   VAR_8->max_data_vnics, VAR_8->eth_tbl->count);
  return -VAR_0;
 }

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_6->app_priv = VAR_9;

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (VAR_10)
  goto err_free_priv;

 VAR_9->start_off = FUNC_4(VAR_6, VAR_4);
 VAR_9->tgt_done = FUNC_4(VAR_6, VAR_3);

 return 0;
err_free_priv:
 FUNC_0(VAR_6->app_priv);
 return VAR_10;
}
