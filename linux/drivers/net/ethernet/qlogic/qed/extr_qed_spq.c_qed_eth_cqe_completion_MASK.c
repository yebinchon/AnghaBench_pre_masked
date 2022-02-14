
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int dummy; } ;
struct eth_slow_path_rx_cqe {int ramrod_cmd_id; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct eth_slow_path_rx_cqe*,int ) ;

int FUNC_2(struct qed_hwfn *VAR_1,
      struct eth_slow_path_rx_cqe *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 if (VAR_3)
  FUNC_0(VAR_1,
     "Failed to handle RXQ CQE [cmd 0x%02x]\n",
     VAR_2->ramrod_cmd_id);

 return VAR_3;
}
