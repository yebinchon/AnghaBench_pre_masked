
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qed_iwarp_ep {scalar_t__ connect_mode; int * syn; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {scalar_t__ ll2_syn_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,int *,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_iwarp_ep*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_iwarp_ep*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_iwarp_ep*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct qed_hwfn *VAR_2,
      struct qed_iwarp_ep *VAR_3, u8 VAR_4)
{
 u8 VAR_5 = VAR_2->p_rdma_info->iwarp.ll2_syn_handle;

 if (VAR_3->connect_mode == VAR_1) {

  FUNC_0(VAR_2, VAR_3->syn, VAR_5);

  VAR_3->syn = ((void*)0);


  if (VAR_4 == VAR_0)
   FUNC_2(VAR_2, VAR_3);
  else
   FUNC_3(VAR_2, VAR_3,
          VAR_4);
 } else {
  if (VAR_4 == VAR_0)
   FUNC_1(VAR_2, VAR_3);
  else
   FUNC_3(VAR_2, VAR_3,
          VAR_4);
 }
}
