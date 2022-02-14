
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_public_vf_info {scalar_t__ tx_rate; int link_state; int forced_vlan; int mac; int forced_mac; } ;
struct qed_mcp_link_state {scalar_t__ speed; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int * hwfns; } ;
struct ifla_vf_info {int vf; int min_tx_rate; scalar_t__ max_tx_rate; int linkstate; int spoofchk; int vlan; int mac; } ;


 int FUNC_0 (struct qed_dev*,int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 struct qed_hwfn* FUNC_2 (struct qed_dev*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct qed_hwfn*,int,int *,struct qed_mcp_link_state*,int *) ;
 struct qed_public_vf_info* FUNC_6 (struct qed_hwfn*,int,int) ;
 int FUNC_7 (struct qed_hwfn*,int) ;
 int FUNC_8 (int *,int,int,int) ;
 int FUNC_9 (struct qed_hwfn*,int) ;

__attribute__((used)) static int FUNC_10(struct qed_dev *VAR_2,
        int VAR_3, struct ifla_vf_info *VAR_4)
{
 struct qed_hwfn *VAR_5 = FUNC_2(VAR_2);
 struct qed_public_vf_info *VAR_6;
 struct qed_mcp_link_state VAR_7;
 u32 VAR_8;


 if (FUNC_1(VAR_2))
  return -VAR_0;

 if (!FUNC_8(&VAR_2->hwfns[0], VAR_3, 1, 0)) {
  FUNC_0(VAR_2, VAR_1,
      "VF index [%d] isn't active\n", VAR_3);
  return -VAR_0;
 }

 VAR_6 = FUNC_6(VAR_5, VAR_3, 1);

 FUNC_5(VAR_5, VAR_3, ((void*)0), &VAR_7, ((void*)0));


 VAR_4->vf = VAR_3;

 if (FUNC_4(VAR_6->forced_mac))
  FUNC_3(VAR_4->mac, VAR_6->forced_mac);
 else
  FUNC_3(VAR_4->mac, VAR_6->mac);

 VAR_4->vlan = VAR_6->forced_vlan;
 VAR_4->spoofchk = FUNC_9(VAR_5, VAR_3);
 VAR_4->linkstate = VAR_6->link_state;
 VAR_8 = VAR_6->tx_rate;
 VAR_4->max_tx_rate = VAR_8 ? VAR_8 : VAR_7.speed;
 VAR_4->min_tx_rate = FUNC_7(VAR_5, VAR_3);

 return 0;
}
