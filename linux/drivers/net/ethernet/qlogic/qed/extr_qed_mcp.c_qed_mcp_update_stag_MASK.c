
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct TYPE_8__ {int ovlan; int hw_mode; } ;
struct qed_hwfn {TYPE_4__ hw_info; TYPE_3__* mcp_info; TYPE_1__* cdev; } ;
struct public_func {scalar_t__ ovlan_stag; } ;
struct TYPE_6__ {int ovlan; } ;
struct TYPE_7__ {TYPE_2__ func_info; } ;
struct TYPE_5__ {int mf_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qed_hwfn*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int *,int *) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct public_func*,int ) ;
 int FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct qed_hwfn *VAR_9, struct qed_ptt *VAR_10)
{
 struct public_func VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0;

 FUNC_3(VAR_9, VAR_10, &VAR_11, FUNC_1(VAR_9));

 VAR_9->mcp_info->func_info.ovlan = (u16)VAR_11.ovlan_stag &
       VAR_3;
 VAR_9->hw_info.ovlan = VAR_9->mcp_info->func_info.ovlan;
 if (FUNC_6(VAR_7, &VAR_9->cdev->mf_bits)) {
  if (VAR_9->hw_info.ovlan != VAR_6) {
   FUNC_5(VAR_9, VAR_10, VAR_5,
          VAR_9->hw_info.ovlan);
   FUNC_5(VAR_9, VAR_10, VAR_4, 1);


   FUNC_5(VAR_9, VAR_10, VAR_1, 1);
   FUNC_5(VAR_9, VAR_10, VAR_0,
          VAR_9->hw_info.ovlan);
  } else {
   FUNC_5(VAR_9, VAR_10, VAR_4, 0);
   FUNC_5(VAR_9, VAR_10, VAR_5, 0);
   FUNC_5(VAR_9, VAR_10, VAR_1, 0);
   FUNC_5(VAR_9, VAR_10, VAR_0, 0);
  }

  FUNC_4(VAR_9);
 }

 FUNC_0(VAR_9, VAR_8, "ovlan = %d hw_mode = 0x%x\n",
     VAR_9->mcp_info->func_info.ovlan, VAR_9->hw_info.hw_mode);


 FUNC_2(VAR_9, VAR_10, VAR_2, 0,
      &VAR_12, &VAR_13);
}
