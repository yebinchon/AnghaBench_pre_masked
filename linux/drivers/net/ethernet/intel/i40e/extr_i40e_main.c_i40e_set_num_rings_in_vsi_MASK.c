
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int type; int alloc_queue_pairs; int num_q_vectors; void* num_rx_desc; void* num_tx_desc; struct i40e_pf* back; } ;
struct i40e_pf {int num_lan_qps; int flags; int num_lan_msix; int num_fdsb_msix; int num_vmdq_qps; int num_vmdq_msix; int num_vf_qps; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct i40e_vsi *VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_5->back;

 switch (VAR_5->type) {
 case 130:
  VAR_5->alloc_queue_pairs = VAR_6->num_lan_qps;
  if (!VAR_5->num_tx_desc)
   VAR_5->num_tx_desc = FUNC_0(VAR_1,
       VAR_4);
  if (!VAR_5->num_rx_desc)
   VAR_5->num_rx_desc = FUNC_0(VAR_1,
       VAR_4);
  if (VAR_6->flags & VAR_3)
   VAR_5->num_q_vectors = VAR_6->num_lan_msix;
  else
   VAR_5->num_q_vectors = 1;

  break;

 case 131:
  VAR_5->alloc_queue_pairs = 1;
  VAR_5->num_tx_desc = FUNC_0(VAR_2,
      VAR_4);
  VAR_5->num_rx_desc = FUNC_0(VAR_2,
      VAR_4);
  VAR_5->num_q_vectors = VAR_6->num_fdsb_msix;
  break;

 case 128:
  VAR_5->alloc_queue_pairs = VAR_6->num_vmdq_qps;
  if (!VAR_5->num_tx_desc)
   VAR_5->num_tx_desc = FUNC_0(VAR_1,
       VAR_4);
  if (!VAR_5->num_rx_desc)
   VAR_5->num_rx_desc = FUNC_0(VAR_1,
       VAR_4);
  VAR_5->num_q_vectors = VAR_6->num_vmdq_msix;
  break;

 case 129:
  VAR_5->alloc_queue_pairs = VAR_6->num_vf_qps;
  if (!VAR_5->num_tx_desc)
   VAR_5->num_tx_desc = FUNC_0(VAR_1,
       VAR_4);
  if (!VAR_5->num_rx_desc)
   VAR_5->num_rx_desc = FUNC_0(VAR_1,
       VAR_4);
  break;

 default:
  FUNC_1(1);
  return -VAR_0;
 }

 return 0;
}
