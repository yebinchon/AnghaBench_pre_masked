
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_swqe {int tx_control; } ;
struct ehea_qp_init_attr {int act_nr_send_wqes; } ;
struct ehea_qp {struct ehea_qp_init_attr init_attr; } ;


 int VAR_0 ;
 struct ehea_swqe* FUNC_0 (struct ehea_qp*,int*) ;

__attribute__((used)) static void FUNC_1(struct ehea_qp *VAR_1)
{
 struct ehea_qp VAR_2 = *VAR_1;
 struct ehea_qp_init_attr *VAR_3 = &VAR_2.init_attr;
 struct ehea_swqe *VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->act_nr_send_wqes; VAR_6++) {
  VAR_4 = FUNC_0(&VAR_2, &VAR_5);
  VAR_4->tx_control |= VAR_0;
 }
}
