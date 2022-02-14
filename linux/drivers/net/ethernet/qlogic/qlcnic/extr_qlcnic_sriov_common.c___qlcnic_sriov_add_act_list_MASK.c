
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_trans_list {int count; int wait_list; } ;
struct qlcnic_vf_info {struct qlcnic_trans_list rcv_act; } ;
struct qlcnic_sriov {int dummy; } ;
struct qlcnic_bc_trans {int list; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct qlcnic_sriov*,struct qlcnic_vf_info*,int ) ;

int FUNC_2(struct qlcnic_sriov *VAR_1,
    struct qlcnic_vf_info *VAR_2,
    struct qlcnic_bc_trans *VAR_3)
{
 struct qlcnic_trans_list *VAR_4 = &VAR_2->rcv_act;

 VAR_4->count++;
 FUNC_0(&VAR_3->list, &VAR_4->wait_list);
 if (VAR_4->count == 1)
  FUNC_1(VAR_1, VAR_2,
          VAR_0);
 return 0;
}
