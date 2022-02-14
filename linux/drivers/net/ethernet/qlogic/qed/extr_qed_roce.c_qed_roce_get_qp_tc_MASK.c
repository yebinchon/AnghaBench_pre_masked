
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_rdma_qp {int vlan_id; int icid; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_hwfn*,int) ;

__attribute__((used)) static u8 FUNC_2(struct qed_hwfn *VAR_3, struct qed_rdma_qp *VAR_4)
{
 u8 VAR_5, VAR_6 = 0;

 if (VAR_4->vlan_id) {
  VAR_5 = (VAR_4->vlan_id & VAR_1) >> VAR_2;
  VAR_6 = FUNC_1(VAR_3, VAR_5);
 }

 FUNC_0(VAR_3, VAR_0,
     "qp icid %u tc: %u (vlan priority %s)\n",
     VAR_4->icid, VAR_6, VAR_4->vlan_id ? "enabled" : "disabled");

 return VAR_6;
}
