
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_rx_queue {int dummy; } ;
struct qede_dev {int dummy; } ;
struct eth_fast_path_rx_tpa_cont_cqe {scalar_t__* len_list; int tpa_agg_index; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qede_dev*,struct qede_rx_queue*,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct qede_dev *VAR_0,
     struct qede_rx_queue *VAR_1,
     struct eth_fast_path_rx_tpa_cont_cqe *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_2->len_list[VAR_3]; VAR_3++)
  FUNC_2(VAR_0, VAR_1, VAR_2->tpa_agg_index,
       FUNC_1(VAR_2->len_list[VAR_3]));

 if (FUNC_3(VAR_3 > 1))
  FUNC_0(VAR_0,
         "Strange - TPA cont with more than a single len_list entry\n");
}
