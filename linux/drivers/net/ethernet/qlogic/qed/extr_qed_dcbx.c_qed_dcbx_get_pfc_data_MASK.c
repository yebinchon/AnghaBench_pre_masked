
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {int* prio; void* enabled; void* max_tc; void* willing; } ;
struct qed_dcbx_params {TYPE_1__ pfc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,void*,int,void*,void*) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_2(struct qed_hwfn *VAR_13,
        u32 VAR_14, struct qed_dcbx_params *VAR_15)
{
 u8 VAR_16;

 VAR_15->pfc.willing = FUNC_1(VAR_14, VAR_11);
 VAR_15->pfc.max_tc = FUNC_1(VAR_14, VAR_0);
 VAR_15->pfc.enabled = FUNC_1(VAR_14, VAR_1);
 VAR_16 = FUNC_1(VAR_14, VAR_2);
 VAR_15->pfc.prio[0] = !!(VAR_16 & VAR_3);
 VAR_15->pfc.prio[1] = !!(VAR_16 & VAR_4);
 VAR_15->pfc.prio[2] = !!(VAR_16 & VAR_5);
 VAR_15->pfc.prio[3] = !!(VAR_16 & VAR_6);
 VAR_15->pfc.prio[4] = !!(VAR_16 & VAR_7);
 VAR_15->pfc.prio[5] = !!(VAR_16 & VAR_8);
 VAR_15->pfc.prio[6] = !!(VAR_16 & VAR_9);
 VAR_15->pfc.prio[7] = !!(VAR_16 & VAR_10);

 FUNC_0(VAR_13, VAR_12,
     "PFC params: willing %d, pfc_bitmap %u max_tc = %u enabled = %d\n",
     VAR_15->pfc.willing, VAR_16, VAR_15->pfc.max_tc,
     VAR_15->pfc.enabled);
}
