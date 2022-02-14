
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qed_dev {size_t num_hwfns; int * hwfns; } ;
struct eth_slow_path_rx_cqe {int dummy; } ;


 int FUNC_0 (int *,struct eth_slow_path_rx_cqe*) ;

__attribute__((used)) static int FUNC_1(struct qed_dev *VAR_0,
     u8 VAR_1, struct eth_slow_path_rx_cqe *VAR_2)
{
 return FUNC_0(&VAR_0->hwfns[VAR_1 % VAR_0->num_hwfns],
          VAR_2);
}
