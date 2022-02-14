
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union eth_rx_cqe {int fast_path_tpa_end; int fast_path_tpa_cont; int fast_path_tpa_start; } ;
struct qede_rx_queue {int dummy; } ;
struct qede_fastpath {int dummy; } ;
struct qede_dev {int dummy; } ;
typedef enum eth_rx_cqe_type { ____Placeholder_eth_rx_cqe_type } eth_rx_cqe_type ;





 int FUNC_0 (struct qede_dev*,struct qede_rx_queue*,int *) ;
 int FUNC_1 (struct qede_dev*,struct qede_fastpath*,int *) ;
 int FUNC_2 (struct qede_dev*,struct qede_rx_queue*,int *) ;

__attribute__((used)) static int FUNC_3(struct qede_dev *VAR_0,
       struct qede_fastpath *VAR_1,
       struct qede_rx_queue *VAR_2,
       union eth_rx_cqe *VAR_3,
       enum eth_rx_cqe_type VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_2(VAR_0, VAR_2, &VAR_3->fast_path_tpa_start);
  return 0;
 case 130:
  FUNC_0(VAR_0, VAR_2, &VAR_3->fast_path_tpa_cont);
  return 0;
 case 129:
  return FUNC_1(VAR_0, VAR_1, &VAR_3->fast_path_tpa_end);
 default:
  return 0;
 }
}
