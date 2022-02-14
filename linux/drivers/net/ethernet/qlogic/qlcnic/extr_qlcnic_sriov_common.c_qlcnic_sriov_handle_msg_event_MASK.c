
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qlcnic_vf_info {TYPE_1__* adapter; } ;
struct qlcnic_sriov {int dummy; } ;
struct qlcnic_bc_hdr {int msg_type; } ;
struct TYPE_2__ {int ahw; } ;


 int FUNC_0 (int ,int) ;


 int FUNC_1 (struct qlcnic_sriov*,struct qlcnic_bc_hdr*,struct qlcnic_vf_info*) ;
 int FUNC_2 (struct qlcnic_bc_hdr*,struct qlcnic_vf_info*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_sriov *VAR_0,
       struct qlcnic_vf_info *VAR_1)
{
 struct qlcnic_bc_hdr VAR_2;
 u32 *VAR_3 = (u32 *)&VAR_2;
 u8 VAR_4, VAR_5;

 for (VAR_5 = 2; VAR_5 < 6; VAR_5++)
  VAR_3[VAR_5 - 2] = FUNC_3(FUNC_0(VAR_1->adapter->ahw, VAR_5));
 VAR_4 = VAR_2.msg_type;

 switch (VAR_4) {
 case 129:
  FUNC_1(VAR_0, &VAR_2, VAR_1);
  break;
 case 128:
  FUNC_2(&VAR_2, VAR_1);
  break;
 }
}
