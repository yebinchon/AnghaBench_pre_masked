
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {scalar_t__ max_queue_zones; scalar_t__ queue_zone_base; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct qed_hwfn *VAR_4;
 u16 VAR_5;
 u32 VAR_6;

 VAR_4 = (struct qed_hwfn *)VAR_1;

 if (VAR_2 > VAR_4->p_rdma_info->max_queue_zones) {
  FUNC_0(VAR_4,
     "queue zone offset %d is too large (max is %d)\n",
     VAR_2, VAR_4->p_rdma_info->max_queue_zones);
  return;
 }

 VAR_5 = VAR_4->p_rdma_info->queue_zone_base + VAR_2;
 VAR_6 = VAR_0 +
        FUNC_2(VAR_5);

 FUNC_1(VAR_4, VAR_6, VAR_3);


 FUNC_3();
}
