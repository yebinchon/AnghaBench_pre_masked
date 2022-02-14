
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_key_sz; int max_val_sz; } ;
struct nfp_app_bpf {int abi_version; int cmsg_key_sz; int cmsg_val_sz; int ccm; int maps_neutral; int bpf_dev; TYPE_1__ maps; int map_list; struct nfp_app* app; } ;
struct nfp_app {int ctrl_mtu; struct nfp_app_bpf* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct nfp_app_bpf*) ;
 int FUNC_3 (struct nfp_app_bpf*) ;
 struct nfp_app_bpf* FUNC_4 (int,int ) ;
 int FUNC_5 (struct nfp_app_bpf*) ;
 int VAR_4 ;
 int FUNC_6 (struct nfp_app_bpf*) ;
 int VAR_5 ;
 int FUNC_7 (struct nfp_app*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct nfp_app*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(struct nfp_app *VAR_6)
{
 struct nfp_app_bpf *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;
 VAR_7->app = VAR_6;
 VAR_6->priv = VAR_7;

 FUNC_0(&VAR_7->map_list);

 VAR_8 = FUNC_9(&VAR_7->ccm, VAR_6);
 if (VAR_8)
  goto err_free_bpf;

 VAR_8 = FUNC_11(&VAR_7->maps_neutral, &VAR_5);
 if (VAR_8)
  goto err_clean_ccm;

 FUNC_6(VAR_7);

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8)
  goto err_free_neutral_maps;

 if (VAR_7->abi_version < 3) {
  VAR_7->cmsg_key_sz = VAR_0 * 4;
  VAR_7->cmsg_val_sz = VAR_1 * 4;
 } else {
  VAR_7->cmsg_key_sz = VAR_7->maps.max_key_sz;
  VAR_7->cmsg_val_sz = VAR_7->maps.max_val_sz;
  VAR_6->ctrl_mtu = FUNC_5(VAR_7);
 }

 VAR_7->bpf_dev = FUNC_2(&VAR_4, VAR_7);
 VAR_8 = FUNC_1(VAR_7->bpf_dev);
 if (VAR_8)
  goto err_free_neutral_maps;

 return 0;

err_free_neutral_maps:
 FUNC_10(&VAR_7->maps_neutral);
err_clean_ccm:
 FUNC_8(&VAR_7->ccm);
err_free_bpf:
 FUNC_3(VAR_7);
 return VAR_8;
}
