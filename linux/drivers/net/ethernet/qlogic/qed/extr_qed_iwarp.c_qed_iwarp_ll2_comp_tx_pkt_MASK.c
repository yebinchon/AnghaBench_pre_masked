
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qed_iwarp_ll2_buff {struct qed_iwarp_ll2_buff* piggy_buf; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {scalar_t__ ll2_mpa_handle; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_iwarp_ll2_buff*,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, u8 VAR_1,
          void *VAR_2, dma_addr_t VAR_3,
          bool VAR_4, bool VAR_5)
{
 struct qed_iwarp_ll2_buff *VAR_6 = VAR_2;
 struct qed_iwarp_ll2_buff *VAR_7;
 struct qed_hwfn *VAR_8 = VAR_0;

 if (!VAR_6)
  return;


 VAR_7 = VAR_6->piggy_buf;
 if (VAR_7) {
  VAR_6->piggy_buf = ((void*)0);
  FUNC_0(VAR_8, VAR_7, VAR_1);
 }

 FUNC_0(VAR_8, VAR_6, VAR_1);

 if (VAR_1 == VAR_8->p_rdma_info->iwarp.ll2_mpa_handle)
  FUNC_1(VAR_8);

 return;
}
