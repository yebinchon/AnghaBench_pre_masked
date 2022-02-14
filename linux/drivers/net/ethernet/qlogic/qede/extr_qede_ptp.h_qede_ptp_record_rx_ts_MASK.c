
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ pars_flags; } ;
union eth_rx_cqe {TYPE_2__ fast_path_regular; } ;
struct sk_buff {int dummy; } ;
struct qede_dev {int dummy; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct qede_dev*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct qede_dev *VAR_2,
      union eth_rx_cqe *VAR_3,
      struct sk_buff *VAR_4)
{

 if (FUNC_4(FUNC_1(VAR_3->fast_path_regular.pars_flags.flags) &
       (1 << VAR_0))) {
  if (FUNC_2(FUNC_1(VAR_3->fast_path_regular.pars_flags.flags)
      & (1 << VAR_1))) {
   FUNC_3(VAR_2, VAR_4);
  } else {
   FUNC_0(VAR_2,
    "Timestamp recorded for non PTP packets\n");
  }
 }
}
