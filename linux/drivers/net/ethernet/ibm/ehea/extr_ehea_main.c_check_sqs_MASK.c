
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_swqe {int immediate_data_length; int tx_control; int wr_id; } ;
struct ehea_port_res {scalar_t__ sq_restart_flag; int port; int qp; int swqe_avail; } ;
struct ehea_port {int num_def_qps; int restart_wq; struct ehea_port_res* port_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct ehea_swqe* FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,struct ehea_swqe*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ehea_swqe*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static void FUNC_8(struct ehea_port *VAR_5)
{
 struct ehea_swqe *VAR_6;
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_def_qps; VAR_8++) {
  struct ehea_port_res *VAR_9 = &VAR_5->port_res[VAR_8];
  int VAR_10;
  VAR_6 = FUNC_1(VAR_9->qp, &VAR_7);
  FUNC_4(VAR_6, 0, VAR_3);
  FUNC_0(&VAR_9->swqe_avail);

  VAR_6->tx_control |= VAR_1;
  VAR_6->wr_id = VAR_4;
  VAR_6->tx_control |= VAR_2;
  VAR_6->tx_control |= VAR_0;
  VAR_6->immediate_data_length = 80;

  FUNC_2(VAR_9->qp, VAR_6);

  VAR_10 = FUNC_7(VAR_5->restart_wq,
      VAR_9->sq_restart_flag == 0,
      FUNC_5(100));

  if (!VAR_10) {
   FUNC_6("HW/SW queues out of sync\n");
   FUNC_3(VAR_9->port);
   return;
  }
 }
}
