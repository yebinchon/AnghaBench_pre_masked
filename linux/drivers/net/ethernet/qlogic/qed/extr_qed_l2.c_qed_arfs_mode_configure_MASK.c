
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int rel_pf_id; } ;
struct qed_arfs_config_params {scalar_t__ mode; scalar_t__ ipv6; scalar_t__ ipv4; scalar_t__ udp; scalar_t__ tcp; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;

void FUNC_4(struct qed_hwfn *VAR_2,
        struct qed_ptt *VAR_3,
        struct qed_arfs_config_params *VAR_4)
{
 if (VAR_4->mode != VAR_0) {
  FUNC_2(VAR_2, VAR_3, VAR_2->rel_pf_id,
          VAR_4->tcp,
          VAR_4->udp,
          VAR_4->ipv4,
          VAR_4->ipv6,
          FUNC_1(VAR_4->mode));
  FUNC_0(VAR_2,
      VAR_1,
      "Configured Filtering: tcp = %s, udp = %s, ipv4 = %s, ipv6 =%s mode=%08x\n",
      VAR_4->tcp ? "Enable" : "Disable",
      VAR_4->udp ? "Enable" : "Disable",
      VAR_4->ipv4 ? "Enable" : "Disable",
      VAR_4->ipv6 ? "Enable" : "Disable",
      (u32)VAR_4->mode);
 } else {
  FUNC_0(VAR_2, VAR_1, "Disabled Filtering\n");
  FUNC_3(VAR_2, VAR_3, VAR_2->rel_pf_id);
 }
}
