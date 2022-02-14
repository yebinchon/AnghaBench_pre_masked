
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int type; int idx; int rss_table_size; int netdev_registered; int irqs_ready; int af_xdp_zc_qps; int mac_filter_hash_lock; int mac_filter_hash; int work_limit; scalar_t__ int_rate_limit; scalar_t__ flags; int state; struct i40e_pf* back; } ;
struct i40e_pf {int next_vsi; int num_alloc_vsi; int rss_table_size; int switch_mutex; struct i40e_vsi** vsi; int num_lan_qps; } ;
typedef enum i40e_vsi_type { ____Placeholder_i40e_vsi_type } i40e_vsi_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct i40e_vsi*) ;
 int FUNC_4 (struct i40e_vsi*,int) ;
 int FUNC_5 (struct i40e_vsi*,int ) ;
 int FUNC_6 (struct i40e_vsi*) ;
 struct i40e_vsi* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct i40e_pf *VAR_7, enum i40e_vsi_type VAR_8)
{
 int VAR_9 = -VAR_0;
 struct i40e_vsi *VAR_10;
 int VAR_11;
 int VAR_12;


 FUNC_8(&VAR_7->switch_mutex);







 VAR_12 = VAR_7->next_vsi;
 while (VAR_12 < VAR_7->num_alloc_vsi && VAR_7->vsi[VAR_12])
  VAR_12++;
 if (VAR_12 >= VAR_7->num_alloc_vsi) {
  VAR_12 = 0;
  while (VAR_12 < VAR_7->next_vsi && VAR_7->vsi[VAR_12])
   VAR_12++;
 }

 if (VAR_12 < VAR_7->num_alloc_vsi && !VAR_7->vsi[VAR_12]) {
  VAR_11 = VAR_12;
 } else {
  VAR_9 = -VAR_0;
  goto unlock_pf;
 }
 VAR_7->next_vsi = ++VAR_12;

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_9 = -VAR_1;
  goto unlock_pf;
 }
 VAR_10->type = VAR_8;
 VAR_10->back = VAR_7;
 FUNC_10(VAR_5, VAR_10->state);
 VAR_10->flags = 0;
 VAR_10->idx = VAR_11;
 VAR_10->int_rate_limit = 0;
 VAR_10->rss_table_size = (VAR_10->type == VAR_4) ?
    VAR_7->rss_table_size : 64;
 VAR_10->netdev_registered = 0;
 VAR_10->work_limit = VAR_3;
 FUNC_2(VAR_10->mac_filter_hash);
 VAR_10->irqs_ready = 0;

 if (VAR_8 == VAR_4) {
  VAR_10->af_xdp_zc_qps = FUNC_1(VAR_7->num_lan_qps, VAR_2);
  if (!VAR_10->af_xdp_zc_qps)
   goto err_rings;
 }

 VAR_9 = FUNC_3(VAR_10);
 if (VAR_9)
  goto err_rings;

 VAR_9 = FUNC_4(VAR_10, 1);
 if (VAR_9)
  goto err_rings;


 FUNC_5(VAR_10, VAR_6);


 FUNC_11(&VAR_10->mac_filter_hash_lock);
 VAR_7->vsi[VAR_11] = VAR_10;
 VAR_9 = VAR_11;
 goto unlock_pf;

err_rings:
 FUNC_0(VAR_10->af_xdp_zc_qps);
 VAR_7->next_vsi = VAR_12 - 1;
 FUNC_6(VAR_10);
unlock_pf:
 FUNC_9(&VAR_7->switch_mutex);
 return VAR_9;
}
