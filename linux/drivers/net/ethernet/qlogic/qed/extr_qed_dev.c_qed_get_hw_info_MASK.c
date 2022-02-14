
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qed_ptt {int dummy; } ;
struct TYPE_4__ {scalar_t__ ovlan; int personality; int multi_tc_roce_en; int num_active_tc; int mtu; int num_hw_tc; int hw_mac_addr; } ;
struct qed_hwfn {TYPE_3__* mcp_info; TYPE_1__ hw_info; } ;
typedef enum qed_pci_personality { ____Placeholder_qed_pci_personality } qed_pci_personality ;
struct TYPE_5__ {scalar_t__ ovlan; int protocol; int mtu; int mac; } ;
struct TYPE_6__ {TYPE_2__ func_info; } ;


 scalar_t__ FUNC_0 (struct qed_hwfn*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_10 (struct qed_hwfn*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*) ;
 scalar_t__ FUNC_13 (struct qed_hwfn*) ;
 int FUNC_14 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int
FUNC_15(struct qed_hwfn *VAR_2,
  struct qed_ptt *VAR_3,
  enum qed_pci_personality VAR_4)
{
 int VAR_5;


 if (FUNC_0(VAR_2)) {
  VAR_5 = FUNC_10(VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 if (FUNC_0(VAR_2))
  FUNC_8(VAR_2, VAR_3);

 FUNC_12(VAR_2, VAR_3);

 FUNC_6(VAR_2, VAR_3);

 VAR_5 = FUNC_9(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 if (FUNC_13(VAR_2))
  FUNC_3(VAR_2->hw_info.hw_mac_addr,
    VAR_2->mcp_info->func_info.mac);
 else
  FUNC_2(VAR_2->hw_info.hw_mac_addr);

 if (FUNC_13(VAR_2)) {
  if (VAR_2->mcp_info->func_info.ovlan != VAR_1)
   VAR_2->hw_info.ovlan =
    VAR_2->mcp_info->func_info.ovlan;

  FUNC_11(VAR_2, VAR_3);

  FUNC_4(VAR_2, VAR_3);

  FUNC_14(VAR_2, VAR_3);
 }

 if (FUNC_13(VAR_2)) {
  enum qed_pci_personality VAR_6;

  VAR_6 = VAR_2->mcp_info->func_info.protocol;
  VAR_2->hw_info.personality = VAR_6;
 }

 if (FUNC_1(VAR_2))
  VAR_2->hw_info.multi_tc_roce_en = 1;

 VAR_2->hw_info.num_hw_tc = VAR_0;
 VAR_2->hw_info.num_active_tc = 1;

 FUNC_5(VAR_2, VAR_3);

 if (FUNC_13(VAR_2))
  VAR_2->hw_info.mtu = VAR_2->mcp_info->func_info.mtu;

 return FUNC_7(VAR_2, VAR_3);
}
