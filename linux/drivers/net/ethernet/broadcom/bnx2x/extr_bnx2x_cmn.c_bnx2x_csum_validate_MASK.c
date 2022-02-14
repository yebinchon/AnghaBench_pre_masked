
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status_flags; int type_error_flags; } ;
union eth_rx_cqe {TYPE_1__ fast_path_cqe; } ;
struct sk_buff {int ip_summed; } ;
struct bnx2x_fastpath {int dummy; } ;
struct bnx2x_eth_q_stats {int hw_csum_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_0(struct sk_buff *VAR_4, union eth_rx_cqe *VAR_5,
     struct bnx2x_fastpath *VAR_6,
     struct bnx2x_eth_q_stats *VAR_7)
{





 if (VAR_5->fast_path_cqe.status_flags &
     VAR_3)
  return;



 if (VAR_5->fast_path_cqe.type_error_flags &
     (VAR_1 |
      VAR_2))
  VAR_7->hw_csum_err++;
 else
  VAR_4->ip_summed = VAR_0;
}
