
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_vf {unsigned int index; int rx_filter_id; int tx_filter_id; int txq_lock; int status_lock; int flush_waitq; int reset_work; int req; int tx_filter_mode; struct efx_nic* efx; } ;
struct siena_nic_data {struct siena_vf* vf; } ;
struct efx_nic {unsigned int vf_count; struct siena_nic_data* nic_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct siena_vf* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_5)
{
 unsigned VAR_6;
 struct siena_vf *VAR_7;
 struct siena_nic_data *VAR_8 = VAR_5->nic_data;

 VAR_8->vf = FUNC_2(VAR_5->vf_count, sizeof(*VAR_8->vf),
          VAR_1);
 if (!VAR_8->vf)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5->vf_count; ++VAR_6) {
  VAR_7 = VAR_8->vf + VAR_6;

  VAR_7->efx = VAR_5;
  VAR_7->index = VAR_6;
  VAR_7->rx_filter_id = -1;
  VAR_7->tx_filter_mode = VAR_2;
  VAR_7->tx_filter_id = -1;
  FUNC_0(&VAR_7->req, VAR_4);
  FUNC_0(&VAR_7->reset_work, VAR_3);
  FUNC_1(&VAR_7->flush_waitq);
  FUNC_3(&VAR_7->status_lock);
  FUNC_3(&VAR_7->txq_lock);
 }

 return 0;
}
