
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {scalar_t__ txq_count; int txq_lock; int tx_filter_mode; } ;
struct siena_nic_data {struct siena_vf* vf; } ;
struct efx_nic {int vf_init_count; struct siena_nic_data* nic_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct efx_nic *VAR_4, int VAR_5,
        bool VAR_6)
{
 struct siena_nic_data *VAR_7 = VAR_4->nic_data;
 struct siena_vf *VAR_8;
 int VAR_9;

 if (VAR_5 >= VAR_4->vf_init_count)
  return -VAR_1;
 VAR_8 = VAR_7->vf + VAR_5;

 FUNC_0(&VAR_8->txq_lock);
 if (VAR_8->txq_count == 0) {
  VAR_8->tx_filter_mode =
   VAR_6 ? VAR_3 : VAR_2;
  VAR_9 = 0;
 } else {

  VAR_9 = -VAR_0;
 }
 FUNC_1(&VAR_8->txq_lock);
 return VAR_9;
}
