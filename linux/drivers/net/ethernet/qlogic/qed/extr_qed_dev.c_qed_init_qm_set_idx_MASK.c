
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ start_pq; } ;
struct qed_hwfn {TYPE_1__ qm_info; } ;


 scalar_t__* FUNC_0 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0,
    u32 VAR_1, u16 VAR_2)
{
 u16 *VAR_3 = FUNC_0(VAR_0, VAR_1);

 *VAR_3 = VAR_0->qm_info.start_pq + VAR_2;
}
