
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct qed_iov_vf_init_params {size_t num_queues; size_t rel_vf_id; size_t* req_rx_queue; size_t* req_tx_queue; } ;
struct qed_hwfn {int dummy; } ;


 size_t FUNC_0 (struct qed_hwfn*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_1,
     u16 VAR_2,
     struct qed_iov_vf_init_params *VAR_3)
{
 u16 VAR_4, VAR_5;





 VAR_4 = FUNC_0(VAR_1, VAR_0) + VAR_2 * VAR_3->num_queues;

 VAR_3->rel_vf_id = VAR_2;
 for (VAR_5 = 0; VAR_5 < VAR_3->num_queues; VAR_5++) {
  VAR_3->req_rx_queue[VAR_5] = VAR_4 + VAR_5;
  VAR_3->req_tx_queue[VAR_5] = VAR_4 + VAR_5;
 }
}
