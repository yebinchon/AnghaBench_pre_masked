
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int cdev; } ;
struct eth_slow_path_rx_cqe {int echo; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_0,
         struct eth_slow_path_rx_cqe *VAR_1,
         enum protocol_type VAR_2)
{
 if (FUNC_0(VAR_0->cdev))
  return 0;





 return FUNC_1(VAR_0, VAR_1->echo, 0, ((void*)0));
}
