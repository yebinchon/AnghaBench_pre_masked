
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qed_tunnel_info {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_function_info {scalar_t__ bandwidth_min; } ;
struct TYPE_6__ {int ovlan; scalar_t__ personality; } ;
struct TYPE_5__ {int pf_rl; scalar_t__ pf_wfq; } ;
struct qed_hwfn {TYPE_3__ hw_info; TYPE_2__ qm_info; TYPE_1__* mcp_info; int rel_pf_id; } ;
typedef enum qed_int_mode { ____Placeholder_qed_int_mode } qed_int_mode ;
struct TYPE_4__ {struct qed_mcp_function_info func_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (struct qed_hwfn*,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,char*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*,int,int) ;
 int FUNC_11 (struct qed_hwfn*) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_13 (struct qed_hwfn*,struct qed_ptt*,struct qed_tunnel_info*,int) ;
 int FUNC_14 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct qed_hwfn *VAR_16,
     struct qed_ptt *VAR_17,
     struct qed_tunnel_info *VAR_18,
     int VAR_19,
     bool VAR_20,
     enum qed_int_mode VAR_21,
     bool VAR_22)
{
 u8 VAR_23 = VAR_16->rel_pf_id;
 int VAR_24 = 0;

 if (VAR_16->mcp_info) {
  struct qed_mcp_function_info *VAR_25;

  VAR_25 = &VAR_16->mcp_info->func_info;
  if (VAR_25->bandwidth_min)
   VAR_16->qm_info.pf_wfq = VAR_25->bandwidth_min;


  VAR_16->qm_info.pf_rl = 100000;
 }

 FUNC_5(VAR_16, VAR_17);

 FUNC_11(VAR_16);


 if (VAR_19 & FUNC_0(VAR_0)) {
  FUNC_2(VAR_16, VAR_2, "Configuring LLH_FUNC_TAG\n");
  FUNC_4(VAR_16, VAR_5, 1);
  FUNC_4(VAR_16, VAR_6,
        VAR_16->hw_info.ovlan);

  FUNC_2(VAR_16, VAR_2,
      "Configuring LLH_FUNC_FILTER_HDR_SEL\n");
  FUNC_4(VAR_16, VAR_3,
        1);
 }


 if (VAR_19 & FUNC_0(VAR_1)) {
  FUNC_2(VAR_16, VAR_2,
      "Configuring TAGMAC_CLS_TYPE\n");
  FUNC_4(VAR_16,
        VAR_4, 1);
 }


 FUNC_4(VAR_16, VAR_13,
       (VAR_16->hw_info.personality == VAR_15) ? 1 : 0);
 FUNC_4(VAR_16, VAR_10,
       (VAR_16->hw_info.personality == VAR_14) ? 1 : 0);
 FUNC_4(VAR_16, VAR_11, 0);


 VAR_24 = FUNC_6(VAR_16, VAR_17, "pf_phase");
 if (VAR_24)
  return VAR_24;


 VAR_24 = FUNC_8(VAR_16, VAR_17, VAR_7, VAR_23, VAR_19);
 if (VAR_24)
  return VAR_24;


 VAR_24 = FUNC_8(VAR_16, VAR_17, VAR_8, VAR_23, VAR_19);
 if (VAR_24)
  return VAR_24;


 FUNC_10(VAR_16, VAR_17, 1, 1);

 VAR_24 = FUNC_7(VAR_16, VAR_17);
 if (VAR_24)
  return VAR_24;


 if (FUNC_3(VAR_16)) {
  VAR_24 = FUNC_12(VAR_16, VAR_17);
  if (VAR_24)
   return VAR_24;
 }

 if (VAR_20) {

  FUNC_9(VAR_16, VAR_17, VAR_21);


  VAR_24 = FUNC_13(VAR_16, VAR_17, VAR_18,
         VAR_22);
  if (VAR_24) {
   FUNC_1(VAR_16, "Function start ramrod failed\n");
   return VAR_24;
  }
  if (VAR_16->hw_info.personality == VAR_14) {
   FUNC_14(VAR_16, VAR_17, VAR_12, FUNC_0(2));
   FUNC_14(VAR_16, VAR_17,
          VAR_9,
          0x100);
  }
 }
 return VAR_24;
}
