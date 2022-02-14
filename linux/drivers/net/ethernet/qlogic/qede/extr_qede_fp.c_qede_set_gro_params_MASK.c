
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct qede_dev {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct eth_fast_path_rx_tpa_start_cqe {scalar_t__ header_len; int len_on_first_bd; TYPE_1__ pars_flags; } ;
struct TYPE_4__ {scalar_t__ gso_size; int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct qede_dev *VAR_4,
    struct sk_buff *VAR_5,
    struct eth_fast_path_rx_tpa_start_cqe *VAR_6)
{
 u16 VAR_7 = FUNC_1(VAR_6->pars_flags.flags);

 if (((VAR_7 >> VAR_1) &
     VAR_0) == 2)
  FUNC_2(VAR_5)->gso_type = VAR_3;
 else
  FUNC_2(VAR_5)->gso_type = VAR_2;

 FUNC_2(VAR_5)->gso_size = FUNC_0(VAR_6->len_on_first_bd) -
        VAR_6->header_len;
}
